

#include "huaweicloud/cdn/v2/model/RequestUrlRewriteEngine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




RequestUrlRewriteEngine::RequestUrlRewriteEngine()
{
    redirectStatusCode_ = 0;
    redirectStatusCodeIsSet_ = false;
    redirectUrl_ = "";
    redirectUrlIsSet_ = false;
    redirectHost_ = "";
    redirectHostIsSet_ = false;
    executionMode_ = "";
    executionModeIsSet_ = false;
}

RequestUrlRewriteEngine::~RequestUrlRewriteEngine() = default;

void RequestUrlRewriteEngine::validate()
{
}

web::json::value RequestUrlRewriteEngine::toJson() const
{
    web::json::value val = web::json::value::object();

    if(redirectStatusCodeIsSet_) {
        val[utility::conversions::to_string_t("redirect_status_code")] = ModelBase::toJson(redirectStatusCode_);
    }
    if(redirectUrlIsSet_) {
        val[utility::conversions::to_string_t("redirect_url")] = ModelBase::toJson(redirectUrl_);
    }
    if(redirectHostIsSet_) {
        val[utility::conversions::to_string_t("redirect_host")] = ModelBase::toJson(redirectHost_);
    }
    if(executionModeIsSet_) {
        val[utility::conversions::to_string_t("execution_mode")] = ModelBase::toJson(executionMode_);
    }

    return val;
}
bool RequestUrlRewriteEngine::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("redirect_status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redirect_status_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedirectStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redirect_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redirect_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedirectUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redirect_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redirect_host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedirectHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionMode(refVal);
        }
    }
    return ok;
}


int32_t RequestUrlRewriteEngine::getRedirectStatusCode() const
{
    return redirectStatusCode_;
}

void RequestUrlRewriteEngine::setRedirectStatusCode(int32_t value)
{
    redirectStatusCode_ = value;
    redirectStatusCodeIsSet_ = true;
}

bool RequestUrlRewriteEngine::redirectStatusCodeIsSet() const
{
    return redirectStatusCodeIsSet_;
}

void RequestUrlRewriteEngine::unsetredirectStatusCode()
{
    redirectStatusCodeIsSet_ = false;
}

std::string RequestUrlRewriteEngine::getRedirectUrl() const
{
    return redirectUrl_;
}

void RequestUrlRewriteEngine::setRedirectUrl(const std::string& value)
{
    redirectUrl_ = value;
    redirectUrlIsSet_ = true;
}

bool RequestUrlRewriteEngine::redirectUrlIsSet() const
{
    return redirectUrlIsSet_;
}

void RequestUrlRewriteEngine::unsetredirectUrl()
{
    redirectUrlIsSet_ = false;
}

std::string RequestUrlRewriteEngine::getRedirectHost() const
{
    return redirectHost_;
}

void RequestUrlRewriteEngine::setRedirectHost(const std::string& value)
{
    redirectHost_ = value;
    redirectHostIsSet_ = true;
}

bool RequestUrlRewriteEngine::redirectHostIsSet() const
{
    return redirectHostIsSet_;
}

void RequestUrlRewriteEngine::unsetredirectHost()
{
    redirectHostIsSet_ = false;
}

std::string RequestUrlRewriteEngine::getExecutionMode() const
{
    return executionMode_;
}

void RequestUrlRewriteEngine::setExecutionMode(const std::string& value)
{
    executionMode_ = value;
    executionModeIsSet_ = true;
}

bool RequestUrlRewriteEngine::executionModeIsSet() const
{
    return executionModeIsSet_;
}

void RequestUrlRewriteEngine::unsetexecutionMode()
{
    executionModeIsSet_ = false;
}

}
}
}
}
}


