

#include "huaweicloud/iotda/v5/model/CheckCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CheckCertificateRequest::CheckCertificateRequest()
{
    spAuthToken_ = "";
    spAuthTokenIsSet_ = false;
    stageAuthToken_ = "";
    stageAuthTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
    actionId_ = "";
    actionIdIsSet_ = false;
    bodyIsSet_ = false;
}

CheckCertificateRequest::~CheckCertificateRequest() = default;

void CheckCertificateRequest::validate()
{
}

web::json::value CheckCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(spAuthTokenIsSet_) {
        val[utility::conversions::to_string_t("Sp-Auth-Token")] = ModelBase::toJson(spAuthToken_);
    }
    if(stageAuthTokenIsSet_) {
        val[utility::conversions::to_string_t("Stage-Auth-Token")] = ModelBase::toJson(stageAuthToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(actionIdIsSet_) {
        val[utility::conversions::to_string_t("action_id")] = ModelBase::toJson(actionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckCertificateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Sp-Auth-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Sp-Auth-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpAuthToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Stage-Auth-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Stage-Auth-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageAuthToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VerifyCertificateDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckCertificateRequest::getSpAuthToken() const
{
    return spAuthToken_;
}

void CheckCertificateRequest::setSpAuthToken(const std::string& value)
{
    spAuthToken_ = value;
    spAuthTokenIsSet_ = true;
}

bool CheckCertificateRequest::spAuthTokenIsSet() const
{
    return spAuthTokenIsSet_;
}

void CheckCertificateRequest::unsetspAuthToken()
{
    spAuthTokenIsSet_ = false;
}

std::string CheckCertificateRequest::getStageAuthToken() const
{
    return stageAuthToken_;
}

void CheckCertificateRequest::setStageAuthToken(const std::string& value)
{
    stageAuthToken_ = value;
    stageAuthTokenIsSet_ = true;
}

bool CheckCertificateRequest::stageAuthTokenIsSet() const
{
    return stageAuthTokenIsSet_;
}

void CheckCertificateRequest::unsetstageAuthToken()
{
    stageAuthTokenIsSet_ = false;
}

std::string CheckCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void CheckCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CheckCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CheckCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CheckCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void CheckCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool CheckCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void CheckCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string CheckCertificateRequest::getActionId() const
{
    return actionId_;
}

void CheckCertificateRequest::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool CheckCertificateRequest::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void CheckCertificateRequest::unsetactionId()
{
    actionIdIsSet_ = false;
}

VerifyCertificateDTO CheckCertificateRequest::getBody() const
{
    return body_;
}

void CheckCertificateRequest::setBody(const VerifyCertificateDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


