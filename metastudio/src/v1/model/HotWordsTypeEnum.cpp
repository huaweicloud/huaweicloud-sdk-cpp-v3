

#include "huaweicloud/metastudio/v1/model/HotWordsTypeEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



HotWordsTypeEnum::HotWordsTypeEnum()
{
}

HotWordsTypeEnum::~HotWordsTypeEnum()
{
}

void HotWordsTypeEnum::validate()
{
}

web::json::value HotWordsTypeEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eHotWordsTypeEnum::HotWordsTypeEnum_SIS) val = web::json::value::string(U("SIS"));

    return val;
}

bool HotWordsTypeEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("SIS")) value_ = eHotWordsTypeEnum::HotWordsTypeEnum_SIS;
    return true;
}

HotWordsTypeEnum::eHotWordsTypeEnum HotWordsTypeEnum::getValue() const
{
   return value_;
}

void HotWordsTypeEnum::setValue(HotWordsTypeEnum::eHotWordsTypeEnum const value)
{
   value_ = value;
}


}
}
}
}
}


