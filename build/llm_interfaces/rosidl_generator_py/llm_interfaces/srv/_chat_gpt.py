# generated from rosidl_generator_py/resource/_idl.py.em
# with input from llm_interfaces:srv/ChatGPT.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChatGPT_Request(type):
    """Metaclass of message 'ChatGPT_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('llm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'llm_interfaces.srv.ChatGPT_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__chat_gpt__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__chat_gpt__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__chat_gpt__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__chat_gpt__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__chat_gpt__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChatGPT_Request(metaclass=Metaclass_ChatGPT_Request):
    """Message class 'ChatGPT_Request'."""

    __slots__ = [
        '_request_text',
    ]

    _fields_and_field_types = {
        'request_text': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.request_text = kwargs.get('request_text', str())

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
        if self.request_text != other.request_text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def request_text(self):
        """Message field 'request_text'."""
        return self._request_text

    @request_text.setter
    def request_text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'request_text' field must be of type 'str'"
        self._request_text = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChatGPT_Response(type):
    """Metaclass of message 'ChatGPT_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('llm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'llm_interfaces.srv.ChatGPT_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__chat_gpt__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__chat_gpt__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__chat_gpt__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__chat_gpt__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__chat_gpt__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChatGPT_Response(metaclass=Metaclass_ChatGPT_Response):
    """Message class 'ChatGPT_Response'."""

    __slots__ = [
        '_response_text',
    ]

    _fields_and_field_types = {
        'response_text': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response_text = kwargs.get('response_text', str())

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
        if self.response_text != other.response_text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response_text(self):
        """Message field 'response_text'."""
        return self._response_text

    @response_text.setter
    def response_text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response_text' field must be of type 'str'"
        self._response_text = value


class Metaclass_ChatGPT(type):
    """Metaclass of service 'ChatGPT'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('llm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'llm_interfaces.srv.ChatGPT')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__chat_gpt

            from llm_interfaces.srv import _chat_gpt
            if _chat_gpt.Metaclass_ChatGPT_Request._TYPE_SUPPORT is None:
                _chat_gpt.Metaclass_ChatGPT_Request.__import_type_support__()
            if _chat_gpt.Metaclass_ChatGPT_Response._TYPE_SUPPORT is None:
                _chat_gpt.Metaclass_ChatGPT_Response.__import_type_support__()


class ChatGPT(metaclass=Metaclass_ChatGPT):
    from llm_interfaces.srv._chat_gpt import ChatGPT_Request as Request
    from llm_interfaces.srv._chat_gpt import ChatGPT_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
