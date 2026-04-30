

#include "huaweicloud/cpcs/v1/model/SwitchTokenResponse_token_app.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




SwitchTokenResponse_token_app::SwitchTokenResponse_token_app()
{
    appName_ = "";
    appNameIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

SwitchTokenResponse_token_app::~SwitchTokenResponse_token_app() = default;

void SwitchTokenResponse_token_app::validate()
{
}

web::json::value SwitchTokenResponse_token_app::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("appName")] = ModelBase::toJson(appName_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("appId")] = ModelBase::toJson(appId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchTokenResponse_token_app::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("appName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("appId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SwitchTokenResponse_token_app::getAppName() const
{
    return appName_;
}

void SwitchTokenResponse_token_app::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool SwitchTokenResponse_token_app::appNameIsSet() const
{
    return appNameIsSet_;
}

void SwitchTokenResponse_token_app::unsetappName()
{
    appNameIsSet_ = false;
}

std::string SwitchTokenResponse_token_app::getAppId() const
{
    return appId_;
}

void SwitchTokenResponse_token_app::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool SwitchTokenResponse_token_app::appIdIsSet() const
{
    return appIdIsSet_;
}

void SwitchTokenResponse_token_app::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t SwitchTokenResponse_token_app::getStatus() const
{
    return status_;
}

void SwitchTokenResponse_token_app::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchTokenResponse_token_app::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchTokenResponse_token_app::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


