

#include "huaweicloud/cdn/v2/model/TopUrlinReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TopUrlinReq::TopUrlinReq()
{
    enable_ = false;
    enableIsSet_ = false;
}

TopUrlinReq::~TopUrlinReq() = default;

void TopUrlinReq::validate()
{
}

web::json::value TopUrlinReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool TopUrlinReq::fromJson(const web::json::value& val)
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


bool TopUrlinReq::isEnable() const
{
    return enable_;
}

void TopUrlinReq::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool TopUrlinReq::enableIsSet() const
{
    return enableIsSet_;
}

void TopUrlinReq::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


