

#include "huaweicloud/ga/v1/model/LogtankResourceType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {



LogtankResourceType::LogtankResourceType()
{
}

LogtankResourceType::~LogtankResourceType()
{
}

void LogtankResourceType::validate()
{
}

web::json::value LogtankResourceType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eLogtankResourceType::LogtankResourceType_LISTENER) val = web::json::value::string(U("LISTENER"));

    return val;
}

bool LogtankResourceType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("LISTENER")) value_ = eLogtankResourceType::LogtankResourceType_LISTENER;
    return true;
}

LogtankResourceType::eLogtankResourceType LogtankResourceType::getValue() const
{
   return value_;
}

void LogtankResourceType::setValue(LogtankResourceType::eLogtankResourceType const value)
{
   value_ = value;
}


}
}
}
}
}


