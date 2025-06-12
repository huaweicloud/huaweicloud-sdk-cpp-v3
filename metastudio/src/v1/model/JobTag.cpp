

#include "huaweicloud/metastudio/v1/model/JobTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



JobTag::JobTag()
{
}

JobTag::~JobTag()
{
}

void JobTag::validate()
{
}

web::json::value JobTag::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eJobTag::JobTag_ECOMMERCE) val = web::json::value::string(U("ECOMMERCE"));
    if (value_ == eJobTag::JobTag_NEWS) val = web::json::value::string(U("NEWS"));
    if (value_ == eJobTag::JobTag_MARKETING) val = web::json::value::string(U("MARKETING"));

    return val;
}

bool JobTag::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("ECOMMERCE")) value_ = eJobTag::JobTag_ECOMMERCE;
    if (s == utility::conversions::to_string_t("NEWS")) value_ = eJobTag::JobTag_NEWS;
    if (s == utility::conversions::to_string_t("MARKETING")) value_ = eJobTag::JobTag_MARKETING;
    return true;
}

JobTag::eJobTag JobTag::getValue() const
{
   return value_;
}

void JobTag::setValue(JobTag::eJobTag const value)
{
   value_ = value;
}


}
}
}
}
}


