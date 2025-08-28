

#include "huaweicloud/metastudio/v1/model/ShowMcpServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowMcpServerRequest::ShowMcpServerRequest()
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
}

ShowMcpServerRequest::~ShowMcpServerRequest() = default;

void ShowMcpServerRequest::validate()
{
}

web::json::value ShowMcpServerRequest::toJson() const
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

    return val;
}
bool ShowMcpServerRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowMcpServerRequest::getAuthorization() const
{
    return authorization_;
}

void ShowMcpServerRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowMcpServerRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowMcpServerRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowMcpServerRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowMcpServerRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowMcpServerRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowMcpServerRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowMcpServerRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowMcpServerRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowMcpServerRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowMcpServerRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowMcpServerRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowMcpServerRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowMcpServerRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowMcpServerRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowMcpServerRequest::getMcpServerId() const
{
    return mcpServerId_;
}

void ShowMcpServerRequest::setMcpServerId(const std::string& value)
{
    mcpServerId_ = value;
    mcpServerIdIsSet_ = true;
}

bool ShowMcpServerRequest::mcpServerIdIsSet() const
{
    return mcpServerIdIsSet_;
}

void ShowMcpServerRequest::unsetmcpServerId()
{
    mcpServerIdIsSet_ = false;
}

}
}
}
}
}


