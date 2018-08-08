// Auto-generated. Do not edit!

// (in-package tt_core_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');
let sensor_msgs = _finder('sensor_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class ROIPointArray {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.id = null;
      this.tag = null;
      this.FrameArray = null;
      this.Vector3DArray = null;
      this.extra = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = [];
      }
      if (initObj.hasOwnProperty('tag')) {
        this.tag = initObj.tag
      }
      else {
        this.tag = [];
      }
      if (initObj.hasOwnProperty('FrameArray')) {
        this.FrameArray = initObj.FrameArray
      }
      else {
        this.FrameArray = [];
      }
      if (initObj.hasOwnProperty('Vector3DArray')) {
        this.Vector3DArray = initObj.Vector3DArray
      }
      else {
        this.Vector3DArray = [];
      }
      if (initObj.hasOwnProperty('extra')) {
        this.extra = initObj.extra
      }
      else {
        this.extra = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ROIPointArray
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [id]
    bufferOffset = _arraySerializer.int32(obj.id, buffer, bufferOffset, null);
    // Serialize message field [tag]
    bufferOffset = _arraySerializer.int32(obj.tag, buffer, bufferOffset, null);
    // Serialize message field [FrameArray]
    // Serialize the length for message field [FrameArray]
    bufferOffset = _serializer.uint32(obj.FrameArray.length, buffer, bufferOffset);
    obj.FrameArray.forEach((val) => {
      bufferOffset = sensor_msgs.msg.CompressedImage.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [Vector3DArray]
    // Serialize the length for message field [Vector3DArray]
    bufferOffset = _serializer.uint32(obj.Vector3DArray.length, buffer, bufferOffset);
    obj.Vector3DArray.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Vector3.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [extra]
    bufferOffset = _arraySerializer.float32(obj.extra, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ROIPointArray
    let len;
    let data = new ROIPointArray(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [id]
    data.id = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [tag]
    data.tag = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [FrameArray]
    // Deserialize array length for message field [FrameArray]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.FrameArray = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.FrameArray[i] = sensor_msgs.msg.CompressedImage.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [Vector3DArray]
    // Deserialize array length for message field [Vector3DArray]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.Vector3DArray = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.Vector3DArray[i] = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [extra]
    data.extra = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += 4 * object.id.length;
    length += 4 * object.tag.length;
    object.FrameArray.forEach((val) => {
      length += sensor_msgs.msg.CompressedImage.getMessageSize(val);
    });
    length += 24 * object.Vector3DArray.length;
    length += 4 * object.extra.length;
    return length + 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'tt_core_msgs/ROIPointArray';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6a90b51aaad299305e57af7d9a114865';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    int32[] id
    int32[] tag
    sensor_msgs/CompressedImage[] FrameArray
    geometry_msgs/Vector3[] Vector3DArray
    float32[] extra
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: sensor_msgs/CompressedImage
    # This message contains a compressed image
    
    Header header        # Header timestamp should be acquisition time of image
                         # Header frame_id should be optical frame of camera
                         # origin of frame should be optical center of cameara
                         # +x should point to the right in the image
                         # +y should point down in the image
                         # +z should point into to plane of the image
    
    string format        # Specifies the format of the data
                         #   Acceptable values:
                         #     jpeg, png
    uint8[] data         # Compressed image buffer
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ROIPointArray(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = []
    }

    if (msg.tag !== undefined) {
      resolved.tag = msg.tag;
    }
    else {
      resolved.tag = []
    }

    if (msg.FrameArray !== undefined) {
      resolved.FrameArray = new Array(msg.FrameArray.length);
      for (let i = 0; i < resolved.FrameArray.length; ++i) {
        resolved.FrameArray[i] = sensor_msgs.msg.CompressedImage.Resolve(msg.FrameArray[i]);
      }
    }
    else {
      resolved.FrameArray = []
    }

    if (msg.Vector3DArray !== undefined) {
      resolved.Vector3DArray = new Array(msg.Vector3DArray.length);
      for (let i = 0; i < resolved.Vector3DArray.length; ++i) {
        resolved.Vector3DArray[i] = geometry_msgs.msg.Vector3.Resolve(msg.Vector3DArray[i]);
      }
    }
    else {
      resolved.Vector3DArray = []
    }

    if (msg.extra !== undefined) {
      resolved.extra = msg.extra;
    }
    else {
      resolved.extra = []
    }

    return resolved;
    }
};

module.exports = ROIPointArray;
