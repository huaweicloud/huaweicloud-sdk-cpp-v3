

#include "huaweicloud/metastudio/v1/model/UpdateMcpServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateMcpServerRequest::UpdateMcpServerRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    mcpServerId_ = "";
    mcpServerIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMcpServerRequest::~UpdateMcpServerRequest() = default;

void UpdateMcpServerRequest::validate()
{
}

web::json::value UpdateMcpServerRequest::toJson() const
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
    if(mcpServerIdIsSet_) {
        val[utility::conversions::to_string_t("mcp_server_id")] = ModelBase::toJson(mcpServerId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMcpServerRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mcp_server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mcp_server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMcpServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateMcpServerReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMcpServerRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateMcpServerRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateMcpServerRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateMcpServerRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateMcpServerRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateMcpServerRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateMcpServerRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateMcpServerRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateMcpServerRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateMcpServerRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateMcpServerRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateMcpServerRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateMcpServerRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateMcpServerRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateMcpServerRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateMcpServerRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateMcpServerRequest::getMcpServerId() const
{
    return mcpServerId_;
}

void UpdateMcpServerRequest::setMcpServerId(const std::string& value)
{
    mcpServerId_ = value;
    mcpServerIdIsSet_ = true;
}

bool UpdateMcpServerRequest::mcpServerIdIsSet() const
{
    return mcpServerIdIsSet_;
}

void UpdateMcpServerRequest::unsetmcpServerId()
{
    mcpServerIdIsSet_ = false;
}

UpdateMcpServerReq UpdateMcpServerRequest::getBody() const
{
    return body_;
}

void UpdateMcpServerRequest::setBody(const UpdateMcpServerReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMcpServerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMcpServerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


