

#include "huaweicloud/metastudio/v1/model/CreateBatchKnowledgeQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateBatchKnowledgeQuestionRequest::CreateBatchKnowledgeQuestionRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateBatchKnowledgeQuestionRequest::~CreateBatchKnowledgeQuestionRequest() = default;

void CreateBatchKnowledgeQuestionRequest::validate()
{
}

web::json::value CreateBatchKnowledgeQuestionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateBatchKnowledgeQuestionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
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
            CreateBatchKnowledgeQuestionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateBatchKnowledgeQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void CreateBatchKnowledgeQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateBatchKnowledgeQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateBatchKnowledgeQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateBatchKnowledgeQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateBatchKnowledgeQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateBatchKnowledgeQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateBatchKnowledgeQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateBatchKnowledgeQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateBatchKnowledgeQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateBatchKnowledgeQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateBatchKnowledgeQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateBatchKnowledgeQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateBatchKnowledgeQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateBatchKnowledgeQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateBatchKnowledgeQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateBatchKnowledgeQuestionReq CreateBatchKnowledgeQuestionRequest::getBody() const
{
    return body_;
}

void CreateBatchKnowledgeQuestionRequest::setBody(const CreateBatchKnowledgeQuestionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBatchKnowledgeQuestionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBatchKnowledgeQuestionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


