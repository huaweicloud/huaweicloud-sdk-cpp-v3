

#include "huaweicloud/codeartsartifact/v2/model/NetProxyModelV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




NetProxyModelV5::NetProxyModelV5()
{
    status_ = "";
    statusIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    modifiedTime_ = "";
    modifiedTimeIsSet_ = false;
    createdUserId_ = "";
    createdUserIdIsSet_ = false;
    createdUserName_ = "";
    createdUserNameIsSet_ = false;
    modifiedUserId_ = "";
    modifiedUserIdIsSet_ = false;
    modifiedUserName_ = "";
    modifiedUserNameIsSet_ = false;
    id_ = 0L;
    idIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    isDefault_ = 0;
    isDefaultIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
}

NetProxyModelV5::~NetProxyModelV5() = default;

void NetProxyModelV5::validate()
{
}

web::json::value NetProxyModelV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(modifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("modified_time")] = ModelBase::toJson(modifiedTime_);
    }
    if(createdUserIdIsSet_) {
        val[utility::conversions::to_string_t("created_user_id")] = ModelBase::toJson(createdUserId_);
    }
    if(createdUserNameIsSet_) {
        val[utility::conversions::to_string_t("created_user_name")] = ModelBase::toJson(createdUserName_);
    }
    if(modifiedUserIdIsSet_) {
        val[utility::conversions::to_string_t("modified_user_id")] = ModelBase::toJson(modifiedUserId_);
    }
    if(modifiedUserNameIsSet_) {
        val[utility::conversions::to_string_t("modified_user_name")] = ModelBase::toJson(modifiedUserName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }

    return val;
}
bool NetProxyModelV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    return ok;
}


std::string NetProxyModelV5::getStatus() const
{
    return status_;
}

void NetProxyModelV5::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NetProxyModelV5::statusIsSet() const
{
    return statusIsSet_;
}

void NetProxyModelV5::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NetProxyModelV5::getDomainId() const
{
    return domainId_;
}

void NetProxyModelV5::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool NetProxyModelV5::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void NetProxyModelV5::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string NetProxyModelV5::getRegion() const
{
    return region_;
}

void NetProxyModelV5::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool NetProxyModelV5::regionIsSet() const
{
    return regionIsSet_;
}

void NetProxyModelV5::unsetregion()
{
    regionIsSet_ = false;
}

std::string NetProxyModelV5::getCreatedTime() const
{
    return createdTime_;
}

void NetProxyModelV5::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool NetProxyModelV5::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void NetProxyModelV5::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string NetProxyModelV5::getModifiedTime() const
{
    return modifiedTime_;
}

void NetProxyModelV5::setModifiedTime(const std::string& value)
{
    modifiedTime_ = value;
    modifiedTimeIsSet_ = true;
}

bool NetProxyModelV5::modifiedTimeIsSet() const
{
    return modifiedTimeIsSet_;
}

void NetProxyModelV5::unsetmodifiedTime()
{
    modifiedTimeIsSet_ = false;
}

std::string NetProxyModelV5::getCreatedUserId() const
{
    return createdUserId_;
}

void NetProxyModelV5::setCreatedUserId(const std::string& value)
{
    createdUserId_ = value;
    createdUserIdIsSet_ = true;
}

bool NetProxyModelV5::createdUserIdIsSet() const
{
    return createdUserIdIsSet_;
}

void NetProxyModelV5::unsetcreatedUserId()
{
    createdUserIdIsSet_ = false;
}

std::string NetProxyModelV5::getCreatedUserName() const
{
    return createdUserName_;
}

void NetProxyModelV5::setCreatedUserName(const std::string& value)
{
    createdUserName_ = value;
    createdUserNameIsSet_ = true;
}

bool NetProxyModelV5::createdUserNameIsSet() const
{
    return createdUserNameIsSet_;
}

void NetProxyModelV5::unsetcreatedUserName()
{
    createdUserNameIsSet_ = false;
}

std::string NetProxyModelV5::getModifiedUserId() const
{
    return modifiedUserId_;
}

void NetProxyModelV5::setModifiedUserId(const std::string& value)
{
    modifiedUserId_ = value;
    modifiedUserIdIsSet_ = true;
}

bool NetProxyModelV5::modifiedUserIdIsSet() const
{
    return modifiedUserIdIsSet_;
}

void NetProxyModelV5::unsetmodifiedUserId()
{
    modifiedUserIdIsSet_ = false;
}

std::string NetProxyModelV5::getModifiedUserName() const
{
    return modifiedUserName_;
}

void NetProxyModelV5::setModifiedUserName(const std::string& value)
{
    modifiedUserName_ = value;
    modifiedUserNameIsSet_ = true;
}

bool NetProxyModelV5::modifiedUserNameIsSet() const
{
    return modifiedUserNameIsSet_;
}

void NetProxyModelV5::unsetmodifiedUserName()
{
    modifiedUserNameIsSet_ = false;
}

int64_t NetProxyModelV5::getId() const
{
    return id_;
}

void NetProxyModelV5::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NetProxyModelV5::idIsSet() const
{
    return idIsSet_;
}

void NetProxyModelV5::unsetid()
{
    idIsSet_ = false;
}

std::string NetProxyModelV5::getHostName() const
{
    return hostName_;
}

void NetProxyModelV5::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool NetProxyModelV5::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void NetProxyModelV5::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string NetProxyModelV5::getHost() const
{
    return host_;
}

void NetProxyModelV5::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool NetProxyModelV5::hostIsSet() const
{
    return hostIsSet_;
}

void NetProxyModelV5::unsethost()
{
    hostIsSet_ = false;
}

int32_t NetProxyModelV5::getPort() const
{
    return port_;
}

void NetProxyModelV5::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool NetProxyModelV5::portIsSet() const
{
    return portIsSet_;
}

void NetProxyModelV5::unsetport()
{
    portIsSet_ = false;
}

std::string NetProxyModelV5::getUserName() const
{
    return userName_;
}

void NetProxyModelV5::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool NetProxyModelV5::userNameIsSet() const
{
    return userNameIsSet_;
}

void NetProxyModelV5::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string NetProxyModelV5::getPassword() const
{
    return password_;
}

void NetProxyModelV5::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool NetProxyModelV5::passwordIsSet() const
{
    return passwordIsSet_;
}

void NetProxyModelV5::unsetpassword()
{
    passwordIsSet_ = false;
}

int32_t NetProxyModelV5::getIsDefault() const
{
    return isDefault_;
}

void NetProxyModelV5::setIsDefault(int32_t value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool NetProxyModelV5::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void NetProxyModelV5::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

std::string NetProxyModelV5::getRemark() const
{
    return remark_;
}

void NetProxyModelV5::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool NetProxyModelV5::remarkIsSet() const
{
    return remarkIsSet_;
}

void NetProxyModelV5::unsetremark()
{
    remarkIsSet_ = false;
}

}
}
}
}
}


