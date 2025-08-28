

#include "huaweicloud/metastudio/v1/model/UpdateDocumentSegmentInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDocumentSegmentInfoRequest::UpdateDocumentSegmentInfoRequest()
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

UpdateDocumentSegmentInfoRequest::~UpdateDocumentSegmentInfoRequest() = default;

void UpdateDocumentSegmentInfoRequest::validate()
{
}

web::json::value UpdateDocumentSegmentInfoRequest::toJson() const
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
bool UpdateDocumentSegmentInfoRequest::fromJson(const web::json::value& val)
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
            UpdateDocumentSegmentReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDocumentSegmentInfoRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateDocumentSegmentInfoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateDocumentSegmentInfoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateDocumentSegmentInfoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateDocumentSegmentInfoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateDocumentSegmentInfoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateDocumentSegmentInfoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateDocumentSegmentInfoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateDocumentSegmentInfoRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateDocumentSegmentInfoRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateDocumentSegmentInfoRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateDocumentSegmentInfoRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateDocumentSegmentInfoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateDocumentSegmentInfoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateDocumentSegmentInfoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateDocumentSegmentInfoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

UpdateDocumentSegmentReq UpdateDocumentSegmentInfoRequest::getBody() const
{
    return body_;
}

void UpdateDocumentSegmentInfoRequest::setBody(const UpdateDocumentSegmentReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDocumentSegmentInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDocumentSegmentInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


