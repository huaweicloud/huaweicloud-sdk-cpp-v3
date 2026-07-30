

#include "huaweicloud/modelarts/v1/model/DevServerBatchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DevServerBatchRequest::DevServerBatchRequest()
{
    type_ = "";
    typeIsSet_ = false;
    serversIsSet_ = false;
    extendParamIsSet_ = false;
}

DevServerBatchRequest::~DevServerBatchRequest() = default;

void DevServerBatchRequest::validate()
{
}

web::json::value DevServerBatchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extend_param")] = ModelBase::toJson(extendParam_);
    }

    return val;
}
bool DevServerBatchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchActionDevServerIds> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_param"));
        if(!fieldValue.is_null())
        {
            ServerOsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    return ok;
}


std::string DevServerBatchRequest::getType() const
{
    return type_;
}

void DevServerBatchRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DevServerBatchRequest::typeIsSet() const
{
    return typeIsSet_;
}

void DevServerBatchRequest::unsettype()
{
    typeIsSet_ = false;
}

std::vector<BatchActionDevServerIds>& DevServerBatchRequest::getServers()
{
    return servers_;
}

void DevServerBatchRequest::setServers(const std::vector<BatchActionDevServerIds>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool DevServerBatchRequest::serversIsSet() const
{
    return serversIsSet_;
}

void DevServerBatchRequest::unsetservers()
{
    serversIsSet_ = false;
}

ServerOsRequest DevServerBatchRequest::getExtendParam() const
{
    return extendParam_;
}

void DevServerBatchRequest::setExtendParam(const ServerOsRequest& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool DevServerBatchRequest::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void DevServerBatchRequest::unsetextendParam()
{
    extendParamIsSet_ = false;
}

}
}
}
}
}


