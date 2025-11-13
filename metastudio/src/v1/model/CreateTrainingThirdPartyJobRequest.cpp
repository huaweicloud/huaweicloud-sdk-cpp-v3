

#include "huaweicloud/metastudio/v1/model/CreateTrainingThirdPartyJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTrainingThirdPartyJobRequest::CreateTrainingThirdPartyJobRequest()
{
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTrainingThirdPartyJobRequest::~CreateTrainingThirdPartyJobRequest() = default;

void CreateTrainingThirdPartyJobRequest::validate()
{
}

web::json::value CreateTrainingThirdPartyJobRequest::toJson() const
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
bool CreateTrainingThirdPartyJobRequest::fromJson(const web::json::value& val)
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
            CreateTrainingJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTrainingThirdPartyJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateTrainingThirdPartyJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateTrainingThirdPartyJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateTrainingThirdPartyJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateTrainingJobReq CreateTrainingThirdPartyJobRequest::getBody() const
{
    return body_;
}

void CreateTrainingThirdPartyJobRequest::setBody(const CreateTrainingJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTrainingThirdPartyJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTrainingThirdPartyJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


