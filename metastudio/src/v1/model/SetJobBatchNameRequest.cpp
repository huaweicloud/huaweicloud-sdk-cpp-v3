

#include "huaweicloud/metastudio/v1/model/SetJobBatchNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetJobBatchNameRequest::SetJobBatchNameRequest()
{
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetJobBatchNameRequest::~SetJobBatchNameRequest() = default;

void SetJobBatchNameRequest::validate()
{
}

web::json::value SetJobBatchNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetJobBatchNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetJobBatchNameReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetJobBatchNameRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void SetJobBatchNameRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool SetJobBatchNameRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void SetJobBatchNameRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

SetJobBatchNameReq SetJobBatchNameRequest::getBody() const
{
    return body_;
}

void SetJobBatchNameRequest::setBody(const SetJobBatchNameReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetJobBatchNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetJobBatchNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


