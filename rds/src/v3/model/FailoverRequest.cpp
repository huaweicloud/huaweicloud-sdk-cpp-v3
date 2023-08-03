

#include "huaweicloud/rds/v3/model/FailoverRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




FailoverRequest::FailoverRequest()
{
    force_ = false;
    forceIsSet_ = false;
}

FailoverRequest::~FailoverRequest() = default;

void FailoverRequest::validate()
{
}

web::json::value FailoverRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(forceIsSet_) {
        val[utility::conversions::to_string_t("force")] = ModelBase::toJson(force_);
    }

    return val;
}

bool FailoverRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForce(refVal);
        }
    }
    return ok;
}

bool FailoverRequest::isForce() const
{
    return force_;
}

void FailoverRequest::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool FailoverRequest::forceIsSet() const
{
    return forceIsSet_;
}

void FailoverRequest::unsetforce()
{
    forceIsSet_ = false;
}

}
}
}
}
}


