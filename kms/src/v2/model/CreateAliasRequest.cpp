

#include "huaweicloud/kms/v2/model/CreateAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateAliasRequest::CreateAliasRequest()
{
    bodyIsSet_ = false;
}

CreateAliasRequest::~CreateAliasRequest() = default;

void CreateAliasRequest::validate()
{
}

web::json::value CreateAliasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAliasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateAliasRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateAliasRequestBody CreateAliasRequest::getBody() const
{
    return body_;
}

void CreateAliasRequest::setBody(const CreateAliasRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


