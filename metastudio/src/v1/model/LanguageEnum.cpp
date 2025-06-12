

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

    
    if (value_ == eLanguageEnum::LanguageEnum_zh_CN) val = web::json::value::string(U("zh_CN"));
    if (value_ == eLanguageEnum::LanguageEnum_en_US) val = web::json::value::string(U("en_US"));
    if (value_ == eLanguageEnum::LanguageEnum_CN) val = web::json::value::string(U("CN"));
    if (value_ == eLanguageEnum::LanguageEnum_EN) val = web::json::value::string(U("EN"));
    if (value_ == eLanguageEnum::LanguageEnum_ESP) val = web::json::value::string(U("ESP"));
    if (value_ == eLanguageEnum::LanguageEnum_por) val = web::json::value::string(U("por"));
    if (value_ == eLanguageEnum::LanguageEnum_Arabic) val = web::json::value::string(U("Arabic"));
    if (value_ == eLanguageEnum::LanguageEnum_Thai) val = web::json::value::string(U("Thai"));

    return val;
}

bool LanguageEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("zh_CN")) value_ = eLanguageEnum::LanguageEnum_zh_CN;
    if (s == utility::conversions::to_string_t("en_US")) value_ = eLanguageEnum::LanguageEnum_en_US;
    if (s == utility::conversions::to_string_t("CN")) value_ = eLanguageEnum::LanguageEnum_CN;
    if (s == utility::conversions::to_string_t("EN")) value_ = eLanguageEnum::LanguageEnum_EN;
    if (s == utility::conversions::to_string_t("ESP")) value_ = eLanguageEnum::LanguageEnum_ESP;
    if (s == utility::conversions::to_string_t("por")) value_ = eLanguageEnum::LanguageEnum_por;
    if (s == utility::conversions::to_string_t("Arabic")) value_ = eLanguageEnum::LanguageEnum_Arabic;
    if (s == utility::conversions::to_string_t("Thai")) value_ = eLanguageEnum::LanguageEnum_Thai;
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


