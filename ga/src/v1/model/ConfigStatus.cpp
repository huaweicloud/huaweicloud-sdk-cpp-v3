

#include "huaweicloud/ga/v1/model/ConfigStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {



ConfigStatus::ConfigStatus()
{
}

ConfigStatus::~ConfigStatus()
{
}

void ConfigStatus::validate()
{
}

web::json::value ConfigStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eConfigStatus::ConfigStatus_ACTIVE) val = web::json::value::string(U("ACTIVE"));
    if (value_ == eConfigStatus::ConfigStatus_PENDING) val = web::json::value::string(U("PENDING"));
    if (value_ == eConfigStatus::ConfigStatus_ERROR) val = web::json::value::string(U("ERROR"));
    if (value_ == eConfigStatus::ConfigStatus_DELETING) val = web::json::value::string(U("DELETING"));

    return val;
}

bool ConfigStatus::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("ACTIVE")) value_ = eConfigStatus::ConfigStatus_ACTIVE;
    if (s == utility::conversions::to_string_t("PENDING")) value_ = eConfigStatus::ConfigStatus_PENDING;
    if (s == utility::conversions::to_string_t("ERROR")) value_ = eConfigStatus::ConfigStatus_ERROR;
    if (s == utility::conversions::to_string_t("DELETING")) value_ = eConfigStatus::ConfigStatus_DELETING;
    return true;
}

ConfigStatus::eConfigStatus ConfigStatus::getValue() const
{
   return value_;
}

void ConfigStatus::setValue(ConfigStatus::eConfigStatus const value)
{
   value_ = value;
}


}
}
}
}
}


