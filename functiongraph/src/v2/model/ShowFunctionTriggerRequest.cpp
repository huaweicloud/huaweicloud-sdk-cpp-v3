

#include "huaweicloud/functiongraph/v2/model/ShowFunctionTriggerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionTriggerRequest::ShowFunctionTriggerRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    triggerTypeCode_ = "";
    triggerTypeCodeIsSet_ = false;
    triggerId_ = "";
    triggerIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowFunctionTriggerRequest::~ShowFunctionTriggerRequest() = default;

void ShowFunctionTriggerRequest::validate()
{
}

web::json::value ShowFunctionTriggerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(triggerTypeCodeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type_code")] = ModelBase::toJson(triggerTypeCode_);
    }
    if(triggerIdIsSet_) {
        val[utility::conversions::to_string_t("trigger_id")] = ModelBase::toJson(triggerId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowFunctionTriggerRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("trigger_type_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerTypeCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ShowFunctionTriggerRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ShowFunctionTriggerRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ShowFunctionTriggerRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ShowFunctionTriggerRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ShowFunctionTriggerRequest::getTriggerTypeCode() const
{
    return triggerTypeCode_;
}

void ShowFunctionTriggerRequest::setTriggerTypeCode(const std::string& value)
{
    triggerTypeCode_ = value;
    triggerTypeCodeIsSet_ = true;
}

bool ShowFunctionTriggerRequest::triggerTypeCodeIsSet() const
{
    return triggerTypeCodeIsSet_;
}

void ShowFunctionTriggerRequest::unsettriggerTypeCode()
{
    triggerTypeCodeIsSet_ = false;
}

std::string ShowFunctionTriggerRequest::getTriggerId() const
{
    return triggerId_;
}

void ShowFunctionTriggerRequest::setTriggerId(const std::string& value)
{
    triggerId_ = value;
    triggerIdIsSet_ = true;
}

bool ShowFunctionTriggerRequest::triggerIdIsSet() const
{
    return triggerIdIsSet_;
}

void ShowFunctionTriggerRequest::unsettriggerId()
{
    triggerIdIsSet_ = false;
}

std::string ShowFunctionTriggerRequest::getContentType() const
{
    return contentType_;
}

void ShowFunctionTriggerRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowFunctionTriggerRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowFunctionTriggerRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


