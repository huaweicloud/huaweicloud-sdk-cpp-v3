

#include "huaweicloud/codeartsrepo/v3/model/RepositoryHookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




RepositoryHookRequest::RepositoryHookRequest()
{
    hookUrl_ = "";
    hookUrlIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
    hookEventsIsSet_ = false;
}

RepositoryHookRequest::~RepositoryHookRequest() = default;

void RepositoryHookRequest::validate()
{
}

web::json::value RepositoryHookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hookUrlIsSet_) {
        val[utility::conversions::to_string_t("hook_url")] = ModelBase::toJson(hookUrl_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(hookEventsIsSet_) {
        val[utility::conversions::to_string_t("hook_events")] = ModelBase::toJson(hookEvents_);
    }

    return val;
}
bool RepositoryHookRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hook_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hook_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHookUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hook_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hook_events"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHookEvents(refVal);
        }
    }
    return ok;
}


std::string RepositoryHookRequest::getHookUrl() const
{
    return hookUrl_;
}

void RepositoryHookRequest::setHookUrl(const std::string& value)
{
    hookUrl_ = value;
    hookUrlIsSet_ = true;
}

bool RepositoryHookRequest::hookUrlIsSet() const
{
    return hookUrlIsSet_;
}

void RepositoryHookRequest::unsethookUrl()
{
    hookUrlIsSet_ = false;
}

std::string RepositoryHookRequest::getService() const
{
    return service_;
}

void RepositoryHookRequest::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool RepositoryHookRequest::serviceIsSet() const
{
    return serviceIsSet_;
}

void RepositoryHookRequest::unsetservice()
{
    serviceIsSet_ = false;
}

std::string RepositoryHookRequest::getToken() const
{
    return token_;
}

void RepositoryHookRequest::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool RepositoryHookRequest::tokenIsSet() const
{
    return tokenIsSet_;
}

void RepositoryHookRequest::unsettoken()
{
    tokenIsSet_ = false;
}

std::vector<std::string>& RepositoryHookRequest::getHookEvents()
{
    return hookEvents_;
}

void RepositoryHookRequest::setHookEvents(const std::vector<std::string>& value)
{
    hookEvents_ = value;
    hookEventsIsSet_ = true;
}

bool RepositoryHookRequest::hookEventsIsSet() const
{
    return hookEventsIsSet_;
}

void RepositoryHookRequest::unsethookEvents()
{
    hookEventsIsSet_ = false;
}

}
}
}
}
}


