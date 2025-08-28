

#include "huaweicloud/metastudio/v1/model/ShowMcpServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowMcpServerResponse::ShowMcpServerResponse()
{
    mcpServerId_ = "";
    mcpServerIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    mcpServerUrl_ = "";
    mcpServerUrlIsSet_ = false;
    authHeaderName_ = "";
    authHeaderNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowMcpServerResponse::~ShowMcpServerResponse() = default;

void ShowMcpServerResponse::validate()
{
}

web::json::value ShowMcpServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mcpServerIdIsSet_) {
        val[utility::conversions::to_string_t("mcp_server_id")] = ModelBase::toJson(mcpServerId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(mcpServerUrlIsSet_) {
        val[utility::conversions::to_string_t("mcp_server_url")] = ModelBase::toJson(mcpServerUrl_);
    }
    if(authHeaderNameIsSet_) {
        val[utility::conversions::to_string_t("auth_header_name")] = ModelBase::toJson(authHeaderName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowMcpServerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mcp_server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mcp_server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMcpServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mcp_server_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mcp_server_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMcpServerUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_header_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_header_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthHeaderName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowMcpServerResponse::getMcpServerId() const
{
    return mcpServerId_;
}

void ShowMcpServerResponse::setMcpServerId(const std::string& value)
{
    mcpServerId_ = value;
    mcpServerIdIsSet_ = true;
}

bool ShowMcpServerResponse::mcpServerIdIsSet() const
{
    return mcpServerIdIsSet_;
}

void ShowMcpServerResponse::unsetmcpServerId()
{
    mcpServerIdIsSet_ = false;
}

std::string ShowMcpServerResponse::getName() const
{
    return name_;
}

void ShowMcpServerResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowMcpServerResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowMcpServerResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowMcpServerResponse::getMcpServerUrl() const
{
    return mcpServerUrl_;
}

void ShowMcpServerResponse::setMcpServerUrl(const std::string& value)
{
    mcpServerUrl_ = value;
    mcpServerUrlIsSet_ = true;
}

bool ShowMcpServerResponse::mcpServerUrlIsSet() const
{
    return mcpServerUrlIsSet_;
}

void ShowMcpServerResponse::unsetmcpServerUrl()
{
    mcpServerUrlIsSet_ = false;
}

std::string ShowMcpServerResponse::getAuthHeaderName() const
{
    return authHeaderName_;
}

void ShowMcpServerResponse::setAuthHeaderName(const std::string& value)
{
    authHeaderName_ = value;
    authHeaderNameIsSet_ = true;
}

bool ShowMcpServerResponse::authHeaderNameIsSet() const
{
    return authHeaderNameIsSet_;
}

void ShowMcpServerResponse::unsetauthHeaderName()
{
    authHeaderNameIsSet_ = false;
}

std::string ShowMcpServerResponse::getCreateTime() const
{
    return createTime_;
}

void ShowMcpServerResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowMcpServerResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowMcpServerResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowMcpServerResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowMcpServerResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowMcpServerResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowMcpServerResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowMcpServerResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowMcpServerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowMcpServerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowMcpServerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


