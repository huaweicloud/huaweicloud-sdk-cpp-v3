

#include "huaweicloud/meeting/v1/model/YesNoEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {



YesNoEnum::YesNoEnum()
{
}

YesNoEnum::~YesNoEnum()
{
}

void YesNoEnum::validate()
{
}

web::json::value YesNoEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eYesNoEnum::YesNoEnum_Y) val = web::json::value::string(U("Y"));
    if (value_ == eYesNoEnum::YesNoEnum_N) val = web::json::value::string(U("N"));

    return val;
}

bool YesNoEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("Y")) value_ = eYesNoEnum::YesNoEnum_Y;
    if (s == utility::conversions::to_string_t("N")) value_ = eYesNoEnum::YesNoEnum_N;
    return true;
}

YesNoEnum::eYesNoEnum YesNoEnum::getValue() const
{
   return value_;
}

void YesNoEnum::setValue(YesNoEnum::eYesNoEnum const value)
{
   value_ = value;
}


}
}
}
}
}


