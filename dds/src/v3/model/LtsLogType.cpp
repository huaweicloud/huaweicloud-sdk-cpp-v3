

#include "huaweicloud/dds/v3/model/LtsLogType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {



LtsLogType::LtsLogType()
{
}

LtsLogType::~LtsLogType()
{
}

void LtsLogType::validate()
{
}

web::json::value LtsLogType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eLtsLogType::LtsLogType_audit_log) val = web::json::value::string(U("audit_log"));

    return val;
}

bool LtsLogType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("audit_log")) value_ = eLtsLogType::LtsLogType_audit_log;
    return true;
}

LtsLogType::eLtsLogType LtsLogType::getValue() const
{
   return value_;
}

void LtsLogType::setValue(LtsLogType::eLtsLogType const value)
{
   value_ = value;
}


}
}
}
}
}


