

#include "huaweicloud/metastudio/v1/model/JobType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



JobType::JobType()
{
}

JobType::~JobType()
{
}

void JobType::validate()
{
}

web::json::value JobType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eJobType::JobType_BASIC) val = web::json::value::string(U("BASIC"));
    if (value_ == eJobType::JobType_MIDDLE) val = web::json::value::string(U("MIDDLE"));
    if (value_ == eJobType::JobType_ADVANCE) val = web::json::value::string(U("ADVANCE"));
    if (value_ == eJobType::JobType_THIRD_PARTY) val = web::json::value::string(U("THIRD_PARTY"));
    if (value_ == eJobType::JobType_THIRD_PARTY_LJZN) val = web::json::value::string(U("THIRD_PARTY_LJZN"));
    if (value_ == eJobType::JobType_FLEXUS) val = web::json::value::string(U("FLEXUS"));

    return val;
}

bool JobType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("BASIC")) value_ = eJobType::JobType_BASIC;
    if (s == utility::conversions::to_string_t("MIDDLE")) value_ = eJobType::JobType_MIDDLE;
    if (s == utility::conversions::to_string_t("ADVANCE")) value_ = eJobType::JobType_ADVANCE;
    if (s == utility::conversions::to_string_t("THIRD_PARTY")) value_ = eJobType::JobType_THIRD_PARTY;
    if (s == utility::conversions::to_string_t("THIRD_PARTY_LJZN")) value_ = eJobType::JobType_THIRD_PARTY_LJZN;
    if (s == utility::conversions::to_string_t("FLEXUS")) value_ = eJobType::JobType_FLEXUS;
    return true;
}

JobType::eJobType JobType::getValue() const
{
   return value_;
}

void JobType::setValue(JobType::eJobType const value)
{
   value_ = value;
}


}
}
}
}
}


