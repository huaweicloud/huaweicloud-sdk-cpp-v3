

#include "huaweicloud/metastudio/v1/model/LanguageEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



LanguageEnum::LanguageEnum()
{
}

LanguageEnum::~LanguageEnum()
{
}

void LanguageEnum::validate()
{
}

web::json::value LanguageEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eLanguageEnum::LanguageEnum_CN) val = web::json::value::string(U("CN"));
    if (value_ == eLanguageEnum::LanguageEnum_EN) val = web::json::value::string(U("EN"));

    return val;
}

bool LanguageEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("CN")) value_ = eLanguageEnum::LanguageEnum_CN;
    if (s == utility::conversions::to_string_t("EN")) value_ = eLanguageEnum::LanguageEnum_EN;
    return true;
}

LanguageEnum::eLanguageEnum LanguageEnum::getValue() const
{
   return value_;
}

void LanguageEnum::setValue(LanguageEnum::eLanguageEnum const value)
{
   value_ = value;
}


}
}
}
}
}


