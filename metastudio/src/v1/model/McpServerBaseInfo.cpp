

#include "huaweicloud/metastudio/v1/model/McpServerBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




McpServerBaseInfo::McpServerBaseInfo()
{
    mcpServerId_ = "";
    mcpServerIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

McpServerBaseInfo::~McpServerBaseInfo() = default;

void McpServerBaseInfo::validate()
{
}

web::json::value McpServerBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mcpServerIdIsSet_) {
        val[utility::conversions::to_string_t("mcp_server_id")] = ModelBase::toJson(mcpServerId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool McpServerBaseInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string McpServerBaseInfo::getMcpServerId() const
{
    return mcpServerId_;
}

void McpServerBaseInfo::setMcpServerId(const std::string& value)
{
    mcpServerId_ = value;
    mcpServerIdIsSet_ = true;
}

bool McpServerBaseInfo::mcpServerIdIsSet() const
{
    return mcpServerIdIsSet_;
}

void McpServerBaseInfo::unsetmcpServerId()
{
    mcpServerIdIsSet_ = false;
}

std::string McpServerBaseInfo::getName() const
{
    return name_;
}

void McpServerBaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool McpServerBaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void McpServerBaseInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


