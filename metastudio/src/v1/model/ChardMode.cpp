

#include "huaweicloud/metastudio/v1/model/ChardMode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



ChardMode::ChardMode()
{
}

ChardMode::~ChardMode()
{
}

void ChardMode::validate()
{
}

web::json::value ChardMode::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eChardMode::ChardMode_PERIODIC) val = web::json::value::string(U("PERIODIC"));
    if (value_ == eChardMode::ChardMode_ONE_TIME) val = web::json::value::string(U("ONE_TIME"));

    return val;
}

bool ChardMode::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("PERIODIC")) value_ = eChardMode::ChardMode_PERIODIC;
    if (s == utility::conversions::to_string_t("ONE_TIME")) value_ = eChardMode::ChardMode_ONE_TIME;
    return true;
}

ChardMode::eChardMode ChardMode::getValue() const
{
   return value_;
}

void ChardMode::setValue(ChardMode::eChardMode const value)
{
   value_ = value;
}


}
}
}
}
}


