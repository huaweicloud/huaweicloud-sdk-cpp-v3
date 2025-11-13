

#include "huaweicloud/metastudio/v1/model/ShortJobType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



ShortJobType::ShortJobType()
{
}

ShortJobType::~ShortJobType()
{
}

void ShortJobType::validate()
{
}

web::json::value ShortJobType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eShortJobType::ShortJobType_VOICE_ASSESS) val = web::json::value::string(U("VOICE_ASSESS"));

    return val;
}

bool ShortJobType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("VOICE_ASSESS")) value_ = eShortJobType::ShortJobType_VOICE_ASSESS;
    return true;
}

ShortJobType::eShortJobType ShortJobType::getValue() const
{
   return value_;
}

void ShortJobType::setValue(ShortJobType::eShortJobType const value)
{
   value_ = value;
}


}
}
}
}
}


