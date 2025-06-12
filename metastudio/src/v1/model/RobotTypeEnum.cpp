

#include "huaweicloud/metastudio/v1/model/RobotTypeEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



RobotTypeEnum::RobotTypeEnum()
{
}

RobotTypeEnum::~RobotTypeEnum()
{
}

void RobotTypeEnum::validate()
{
}

web::json::value RobotTypeEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eRobotTypeEnum::RobotTypeEnum_LIVE) val = web::json::value::string(U("LIVE"));
    if (value_ == eRobotTypeEnum::RobotTypeEnum_CHAT) val = web::json::value::string(U("CHAT"));

    return val;
}

bool RobotTypeEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("LIVE")) value_ = eRobotTypeEnum::RobotTypeEnum_LIVE;
    if (s == utility::conversions::to_string_t("CHAT")) value_ = eRobotTypeEnum::RobotTypeEnum_CHAT;
    return true;
}

RobotTypeEnum::eRobotTypeEnum RobotTypeEnum::getValue() const
{
   return value_;
}

void RobotTypeEnum::setValue(RobotTypeEnum::eRobotTypeEnum const value)
{
   value_ = value;
}


}
}
}
}
}


