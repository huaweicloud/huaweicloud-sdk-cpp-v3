

#include "huaweicloud/metastudio/v1/model/CreateTrainingAdvanceJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTrainingAdvanceJobRequest::CreateTrainingAdvanceJobRequest()
{
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTrainingAdvanceJobRequest::~CreateTrainingAdvanceJobRequest() = default;

void CreateTrainingAdvanceJobRequest::validate()
{
}

web::json::value CreateTrainingAdvanceJobRequest::toJson() const
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
bool CreateTrainingAdvanceJobRequest::fromJson(const web::json::value& val)
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


std::string CreateTrainingAdvanceJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateTrainingAdvanceJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateTrainingAdvanceJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateTrainingAdvanceJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateTrainingJobReq CreateTrainingAdvanceJobRequest::getBody() const
{
    return body_;
}

void CreateTrainingAdvanceJobRequest::setBody(const CreateTrainingJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTrainingAdvanceJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTrainingAdvanceJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


