

#include "huaweicloud/meeting/v1/model/OrgPropertyDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OrgPropertyDTO::OrgPropertyDTO()
{
    propertyKey_ = "";
    propertyKeyIsSet_ = false;
    propertyValue_ = "";
    propertyValueIsSet_ = false;
}

OrgPropertyDTO::~OrgPropertyDTO() = default;

void OrgPropertyDTO::validate()
{
}

web::json::value OrgPropertyDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertyKeyIsSet_) {
        val[utility::conversions::to_string_t("propertyKey")] = ModelBase::toJson(propertyKey_);
    }
    if(propertyValueIsSet_) {
        val[utility::conversions::to_string_t("propertyValue")] = ModelBase::toJson(propertyValue_);
    }

    return val;
}
bool OrgPropertyDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("propertyKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("propertyKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPropertyKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("propertyValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("propertyValue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPropertyValue(refVal);
        }
    }
    return ok;
}


std::string OrgPropertyDTO::getPropertyKey() const
{
    return propertyKey_;
}

void OrgPropertyDTO::setPropertyKey(const std::string& value)
{
    propertyKey_ = value;
    propertyKeyIsSet_ = true;
}

bool OrgPropertyDTO::propertyKeyIsSet() const
{
    return propertyKeyIsSet_;
}

void OrgPropertyDTO::unsetpropertyKey()
{
    propertyKeyIsSet_ = false;
}

std::string OrgPropertyDTO::getPropertyValue() const
{
    return propertyValue_;
}

void OrgPropertyDTO::setPropertyValue(const std::string& value)
{
    propertyValue_ = value;
    propertyValueIsSet_ = true;
}

bool OrgPropertyDTO::propertyValueIsSet() const
{
    return propertyValueIsSet_;
}

void OrgPropertyDTO::unsetpropertyValue()
{
    propertyValueIsSet_ = false;
}

}
}
}
}
}


