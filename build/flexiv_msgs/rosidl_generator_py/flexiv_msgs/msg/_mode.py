# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flexiv_msgs:msg/Mode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Mode(type):
    """Metaclass of message 'Mode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_UNKNOWN': -1,
        'MODE_IDLE': 0,
        'MODE_JOINT_TORQUE': 1,
        'MODE_JOINT_POSITION': 2,
        'MODE_JOINT_POSITION_NRT': 3,
        'MODE_PLAN_EXECUTION': 4,
        'MODE_PRIMITIVE_EXECUTION': 5,
        'MODE_CARTESIAN_IMPEDANCE': 6,
        'MODE_CARTESIAN_IMPEDANCE_NRT': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('flexiv_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flexiv_msgs.msg.Mode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_UNKNOWN': cls.__constants['MODE_UNKNOWN'],
            'MODE_IDLE': cls.__constants['MODE_IDLE'],
            'MODE_JOINT_TORQUE': cls.__constants['MODE_JOINT_TORQUE'],
            'MODE_JOINT_POSITION': cls.__constants['MODE_JOINT_POSITION'],
            'MODE_JOINT_POSITION_NRT': cls.__constants['MODE_JOINT_POSITION_NRT'],
            'MODE_PLAN_EXECUTION': cls.__constants['MODE_PLAN_EXECUTION'],
            'MODE_PRIMITIVE_EXECUTION': cls.__constants['MODE_PRIMITIVE_EXECUTION'],
            'MODE_CARTESIAN_IMPEDANCE': cls.__constants['MODE_CARTESIAN_IMPEDANCE'],
            'MODE_CARTESIAN_IMPEDANCE_NRT': cls.__constants['MODE_CARTESIAN_IMPEDANCE_NRT'],
        }

    @property
    def MODE_UNKNOWN(self):
        """Message constant 'MODE_UNKNOWN'."""
        return Metaclass_Mode.__constants['MODE_UNKNOWN']

    @property
    def MODE_IDLE(self):
        """Message constant 'MODE_IDLE'."""
        return Metaclass_Mode.__constants['MODE_IDLE']

    @property
    def MODE_JOINT_TORQUE(self):
        """Message constant 'MODE_JOINT_TORQUE'."""
        return Metaclass_Mode.__constants['MODE_JOINT_TORQUE']

    @property
    def MODE_JOINT_POSITION(self):
        """Message constant 'MODE_JOINT_POSITION'."""
        return Metaclass_Mode.__constants['MODE_JOINT_POSITION']

    @property
    def MODE_JOINT_POSITION_NRT(self):
        """Message constant 'MODE_JOINT_POSITION_NRT'."""
        return Metaclass_Mode.__constants['MODE_JOINT_POSITION_NRT']

    @property
    def MODE_PLAN_EXECUTION(self):
        """Message constant 'MODE_PLAN_EXECUTION'."""
        return Metaclass_Mode.__constants['MODE_PLAN_EXECUTION']

    @property
    def MODE_PRIMITIVE_EXECUTION(self):
        """Message constant 'MODE_PRIMITIVE_EXECUTION'."""
        return Metaclass_Mode.__constants['MODE_PRIMITIVE_EXECUTION']

    @property
    def MODE_CARTESIAN_IMPEDANCE(self):
        """Message constant 'MODE_CARTESIAN_IMPEDANCE'."""
        return Metaclass_Mode.__constants['MODE_CARTESIAN_IMPEDANCE']

    @property
    def MODE_CARTESIAN_IMPEDANCE_NRT(self):
        """Message constant 'MODE_CARTESIAN_IMPEDANCE_NRT'."""
        return Metaclass_Mode.__constants['MODE_CARTESIAN_IMPEDANCE_NRT']


class Mode(metaclass=Metaclass_Mode):
    """
    Message class 'Mode'.

    Constants:
      MODE_UNKNOWN
      MODE_IDLE
      MODE_JOINT_TORQUE
      MODE_JOINT_POSITION
      MODE_JOINT_POSITION_NRT
      MODE_PLAN_EXECUTION
      MODE_PRIMITIVE_EXECUTION
      MODE_CARTESIAN_IMPEDANCE
      MODE_CARTESIAN_IMPEDANCE_NRT
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
