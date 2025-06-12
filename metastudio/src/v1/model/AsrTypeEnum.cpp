

#include "huaweicloud/metastudio/v1/model/AsrTypeEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



AsrTypeEnum::AsrTypeEnum()
{
}

AsrTypeEnum::~AsrTypeEnum()
{
}

void AsrTypeEnum::validate()
{
}

web::json::value AsrTypeEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eAsrTypeEnum::AsrTypeEnum_EI_SIS) val = web::json::value::string(U("EI_SIS"));
    if (value_ == eAsrTypeEnum::AsrTypeEnum_MOBVOI) val = web::json::value::string(U("MOBVOI"));

    return val;
}

bool AsrTypeEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("EI_SIS")) value_ = eAsrTypeEnum::AsrTypeEnum_EI_SIS;
    if (s == utility::conversions::to_string_t("MOBVOI")) value_ = eAsrTypeEnum::AsrTypeEnum_MOBVOI;
    return true;
}

AsrTypeEnum::eAsrTypeEnum AsrTypeEnum::getValue() const
{
   return value_;
}

void AsrTypeEnum::setValue(AsrTypeEnum::eAsrTypeEnum const value)
{
   value_ = value;
}


}
}
}
}
}


