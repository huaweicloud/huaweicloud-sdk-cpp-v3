

#include "huaweicloud/iotda/v5/model/DeleteCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteCertificateRequest::DeleteCertificateRequest()
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

DeleteCertificateRequest::~DeleteCertificateRequest() = default;

void DeleteCertificateRequest::validate()
{
}

web::json::value DeleteCertificateRequest::toJson() const
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
bool DeleteCertificateRequest::fromJson(const web::json::value& val)
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


std::string DeleteCertificateRequest::getSpAuthToken() const
{
    return spAuthToken_;
}

void DeleteCertificateRequest::setSpAuthToken(const std::string& value)
{
    spAuthToken_ = value;
    spAuthTokenIsSet_ = true;
}

bool DeleteCertificateRequest::spAuthTokenIsSet() const
{
    return spAuthTokenIsSet_;
}

void DeleteCertificateRequest::unsetspAuthToken()
{
    spAuthTokenIsSet_ = false;
}

std::string DeleteCertificateRequest::getStageAuthToken() const
{
    return stageAuthToken_;
}

void DeleteCertificateRequest::setStageAuthToken(const std::string& value)
{
    stageAuthToken_ = value;
    stageAuthTokenIsSet_ = true;
}

bool DeleteCertificateRequest::stageAuthTokenIsSet() const
{
    return stageAuthTokenIsSet_;
}

void DeleteCertificateRequest::unsetstageAuthToken()
{
    stageAuthTokenIsSet_ = false;
}

std::string DeleteCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void DeleteCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool DeleteCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void DeleteCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}


