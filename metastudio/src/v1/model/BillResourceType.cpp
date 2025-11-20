

#include "huaweicloud/metastudio/v1/model/BillResourceType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



BillResourceType::BillResourceType()
{
}

BillResourceType::~BillResourceType()
{
}

void BillResourceType::validate()
{
}

web::json::value BillResourceType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eBillResourceType::BillResourceType_2D_DIGITAL_HUMAN_BASIC) val = web::json::value::string(U("2D_DIGITAL_HUMAN_BASIC"));
    if (value_ == eBillResourceType::BillResourceType_2D_DIGITAL_HUMAN_ADVANCED) val = web::json::value::string(U("2D_DIGITAL_HUMAN_ADVANCED"));
    if (value_ == eBillResourceType::BillResourceType_2D_DIGITAL_HUMAN_FLEXUS) val = web::json::value::string(U("2D_DIGITAL_HUMAN_FLEXUS"));
    if (value_ == eBillResourceType::BillResourceType_VOICE_BASIC) val = web::json::value::string(U("VOICE_BASIC"));
    if (value_ == eBillResourceType::BillResourceType_VOICE_MIDDLE) val = web::json::value::string(U("VOICE_MIDDLE"));
    if (value_ == eBillResourceType::BillResourceType_VOICE_ADVANCE) val = web::json::value::string(U("VOICE_ADVANCE"));
    if (value_ == eBillResourceType::BillResourceType_VOICE_THIRD_PARTY) val = web::json::value::string(U("VOICE_THIRD_PARTY"));
    if (value_ == eBillResourceType::BillResourceType_VOICE_THIRD_PARTY_LJZN) val = web::json::value::string(U("VOICE_THIRD_PARTY_LJZN"));
    if (value_ == eBillResourceType::BillResourceType_VOICE_FLEXUS) val = web::json::value::string(U("VOICE_FLEXUS"));

    return val;
}

bool BillResourceType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("2D_DIGITAL_HUMAN_BASIC")) value_ = eBillResourceType::BillResourceType_2D_DIGITAL_HUMAN_BASIC;
    if (s == utility::conversions::to_string_t("2D_DIGITAL_HUMAN_ADVANCED")) value_ = eBillResourceType::BillResourceType_2D_DIGITAL_HUMAN_ADVANCED;
    if (s == utility::conversions::to_string_t("2D_DIGITAL_HUMAN_FLEXUS")) value_ = eBillResourceType::BillResourceType_2D_DIGITAL_HUMAN_FLEXUS;
    if (s == utility::conversions::to_string_t("VOICE_BASIC")) value_ = eBillResourceType::BillResourceType_VOICE_BASIC;
    if (s == utility::conversions::to_string_t("VOICE_MIDDLE")) value_ = eBillResourceType::BillResourceType_VOICE_MIDDLE;
    if (s == utility::conversions::to_string_t("VOICE_ADVANCE")) value_ = eBillResourceType::BillResourceType_VOICE_ADVANCE;
    if (s == utility::conversions::to_string_t("VOICE_THIRD_PARTY")) value_ = eBillResourceType::BillResourceType_VOICE_THIRD_PARTY;
    if (s == utility::conversions::to_string_t("VOICE_THIRD_PARTY_LJZN")) value_ = eBillResourceType::BillResourceType_VOICE_THIRD_PARTY_LJZN;
    if (s == utility::conversions::to_string_t("VOICE_FLEXUS")) value_ = eBillResourceType::BillResourceType_VOICE_FLEXUS;
    return true;
}

BillResourceType::eBillResourceType BillResourceType::getValue() const
{
   return value_;
}

void BillResourceType::setValue(BillResourceType::eBillResourceType const value)
{
   value_ = value;
}


}
}
}
}
}


