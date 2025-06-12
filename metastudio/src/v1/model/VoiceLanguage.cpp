

#include "huaweicloud/metastudio/v1/model/VoiceLanguage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



VoiceLanguage::VoiceLanguage()
{
}

VoiceLanguage::~VoiceLanguage()
{
}

void VoiceLanguage::validate()
{
}

web::json::value VoiceLanguage::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eVoiceLanguage::VoiceLanguage_UNKNOW) val = web::json::value::string(U("UNKNOW"));
    if (value_ == eVoiceLanguage::VoiceLanguage_CN) val = web::json::value::string(U("CN"));
    if (value_ == eVoiceLanguage::VoiceLanguage_EN) val = web::json::value::string(U("EN"));
    if (value_ == eVoiceLanguage::VoiceLanguage_GER) val = web::json::value::string(U("GER"));
    if (value_ == eVoiceLanguage::VoiceLanguage_fr) val = web::json::value::string(U("fr"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Kr) val = web::json::value::string(U("Kr"));
    if (value_ == eVoiceLanguage::VoiceLanguage_por) val = web::json::value::string(U("por"));
    if (value_ == eVoiceLanguage::VoiceLanguage_JPN) val = web::json::value::string(U("JPN"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Ita) val = web::json::value::string(U("Ita"));
    if (value_ == eVoiceLanguage::VoiceLanguage_ESP) val = web::json::value::string(U("ESP"));
    if (value_ == eVoiceLanguage::VoiceLanguage_DBH) val = web::json::value::string(U("DBH"));
    if (value_ == eVoiceLanguage::VoiceLanguage_GT) val = web::json::value::string(U("GT"));
    if (value_ == eVoiceLanguage::VoiceLanguage_GXH) val = web::json::value::string(U("GXH"));
    if (value_ == eVoiceLanguage::VoiceLanguage_HBH) val = web::json::value::string(U("HBH"));
    if (value_ == eVoiceLanguage::VoiceLanguage_SXH) val = web::json::value::string(U("SXH"));
    if (value_ == eVoiceLanguage::VoiceLanguage_SCH) val = web::json::value::string(U("SCH"));
    if (value_ == eVoiceLanguage::VoiceLanguage_YY) val = web::json::value::string(U("YY"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Russian) val = web::json::value::string(U("Russian"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Filipino) val = web::json::value::string(U("Filipino"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Dutch) val = web::json::value::string(U("Dutch"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Indonesian) val = web::json::value::string(U("Indonesian"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Vietnamese) val = web::json::value::string(U("Vietnamese"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Arabic) val = web::json::value::string(U("Arabic"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Turkish) val = web::json::value::string(U("Turkish"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Malay) val = web::json::value::string(U("Malay"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Thai) val = web::json::value::string(U("Thai"));
    if (value_ == eVoiceLanguage::VoiceLanguage_Finnish) val = web::json::value::string(U("Finnish"));

    return val;
}

bool VoiceLanguage::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("UNKNOW")) value_ = eVoiceLanguage::VoiceLanguage_UNKNOW;
    if (s == utility::conversions::to_string_t("CN")) value_ = eVoiceLanguage::VoiceLanguage_CN;
    if (s == utility::conversions::to_string_t("EN")) value_ = eVoiceLanguage::VoiceLanguage_EN;
    if (s == utility::conversions::to_string_t("GER")) value_ = eVoiceLanguage::VoiceLanguage_GER;
    if (s == utility::conversions::to_string_t("fr")) value_ = eVoiceLanguage::VoiceLanguage_fr;
    if (s == utility::conversions::to_string_t("Kr")) value_ = eVoiceLanguage::VoiceLanguage_Kr;
    if (s == utility::conversions::to_string_t("por")) value_ = eVoiceLanguage::VoiceLanguage_por;
    if (s == utility::conversions::to_string_t("JPN")) value_ = eVoiceLanguage::VoiceLanguage_JPN;
    if (s == utility::conversions::to_string_t("Ita")) value_ = eVoiceLanguage::VoiceLanguage_Ita;
    if (s == utility::conversions::to_string_t("ESP")) value_ = eVoiceLanguage::VoiceLanguage_ESP;
    if (s == utility::conversions::to_string_t("DBH")) value_ = eVoiceLanguage::VoiceLanguage_DBH;
    if (s == utility::conversions::to_string_t("GT")) value_ = eVoiceLanguage::VoiceLanguage_GT;
    if (s == utility::conversions::to_string_t("GXH")) value_ = eVoiceLanguage::VoiceLanguage_GXH;
    if (s == utility::conversions::to_string_t("HBH")) value_ = eVoiceLanguage::VoiceLanguage_HBH;
    if (s == utility::conversions::to_string_t("SXH")) value_ = eVoiceLanguage::VoiceLanguage_SXH;
    if (s == utility::conversions::to_string_t("SCH")) value_ = eVoiceLanguage::VoiceLanguage_SCH;
    if (s == utility::conversions::to_string_t("YY")) value_ = eVoiceLanguage::VoiceLanguage_YY;
    if (s == utility::conversions::to_string_t("Russian")) value_ = eVoiceLanguage::VoiceLanguage_Russian;
    if (s == utility::conversions::to_string_t("Filipino")) value_ = eVoiceLanguage::VoiceLanguage_Filipino;
    if (s == utility::conversions::to_string_t("Dutch")) value_ = eVoiceLanguage::VoiceLanguage_Dutch;
    if (s == utility::conversions::to_string_t("Indonesian")) value_ = eVoiceLanguage::VoiceLanguage_Indonesian;
    if (s == utility::conversions::to_string_t("Vietnamese")) value_ = eVoiceLanguage::VoiceLanguage_Vietnamese;
    if (s == utility::conversions::to_string_t("Arabic")) value_ = eVoiceLanguage::VoiceLanguage_Arabic;
    if (s == utility::conversions::to_string_t("Turkish")) value_ = eVoiceLanguage::VoiceLanguage_Turkish;
    if (s == utility::conversions::to_string_t("Malay")) value_ = eVoiceLanguage::VoiceLanguage_Malay;
    if (s == utility::conversions::to_string_t("Thai")) value_ = eVoiceLanguage::VoiceLanguage_Thai;
    if (s == utility::conversions::to_string_t("Finnish")) value_ = eVoiceLanguage::VoiceLanguage_Finnish;
    return true;
}

VoiceLanguage::eVoiceLanguage VoiceLanguage::getValue() const
{
   return value_;
}

void VoiceLanguage::setValue(VoiceLanguage::eVoiceLanguage const value)
{
   value_ = value;
}


}
}
}
}
}


