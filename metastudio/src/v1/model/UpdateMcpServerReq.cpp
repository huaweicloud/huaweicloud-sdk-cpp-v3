

#include "huaweicloud/metastudio/v1/model/UpdateMcpServerReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateMcpServerReq::UpdateMcpServerReq()
{
    name_ = "";
    nameIsSet_ = false;
    mcpServerUrl_ = "";
    mcpServerUrlIsSet_ = false;
    authHeaderName_ = "";
    authHeaderNameIsSet_ = false;
}

UpdateMcpServerReq::~UpdateMcpServerReq() = default;

void UpdateMcpServerReq::validate()
{
}

web::json::value UpdateMcpServerReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(mcpServerUrlIsSet_) {
        val[utility::conversions::to_string_t("mcp_server_url")] = ModelBase::toJson(mcpServerUrl_);
    }
    if(authHeaderNameIsSet_) {
        val[utility::conversions::to_string_t("auth_header_name")] = ModelBase::toJson(authHeaderName_);
    }

    return val;
}
bool UpdateMcpServerReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string UpdateMcpServerReq::getName() const
{
    return name_;
}

void UpdateMcpServerReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateMcpServerReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateMcpServerReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateMcpServerReq::getMcpServerUrl() const
{
    return mcpServerUrl_;
}

void UpdateMcpServerReq::setMcpServerUrl(const std::string& value)
{
    mcpServerUrl_ = value;
    mcpServerUrlIsSet_ = true;
}

bool UpdateMcpServerReq::mcpServerUrlIsSet() const
{
    return mcpServerUrlIsSet_;
}

void UpdateMcpServerReq::unsetmcpServerUrl()
{
    mcpServerUrlIsSet_ = false;
}

std::string UpdateMcpServerReq::getAuthHeaderName() const
{
    return authHeaderName_;
}

void UpdateMcpServerReq::setAuthHeaderName(const std::string& value)
{
    authHeaderName_ = value;
    authHeaderNameIsSet_ = true;
}

bool UpdateMcpServerReq::authHeaderNameIsSet() const
{
    return authHeaderNameIsSet_;
}

void UpdateMcpServerReq::unsetauthHeaderName()
{
    authHeaderNameIsSet_ = false;
}

}
}
}
}
}


