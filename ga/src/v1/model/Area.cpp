

#include "huaweicloud/ga/v1/model/Area.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {



Area::Area()
{
}

Area::~Area()
{
}

void Area::validate()
{
}

web::json::value Area::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eArea::Area_OUTOFCM) val = web::json::value::string(U("OUTOFCM"));
    if (value_ == eArea::Area_CM) val = web::json::value::string(U("CM"));

    return val;
}

bool Area::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("OUTOFCM")) value_ = eArea::Area_OUTOFCM;
    if (s == utility::conversions::to_string_t("CM")) value_ = eArea::Area_CM;
    return true;
}

Area::eArea Area::getValue() const
{
   return value_;
}

void Area::setValue(Area::eArea const value)
{
   value_ = value;
}


}
}
}
}
}


