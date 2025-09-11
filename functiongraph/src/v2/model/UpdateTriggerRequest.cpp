

#include "huaweicloud/functiongraph/v2/model/UpdateTriggerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateTriggerRequest::UpdateTriggerRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    triggerTypeCode_ = "";
    triggerTypeCodeIsSet_ = false;
    triggerId_ = "";
    triggerIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTriggerRequest::~UpdateTriggerRequest() = default;

void UpdateTriggerRequest::validate()
{
}

web::json::value UpdateTriggerRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTriggerRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateTriggerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTriggerRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateTriggerRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateTriggerRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateTriggerRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateTriggerRequest::getTriggerTypeCode() const
{
    return triggerTypeCode_;
}

void UpdateTriggerRequest::setTriggerTypeCode(const std::string& value)
{
    triggerTypeCode_ = value;
    triggerTypeCodeIsSet_ = true;
}

bool UpdateTriggerRequest::triggerTypeCodeIsSet() const
{
    return triggerTypeCodeIsSet_;
}

void UpdateTriggerRequest::unsettriggerTypeCode()
{
    triggerTypeCodeIsSet_ = false;
}

std::string UpdateTriggerRequest::getTriggerId() const
{
    return triggerId_;
}

void UpdateTriggerRequest::setTriggerId(const std::string& value)
{
    triggerId_ = value;
    triggerIdIsSet_ = true;
}

bool UpdateTriggerRequest::triggerIdIsSet() const
{
    return triggerIdIsSet_;
}

void UpdateTriggerRequest::unsettriggerId()
{
    triggerIdIsSet_ = false;
}

std::string UpdateTriggerRequest::getContentType() const
{
    return contentType_;
}

void UpdateTriggerRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateTriggerRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateTriggerRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateTriggerRequestBody UpdateTriggerRequest::getBody() const
{
    return body_;
}

void UpdateTriggerRequest::setBody(const UpdateTriggerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTriggerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTriggerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


