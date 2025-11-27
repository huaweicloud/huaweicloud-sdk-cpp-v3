

#include "huaweicloud/iotda/v5/model/ShowCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowCertificateRequest::ShowCertificateRequest()
{
    spAuthToken_ = "";
    spAuthTokenIsSet_ = false;
    stageAuthToken_ = "";
    stageAuthTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
}

ShowCertificateRequest::~ShowCertificateRequest() = default;

void ShowCertificateRequest::validate()
{
}

web::json::value ShowCertificateRequest::toJson() const
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

    return val;
}
bool ShowCertificateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowCertificateRequest::getSpAuthToken() const
{
    return spAuthToken_;
}

void ShowCertificateRequest::setSpAuthToken(const std::string& value)
{
    spAuthToken_ = value;
    spAuthTokenIsSet_ = true;
}

bool ShowCertificateRequest::spAuthTokenIsSet() const
{
    return spAuthTokenIsSet_;
}

void ShowCertificateRequest::unsetspAuthToken()
{
    spAuthTokenIsSet_ = false;
}

std::string ShowCertificateRequest::getStageAuthToken() const
{
    return stageAuthToken_;
}

void ShowCertificateRequest::setStageAuthToken(const std::string& value)
{
    stageAuthToken_ = value;
    stageAuthTokenIsSet_ = true;
}

bool ShowCertificateRequest::stageAuthTokenIsSet() const
{
    return stageAuthTokenIsSet_;
}

void ShowCertificateRequest::unsetstageAuthToken()
{
    stageAuthTokenIsSet_ = false;
}

std::string ShowCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void ShowCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool ShowCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void ShowCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}


