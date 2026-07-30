

#include "huaweicloud/modelarts/v1/model/NodeTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeTag::NodeTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

NodeTag::~NodeTag() = default;

void NodeTag::validate()
{
}

web::json::value NodeTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool NodeTag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string NodeTag::getKey() const
{
    return key_;
}

void NodeTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool NodeTag::keyIsSet() const
{
    return keyIsSet_;
}

void NodeTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string NodeTag::getValue() const
{
    return value_;
}

void NodeTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool NodeTag::valueIsSet() const
{
    return valueIsSet_;
}

void NodeTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


