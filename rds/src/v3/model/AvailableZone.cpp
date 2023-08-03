

#include "huaweicloud/rds/v3/model/AvailableZone.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AvailableZone::AvailableZone()
{
    code_ = "";
    codeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AvailableZone::~AvailableZone() = default;

void AvailableZone::validate()
{
}

web::json::value AvailableZone::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool AvailableZone::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}

std::string AvailableZone::getCode() const
{
    return code_;
}

void AvailableZone::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool AvailableZone::codeIsSet() const
{
    return codeIsSet_;
}

void AvailableZone::unsetcode()
{
    codeIsSet_ = false;
}

std::string AvailableZone::getDescription() const
{
    return description_;
}

void AvailableZone::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AvailableZone::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AvailableZone::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


