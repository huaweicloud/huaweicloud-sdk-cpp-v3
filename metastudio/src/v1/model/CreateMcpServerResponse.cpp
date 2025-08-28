

#include "huaweicloud/metastudio/v1/model/CreateMcpServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateMcpServerResponse::CreateMcpServerResponse()
{
    mcpServerId_ = "";
    mcpServerIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateMcpServerResponse::~CreateMcpServerResponse() = default;

void CreateMcpServerResponse::validate()
{
}

web::json::value CreateMcpServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mcpServerIdIsSet_) {
        val[utility::conversions::to_string_t("mcp_server_id")] = ModelBase::toJson(mcpServerId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateMcpServerResponse::fromJson(const web::json::value& val)
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


std::string CreateMcpServerResponse::getMcpServerId() const
{
    return mcpServerId_;
}

void CreateMcpServerResponse::setMcpServerId(const std::string& value)
{
    mcpServerId_ = value;
    mcpServerIdIsSet_ = true;
}

bool CreateMcpServerResponse::mcpServerIdIsSet() const
{
    return mcpServerIdIsSet_;
}

void CreateMcpServerResponse::unsetmcpServerId()
{
    mcpServerIdIsSet_ = false;
}

std::string CreateMcpServerResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateMcpServerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateMcpServerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateMcpServerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


