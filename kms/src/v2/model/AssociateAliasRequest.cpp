

#include "huaweicloud/kms/v2/model/AssociateAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




AssociateAliasRequest::AssociateAliasRequest()
{
    bodyIsSet_ = false;
}

AssociateAliasRequest::~AssociateAliasRequest() = default;

void AssociateAliasRequest::validate()
{
}

web::json::value AssociateAliasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateAliasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AssociateAliasRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AssociateAliasRequestBody AssociateAliasRequest::getBody() const
{
    return body_;
}

void AssociateAliasRequest::setBody(const AssociateAliasRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


