

#include "huaweicloud/functiongraph/v2/model/ApigTriggerFuncInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ApigTriggerFuncInfo::ApigTriggerFuncInfo()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    invocationType_ = "";
    invocationTypeIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ApigTriggerFuncInfo::~ApigTriggerFuncInfo() = default;

void ApigTriggerFuncInfo::validate()
{
}

web::json::value ApigTriggerFuncInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(invocationTypeIsSet_) {
        val[utility::conversions::to_string_t("invocation_type")] = ModelBase::toJson(invocationType_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ApigTriggerFuncInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invocation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invocation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvocationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string ApigTriggerFuncInfo::getFunctionUrn() const
{
    return functionUrn_;
}

void ApigTriggerFuncInfo::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ApigTriggerFuncInfo::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ApigTriggerFuncInfo::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ApigTriggerFuncInfo::getInvocationType() const
{
    return invocationType_;
}

void ApigTriggerFuncInfo::setInvocationType(const std::string& value)
{
    invocationType_ = value;
    invocationTypeIsSet_ = true;
}

bool ApigTriggerFuncInfo::invocationTypeIsSet() const
{
    return invocationTypeIsSet_;
}

void ApigTriggerFuncInfo::unsetinvocationType()
{
    invocationTypeIsSet_ = false;
}

int32_t ApigTriggerFuncInfo::getTimeout() const
{
    return timeout_;
}

void ApigTriggerFuncInfo::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool ApigTriggerFuncInfo::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void ApigTriggerFuncInfo::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string ApigTriggerFuncInfo::getVersion() const
{
    return version_;
}

void ApigTriggerFuncInfo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ApigTriggerFuncInfo::versionIsSet() const
{
    return versionIsSet_;
}

void ApigTriggerFuncInfo::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


