

#include "huaweicloud/metastudio/v1/model/LlmSourceEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



LlmSourceEnum::LlmSourceEnum()
{
}

LlmSourceEnum::~LlmSourceEnum()
{
}

void LlmSourceEnum::validate()
{
}

web::json::value LlmSourceEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eLlmSourceEnum::LlmSourceEnum_LLM_CONFIG) val = web::json::value::string(U("LLM_CONFIG"));
    if (value_ == eLlmSourceEnum::LlmSourceEnum_DEEP_SEEK) val = web::json::value::string(U("DEEP_SEEK"));

    return val;
}

bool LlmSourceEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("LLM_CONFIG")) value_ = eLlmSourceEnum::LlmSourceEnum_LLM_CONFIG;
    if (s == utility::conversions::to_string_t("DEEP_SEEK")) value_ = eLlmSourceEnum::LlmSourceEnum_DEEP_SEEK;
    return true;
}

LlmSourceEnum::eLlmSourceEnum LlmSourceEnum::getValue() const
{
   return value_;
}

void LlmSourceEnum::setValue(LlmSourceEnum::eLlmSourceEnum const value)
{
   value_ = value;
}


}
}
}
}
}


