

#include "huaweicloud/metastudio/v1/model/SupportedServiceEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



SupportedServiceEnum::SupportedServiceEnum()
{
}

SupportedServiceEnum::~SupportedServiceEnum()
{
}

void SupportedServiceEnum::validate()
{
}

web::json::value SupportedServiceEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eSupportedServiceEnum::SupportedServiceEnum_VIDEO_2D) val = web::json::value::string(U("VIDEO_2D"));
    if (value_ == eSupportedServiceEnum::SupportedServiceEnum_LIVE_2D) val = web::json::value::string(U("LIVE_2D"));
    if (value_ == eSupportedServiceEnum::SupportedServiceEnum_CHAT_2D) val = web::json::value::string(U("CHAT_2D"));

    return val;
}

bool SupportedServiceEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("VIDEO_2D")) value_ = eSupportedServiceEnum::SupportedServiceEnum_VIDEO_2D;
    if (s == utility::conversions::to_string_t("LIVE_2D")) value_ = eSupportedServiceEnum::SupportedServiceEnum_LIVE_2D;
    if (s == utility::conversions::to_string_t("CHAT_2D")) value_ = eSupportedServiceEnum::SupportedServiceEnum_CHAT_2D;
    return true;
}

SupportedServiceEnum::eSupportedServiceEnum SupportedServiceEnum::getValue() const
{
   return value_;
}

void SupportedServiceEnum::setValue(SupportedServiceEnum::eSupportedServiceEnum const value)
{
   value_ = value;
}


}
}
}
}
}


