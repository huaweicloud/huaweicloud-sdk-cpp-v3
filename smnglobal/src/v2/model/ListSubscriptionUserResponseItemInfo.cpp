

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseItemInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserResponseItemInfo::ListSubscriptionUserResponseItemInfo()
{
    id_ = "";
    idIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    groupIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    httpIsSet_ = false;
    httpsIsSet_ = false;
    smsIsSet_ = false;
    emailIsSet_ = false;
}

ListSubscriptionUserResponseItemInfo::~ListSubscriptionUserResponseItemInfo() = default;

void ListSubscriptionUserResponseItemInfo::validate()
{
}

web::json::value ListSubscriptionUserResponseItemInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(httpIsSet_) {
        val[utility::conversions::to_string_t("http")] = ModelBase::toJson(http_);
    }
    if(httpsIsSet_) {
        val[utility::conversions::to_string_t("https")] = ModelBase::toJson(https_);
    }
    if(smsIsSet_) {
        val[utility::conversions::to_string_t("sms")] = ModelBase::toJson(sms_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }

    return val;
}
bool ListSubscriptionUserResponseItemInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("http"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http"));
        if(!fieldValue.is_null())
        {
            ListSubscriptionUserResponseHttpEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https"));
        if(!fieldValue.is_null())
        {
            ListSubscriptionUserResponseHttpsEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sms"));
        if(!fieldValue.is_null())
        {
            ListSubscriptionUserResponseSmsEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            ListSubscriptionUserResponseEmailEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    return ok;
}


std::string ListSubscriptionUserResponseItemInfo::getId() const
{
    return id_;
}

void ListSubscriptionUserResponseItemInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::idIsSet() const
{
    return idIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ListSubscriptionUserResponseItemInfo::getDomainId() const
{
    return domainId_;
}

void ListSubscriptionUserResponseItemInfo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListSubscriptionUserResponseItemInfo::getName() const
{
    return name_;
}

void ListSubscriptionUserResponseItemInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ListSubscriptionUserResponseItemInfo::getStatus() const
{
    return status_;
}

void ListSubscriptionUserResponseItemInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListSubscriptionUserResponseItemInfo::getGroup()
{
    return group_;
}

void ListSubscriptionUserResponseItemInfo::setGroup(const std::vector<std::string>& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::groupIsSet() const
{
    return groupIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsetgroup()
{
    groupIsSet_ = false;
}

std::string ListSubscriptionUserResponseItemInfo::getCreateTime() const
{
    return createTime_;
}

void ListSubscriptionUserResponseItemInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListSubscriptionUserResponseItemInfo::getUpdateTime() const
{
    return updateTime_;
}

void ListSubscriptionUserResponseItemInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

ListSubscriptionUserResponseHttpEndpointInfo ListSubscriptionUserResponseItemInfo::getHttp() const
{
    return http_;
}

void ListSubscriptionUserResponseItemInfo::setHttp(const ListSubscriptionUserResponseHttpEndpointInfo& value)
{
    http_ = value;
    httpIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::httpIsSet() const
{
    return httpIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsethttp()
{
    httpIsSet_ = false;
}

ListSubscriptionUserResponseHttpsEndpointInfo ListSubscriptionUserResponseItemInfo::getHttps() const
{
    return https_;
}

void ListSubscriptionUserResponseItemInfo::setHttps(const ListSubscriptionUserResponseHttpsEndpointInfo& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::httpsIsSet() const
{
    return httpsIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsethttps()
{
    httpsIsSet_ = false;
}

ListSubscriptionUserResponseSmsEndpointInfo ListSubscriptionUserResponseItemInfo::getSms() const
{
    return sms_;
}

void ListSubscriptionUserResponseItemInfo::setSms(const ListSubscriptionUserResponseSmsEndpointInfo& value)
{
    sms_ = value;
    smsIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::smsIsSet() const
{
    return smsIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsetsms()
{
    smsIsSet_ = false;
}

ListSubscriptionUserResponseEmailEndpointInfo ListSubscriptionUserResponseItemInfo::getEmail() const
{
    return email_;
}

void ListSubscriptionUserResponseItemInfo::setEmail(const ListSubscriptionUserResponseEmailEndpointInfo& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ListSubscriptionUserResponseItemInfo::emailIsSet() const
{
    return emailIsSet_;
}

void ListSubscriptionUserResponseItemInfo::unsetemail()
{
    emailIsSet_ = false;
}

}
}
}
}
}


