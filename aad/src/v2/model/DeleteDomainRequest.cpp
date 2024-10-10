

#include "huaweicloud/aad/v2/model/DeleteDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




DeleteDomainRequest::DeleteDomainRequest()
{
    bodyIsSet_ = false;
}

DeleteDomainRequest::~DeleteDomainRequest() = default;

void DeleteDomainRequest::validate()
{
}

web::json::value DeleteDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteDomainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteDomainV2RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteDomainV2RequestBody DeleteDomainRequest::getBody() const
{
    return body_;
}

void DeleteDomainRequest::setBody(const DeleteDomainV2RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


