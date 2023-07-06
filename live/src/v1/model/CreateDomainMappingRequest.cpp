

#include "huaweicloud/live/v1/model/CreateDomainMappingRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateDomainMappingRequest::CreateDomainMappingRequest()
{
    bodyIsSet_ = false;
}

CreateDomainMappingRequest::~CreateDomainMappingRequest() = default;

void CreateDomainMappingRequest::validate()
{
}

web::json::value CreateDomainMappingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateDomainMappingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DomainMapping refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

DomainMapping CreateDomainMappingRequest::getBody() const
{
    return body_;
}

void CreateDomainMappingRequest::setBody(const DomainMapping& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDomainMappingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDomainMappingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


