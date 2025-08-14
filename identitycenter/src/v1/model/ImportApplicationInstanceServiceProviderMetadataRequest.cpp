

#include "huaweicloud/identitycenter/v1/model/ImportApplicationInstanceServiceProviderMetadataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ImportApplicationInstanceServiceProviderMetadataRequest::ImportApplicationInstanceServiceProviderMetadataRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ImportApplicationInstanceServiceProviderMetadataRequest::~ImportApplicationInstanceServiceProviderMetadataRequest() = default;

void ImportApplicationInstanceServiceProviderMetadataRequest::validate()
{
}

web::json::value ImportApplicationInstanceServiceProviderMetadataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(applicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("application_instance_id")] = ModelBase::toJson(applicationInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ImportApplicationInstanceServiceProviderMetadataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImportApplicationInstanceServiceProviderMetadataReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ImportApplicationInstanceServiceProviderMetadataRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ImportApplicationInstanceServiceProviderMetadataRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ImportApplicationInstanceServiceProviderMetadataRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ImportApplicationInstanceServiceProviderMetadataRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ImportApplicationInstanceServiceProviderMetadataRequest::getInstanceId() const
{
    return instanceId_;
}

void ImportApplicationInstanceServiceProviderMetadataRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ImportApplicationInstanceServiceProviderMetadataRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ImportApplicationInstanceServiceProviderMetadataRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ImportApplicationInstanceServiceProviderMetadataRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void ImportApplicationInstanceServiceProviderMetadataRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool ImportApplicationInstanceServiceProviderMetadataRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void ImportApplicationInstanceServiceProviderMetadataRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

ImportApplicationInstanceServiceProviderMetadataReqBody ImportApplicationInstanceServiceProviderMetadataRequest::getBody() const
{
    return body_;
}

void ImportApplicationInstanceServiceProviderMetadataRequest::setBody(const ImportApplicationInstanceServiceProviderMetadataReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportApplicationInstanceServiceProviderMetadataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportApplicationInstanceServiceProviderMetadataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


