

#include "huaweicloud/metastudio/v1/model/McpServerInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




McpServerInfo::McpServerInfo()
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
}

McpServerInfo::~McpServerInfo() = default;

void McpServerInfo::validate()
{
}

web::json::value McpServerInfo::toJson() const
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

    return val;
}
bool McpServerInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string McpServerInfo::getMcpServerId() const
{
    return mcpServerId_;
}

void McpServerInfo::setMcpServerId(const std::string& value)
{
    mcpServerId_ = value;
    mcpServerIdIsSet_ = true;
}

bool McpServerInfo::mcpServerIdIsSet() const
{
    return mcpServerIdIsSet_;
}

void McpServerInfo::unsetmcpServerId()
{
    mcpServerIdIsSet_ = false;
}

std::string McpServerInfo::getName() const
{
    return name_;
}

void McpServerInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool McpServerInfo::nameIsSet() const
{
    return nameIsSet_;
}

void McpServerInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string McpServerInfo::getMcpServerUrl() const
{
    return mcpServerUrl_;
}

void McpServerInfo::setMcpServerUrl(const std::string& value)
{
    mcpServerUrl_ = value;
    mcpServerUrlIsSet_ = true;
}

bool McpServerInfo::mcpServerUrlIsSet() const
{
    return mcpServerUrlIsSet_;
}

void McpServerInfo::unsetmcpServerUrl()
{
    mcpServerUrlIsSet_ = false;
}

std::string McpServerInfo::getAuthHeaderName() const
{
    return authHeaderName_;
}

void McpServerInfo::setAuthHeaderName(const std::string& value)
{
    authHeaderName_ = value;
    authHeaderNameIsSet_ = true;
}

bool McpServerInfo::authHeaderNameIsSet() const
{
    return authHeaderNameIsSet_;
}

void McpServerInfo::unsetauthHeaderName()
{
    authHeaderNameIsSet_ = false;
}

std::string McpServerInfo::getCreateTime() const
{
    return createTime_;
}

void McpServerInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool McpServerInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void McpServerInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string McpServerInfo::getUpdateTime() const
{
    return updateTime_;
}

void McpServerInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool McpServerInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void McpServerInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


