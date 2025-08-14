

#include "huaweicloud/iotda/v5/model/UserPropDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UserPropDTO::UserPropDTO()
{
    propKey_ = "";
    propKeyIsSet_ = false;
    propValue_ = "";
    propValueIsSet_ = false;
}

UserPropDTO::~UserPropDTO() = default;

void UserPropDTO::validate()
{
}

web::json::value UserPropDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propKeyIsSet_) {
        val[utility::conversions::to_string_t("prop_key")] = ModelBase::toJson(propKey_);
    }
    if(propValueIsSet_) {
        val[utility::conversions::to_string_t("prop_value")] = ModelBase::toJson(propValue_);
    }

    return val;
}
bool UserPropDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("prop_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prop_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPropKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prop_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prop_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPropValue(refVal);
        }
    }
    return ok;
}


std::string UserPropDTO::getPropKey() const
{
    return propKey_;
}

void UserPropDTO::setPropKey(const std::string& value)
{
    propKey_ = value;
    propKeyIsSet_ = true;
}

bool UserPropDTO::propKeyIsSet() const
{
    return propKeyIsSet_;
}

void UserPropDTO::unsetpropKey()
{
    propKeyIsSet_ = false;
}

std::string UserPropDTO::getPropValue() const
{
    return propValue_;
}

void UserPropDTO::setPropValue(const std::string& value)
{
    propValue_ = value;
    propValueIsSet_ = true;
}

bool UserPropDTO::propValueIsSet() const
{
    return propValueIsSet_;
}

void UserPropDTO::unsetpropValue()
{
    propValueIsSet_ = false;
}

}
}
}
}
}


