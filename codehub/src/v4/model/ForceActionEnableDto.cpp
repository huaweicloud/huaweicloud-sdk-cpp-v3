

#include "huaweicloud/codehub/v4/model/ForceActionEnableDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ForceActionEnableDto::ForceActionEnableDto()
{
    name_ = "";
    nameIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
}

ForceActionEnableDto::~ForceActionEnableDto() = default;

void ForceActionEnableDto::validate()
{
}

web::json::value ForceActionEnableDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool ForceActionEnableDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    return ok;
}


std::string ForceActionEnableDto::getName() const
{
    return name_;
}

void ForceActionEnableDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ForceActionEnableDto::nameIsSet() const
{
    return nameIsSet_;
}

void ForceActionEnableDto::unsetname()
{
    nameIsSet_ = false;
}

bool ForceActionEnableDto::isEnable() const
{
    return enable_;
}

void ForceActionEnableDto::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ForceActionEnableDto::enableIsSet() const
{
    return enableIsSet_;
}

void ForceActionEnableDto::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


