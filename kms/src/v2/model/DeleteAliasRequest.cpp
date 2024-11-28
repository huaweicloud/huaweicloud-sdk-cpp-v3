

#include "huaweicloud/kms/v2/model/DeleteAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeleteAliasRequest::DeleteAliasRequest()
{
    bodyIsSet_ = false;
}

DeleteAliasRequest::~DeleteAliasRequest() = default;

void DeleteAliasRequest::validate()
{
}

web::json::value DeleteAliasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAliasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteAliasRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteAliasRequestBody DeleteAliasRequest::getBody() const
{
    return body_;
}

void DeleteAliasRequest::setBody(const DeleteAliasRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


