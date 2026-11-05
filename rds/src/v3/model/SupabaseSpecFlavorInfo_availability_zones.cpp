

#include "huaweicloud/rds/v3/model/SupabaseSpecFlavorInfo_availability_zones.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseSpecFlavorInfo_availability_zones::SupabaseSpecFlavorInfo_availability_zones()
{
    code_ = "";
    codeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SupabaseSpecFlavorInfo_availability_zones::~SupabaseSpecFlavorInfo_availability_zones() = default;

void SupabaseSpecFlavorInfo_availability_zones::validate()
{
}

web::json::value SupabaseSpecFlavorInfo_availability_zones::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SupabaseSpecFlavorInfo_availability_zones::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SupabaseSpecFlavorInfo_availability_zones::getCode() const
{
    return code_;
}

void SupabaseSpecFlavorInfo_availability_zones::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool SupabaseSpecFlavorInfo_availability_zones::codeIsSet() const
{
    return codeIsSet_;
}

void SupabaseSpecFlavorInfo_availability_zones::unsetcode()
{
    codeIsSet_ = false;
}

std::string SupabaseSpecFlavorInfo_availability_zones::getStatus() const
{
    return status_;
}

void SupabaseSpecFlavorInfo_availability_zones::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SupabaseSpecFlavorInfo_availability_zones::statusIsSet() const
{
    return statusIsSet_;
}

void SupabaseSpecFlavorInfo_availability_zones::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


