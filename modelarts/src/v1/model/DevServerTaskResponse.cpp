

#include "huaweicloud/modelarts/v1/model/DevServerTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DevServerTaskResponse::DevServerTaskResponse()
{
    id_ = "";
    idIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    serverName_ = "";
    serverNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    cloudServerIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
}

DevServerTaskResponse::~DevServerTaskResponse() = default;

void DevServerTaskResponse::validate()
{
}

web::json::value DevServerTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(serverNameIsSet_) {
        val[utility::conversions::to_string_t("server_name")] = ModelBase::toJson(serverName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(cloudServerIsSet_) {
        val[utility::conversions::to_string_t("cloud_server")] = ModelBase::toJson(cloudServer_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool DevServerTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_server"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


std::string DevServerTaskResponse::getId() const
{
    return id_;
}

void DevServerTaskResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DevServerTaskResponse::idIsSet() const
{
    return idIsSet_;
}

void DevServerTaskResponse::unsetid()
{
    idIsSet_ = false;
}

std::string DevServerTaskResponse::getServerId() const
{
    return serverId_;
}

void DevServerTaskResponse::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool DevServerTaskResponse::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void DevServerTaskResponse::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string DevServerTaskResponse::getServerName() const
{
    return serverName_;
}

void DevServerTaskResponse::setServerName(const std::string& value)
{
    serverName_ = value;
    serverNameIsSet_ = true;
}

bool DevServerTaskResponse::serverNameIsSet() const
{
    return serverNameIsSet_;
}

void DevServerTaskResponse::unsetserverName()
{
    serverNameIsSet_ = false;
}

std::string DevServerTaskResponse::getStatus() const
{
    return status_;
}

void DevServerTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DevServerTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DevServerTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::map<std::string, std::string>& DevServerTaskResponse::getCloudServer()
{
    return cloudServer_;
}

void DevServerTaskResponse::setCloudServer(const std::map<std::string, std::string>& value)
{
    cloudServer_ = value;
    cloudServerIsSet_ = true;
}

bool DevServerTaskResponse::cloudServerIsSet() const
{
    return cloudServerIsSet_;
}

void DevServerTaskResponse::unsetcloudServer()
{
    cloudServerIsSet_ = false;
}

std::string DevServerTaskResponse::getMessage() const
{
    return message_;
}

void DevServerTaskResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DevServerTaskResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DevServerTaskResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string DevServerTaskResponse::getCreateAt() const
{
    return createAt_;
}

void DevServerTaskResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool DevServerTaskResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void DevServerTaskResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string DevServerTaskResponse::getUpdateAt() const
{
    return updateAt_;
}

void DevServerTaskResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool DevServerTaskResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void DevServerTaskResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


