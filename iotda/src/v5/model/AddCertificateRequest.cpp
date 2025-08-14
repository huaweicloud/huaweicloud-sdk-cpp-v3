

#include "huaweicloud/iotda/v5/model/AddCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddCertificateRequest::AddCertificateRequest()
{
    spAuthToken_ = "";
    spAuthTokenIsSet_ = false;
    stageAuthToken_ = "";
    stageAuthTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddCertificateRequest::~AddCertificateRequest() = default;

void AddCertificateRequest::validate()
{
}

web::json::value AddCertificateRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddCertificateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateCertificateDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddCertificateRequest::getSpAuthToken() const
{
    return spAuthToken_;
}

void AddCertificateRequest::setSpAuthToken(const std::string& value)
{
    spAuthToken_ = value;
    spAuthTokenIsSet_ = true;
}

bool AddCertificateRequest::spAuthTokenIsSet() const
{
    return spAuthTokenIsSet_;
}

void AddCertificateRequest::unsetspAuthToken()
{
    spAuthTokenIsSet_ = false;
}

std::string AddCertificateRequest::getStageAuthToken() const
{
    return stageAuthToken_;
}

void AddCertificateRequest::setStageAuthToken(const std::string& value)
{
    stageAuthToken_ = value;
    stageAuthTokenIsSet_ = true;
}

bool AddCertificateRequest::stageAuthTokenIsSet() const
{
    return stageAuthTokenIsSet_;
}

void AddCertificateRequest::unsetstageAuthToken()
{
    stageAuthTokenIsSet_ = false;
}

std::string AddCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void AddCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateCertificateDTO AddCertificateRequest::getBody() const
{
    return body_;
}

void AddCertificateRequest::setBody(const CreateCertificateDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


