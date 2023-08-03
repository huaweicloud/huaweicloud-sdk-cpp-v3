

#include "huaweicloud/rds/v3/model/Single2Ha.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Single2Ha::Single2Ha()
{
    singleToHaIsSet_ = false;
}

Single2Ha::~Single2Ha() = default;

void Single2Ha::validate()
{
}

web::json::value Single2Ha::toJson() const
{
    web::json::value val = web::json::value::object();

    if(singleToHaIsSet_) {
        val[utility::conversions::to_string_t("single_to_ha")] = ModelBase::toJson(singleToHa_);
    }

    return val;
}

bool Single2Ha::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("single_to_ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("single_to_ha"));
        if(!fieldValue.is_null())
        {
            Single2HaObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSingleToHa(refVal);
        }
    }
    return ok;
}

Single2HaObject Single2Ha::getSingleToHa() const
{
    return singleToHa_;
}

void Single2Ha::setSingleToHa(const Single2HaObject& value)
{
    singleToHa_ = value;
    singleToHaIsSet_ = true;
}

bool Single2Ha::singleToHaIsSet() const
{
    return singleToHaIsSet_;
}

void Single2Ha::unsetsingleToHa()
{
    singleToHaIsSet_ = false;
}

}
}
}
}
}


