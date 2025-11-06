

#include "huaweicloud/codeartsrepo/v4/model/BatchValidateRepoNamesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchValidateRepoNamesRequest::BatchValidateRepoNamesRequest()
{
    bodyIsSet_ = false;
}

BatchValidateRepoNamesRequest::~BatchValidateRepoNamesRequest() = default;

void BatchValidateRepoNamesRequest::validate()
{
}

web::json::value BatchValidateRepoNamesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchValidateRepoNamesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ValidateRepoNameDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ValidateRepoNameDto BatchValidateRepoNamesRequest::getBody() const
{
    return body_;
}

void BatchValidateRepoNamesRequest::setBody(const ValidateRepoNameDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchValidateRepoNamesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchValidateRepoNamesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


