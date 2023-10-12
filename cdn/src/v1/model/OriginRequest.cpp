

#include "huaweicloud/cdn/v1/model/OriginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




OriginRequest::OriginRequest()
{
    originIsSet_ = false;
}

OriginRequest::~OriginRequest() = default;

void OriginRequest::validate()
{
}

web::json::value OriginRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originIsSet_) {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(origin_);
    }

    return val;
}
bool OriginRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            ResourceBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrigin(refVal);
        }
    }
    return ok;
}


ResourceBody OriginRequest::getOrigin() const
{
    return origin_;
}

void OriginRequest::setOrigin(const ResourceBody& value)
{
    origin_ = value;
    originIsSet_ = true;
}

bool OriginRequest::originIsSet() const
{
    return originIsSet_;
}

void OriginRequest::unsetorigin()
{
    originIsSet_ = false;
}

}
}
}
}
}


