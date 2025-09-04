

#include "huaweicloud/cdn/v2/model/TopUa.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TopUa::TopUa()
{
    enable_ = false;
    enableIsSet_ = false;
}

TopUa::~TopUa() = default;

void TopUa::validate()
{
}

web::json::value TopUa::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool TopUa::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    return ok;
}


bool TopUa::isEnable() const
{
    return enable_;
}

void TopUa::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool TopUa::enableIsSet() const
{
    return enableIsSet_;
}

void TopUa::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


