

#include "huaweicloud/cdn/v2/model/RequestUrlRewrite.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




RequestUrlRewrite::RequestUrlRewrite()
{
    conditionIsSet_ = false;
    redirectStatusCode_ = 0;
    redirectStatusCodeIsSet_ = false;
    redirectUrl_ = "";
    redirectUrlIsSet_ = false;
    redirectHost_ = "";
    redirectHostIsSet_ = false;
    executionMode_ = "";
    executionModeIsSet_ = false;
}

RequestUrlRewrite::~RequestUrlRewrite() = default;

void RequestUrlRewrite::validate()
{
}

web::json::value RequestUrlRewrite::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
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
bool RequestUrlRewrite::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            UrlRewriteCondition refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
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


UrlRewriteCondition RequestUrlRewrite::getCondition() const
{
    return condition_;
}

void RequestUrlRewrite::setCondition(const UrlRewriteCondition& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool RequestUrlRewrite::conditionIsSet() const
{
    return conditionIsSet_;
}

void RequestUrlRewrite::unsetcondition()
{
    conditionIsSet_ = false;
}

int32_t RequestUrlRewrite::getRedirectStatusCode() const
{
    return redirectStatusCode_;
}

void RequestUrlRewrite::setRedirectStatusCode(int32_t value)
{
    redirectStatusCode_ = value;
    redirectStatusCodeIsSet_ = true;
}

bool RequestUrlRewrite::redirectStatusCodeIsSet() const
{
    return redirectStatusCodeIsSet_;
}

void RequestUrlRewrite::unsetredirectStatusCode()
{
    redirectStatusCodeIsSet_ = false;
}

std::string RequestUrlRewrite::getRedirectUrl() const
{
    return redirectUrl_;
}

void RequestUrlRewrite::setRedirectUrl(const std::string& value)
{
    redirectUrl_ = value;
    redirectUrlIsSet_ = true;
}

bool RequestUrlRewrite::redirectUrlIsSet() const
{
    return redirectUrlIsSet_;
}

void RequestUrlRewrite::unsetredirectUrl()
{
    redirectUrlIsSet_ = false;
}

std::string RequestUrlRewrite::getRedirectHost() const
{
    return redirectHost_;
}

void RequestUrlRewrite::setRedirectHost(const std::string& value)
{
    redirectHost_ = value;
    redirectHostIsSet_ = true;
}

bool RequestUrlRewrite::redirectHostIsSet() const
{
    return redirectHostIsSet_;
}

void RequestUrlRewrite::unsetredirectHost()
{
    redirectHostIsSet_ = false;
}

std::string RequestUrlRewrite::getExecutionMode() const
{
    return executionMode_;
}

void RequestUrlRewrite::setExecutionMode(const std::string& value)
{
    executionMode_ = value;
    executionModeIsSet_ = true;
}

bool RequestUrlRewrite::executionModeIsSet() const
{
    return executionModeIsSet_;
}

void RequestUrlRewrite::unsetexecutionMode()
{
    executionModeIsSet_ = false;
}

}
}
}
}
}


