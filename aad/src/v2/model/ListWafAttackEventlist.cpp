

#include "huaweicloud/aad/v2/model/ListWafAttackEventlist.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafAttackEventlist::ListWafAttackEventlist()
{
    id_ = "";
    idIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    time_ = 0;
    timeIsSet_ = false;
    sip_ = "";
    sipIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    backendIsSet_ = false;
}

ListWafAttackEventlist::~ListWafAttackEventlist() = default;

void ListWafAttackEventlist::validate()
{
}

web::json::value ListWafAttackEventlist::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(sipIsSet_) {
        val[utility::conversions::to_string_t("sip")] = ModelBase::toJson(sip_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(backendIsSet_) {
        val[utility::conversions::to_string_t("backend")] = ModelBase::toJson(backend_);
    }

    return val;
}
bool ListWafAttackEventlist::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backend"));
        if(!fieldValue.is_null())
        {
            Backend refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackend(refVal);
        }
    }
    return ok;
}


std::string ListWafAttackEventlist::getId() const
{
    return id_;
}

void ListWafAttackEventlist::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListWafAttackEventlist::idIsSet() const
{
    return idIsSet_;
}

void ListWafAttackEventlist::unsetid()
{
    idIsSet_ = false;
}

std::string ListWafAttackEventlist::getDomain() const
{
    return domain_;
}

void ListWafAttackEventlist::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListWafAttackEventlist::domainIsSet() const
{
    return domainIsSet_;
}

void ListWafAttackEventlist::unsetdomain()
{
    domainIsSet_ = false;
}

int32_t ListWafAttackEventlist::getTime() const
{
    return time_;
}

void ListWafAttackEventlist::setTime(int32_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ListWafAttackEventlist::timeIsSet() const
{
    return timeIsSet_;
}

void ListWafAttackEventlist::unsettime()
{
    timeIsSet_ = false;
}

std::string ListWafAttackEventlist::getSip() const
{
    return sip_;
}

void ListWafAttackEventlist::setSip(const std::string& value)
{
    sip_ = value;
    sipIsSet_ = true;
}

bool ListWafAttackEventlist::sipIsSet() const
{
    return sipIsSet_;
}

void ListWafAttackEventlist::unsetsip()
{
    sipIsSet_ = false;
}

std::string ListWafAttackEventlist::getAction() const
{
    return action_;
}

void ListWafAttackEventlist::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListWafAttackEventlist::actionIsSet() const
{
    return actionIsSet_;
}

void ListWafAttackEventlist::unsetaction()
{
    actionIsSet_ = false;
}

std::string ListWafAttackEventlist::getUrl() const
{
    return url_;
}

void ListWafAttackEventlist::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ListWafAttackEventlist::urlIsSet() const
{
    return urlIsSet_;
}

void ListWafAttackEventlist::unseturl()
{
    urlIsSet_ = false;
}

std::string ListWafAttackEventlist::getType() const
{
    return type_;
}

void ListWafAttackEventlist::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListWafAttackEventlist::typeIsSet() const
{
    return typeIsSet_;
}

void ListWafAttackEventlist::unsettype()
{
    typeIsSet_ = false;
}

Backend ListWafAttackEventlist::getBackend() const
{
    return backend_;
}

void ListWafAttackEventlist::setBackend(const Backend& value)
{
    backend_ = value;
    backendIsSet_ = true;
}

bool ListWafAttackEventlist::backendIsSet() const
{
    return backendIsSet_;
}

void ListWafAttackEventlist::unsetbackend()
{
    backendIsSet_ = false;
}

}
}
}
}
}


