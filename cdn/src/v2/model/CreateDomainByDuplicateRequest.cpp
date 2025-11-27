

#include "huaweicloud/cdn/v2/model/CreateDomainByDuplicateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateDomainByDuplicateRequest::CreateDomainByDuplicateRequest()
{
    bodyIsSet_ = false;
}

CreateDomainByDuplicateRequest::~CreateDomainByDuplicateRequest() = default;

void CreateDomainByDuplicateRequest::validate()
{
}

web::json::value CreateDomainByDuplicateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDomainByDuplicateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DuplicateDomainRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DuplicateDomainRequestBody CreateDomainByDuplicateRequest::getBody() const
{
    return body_;
}

void CreateDomainByDuplicateRequest::setBody(const DuplicateDomainRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDomainByDuplicateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDomainByDuplicateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


