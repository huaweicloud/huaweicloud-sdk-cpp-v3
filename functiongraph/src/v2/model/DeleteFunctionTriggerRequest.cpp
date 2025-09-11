

#include "huaweicloud/functiongraph/v2/model/DeleteFunctionTriggerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




DeleteFunctionTriggerRequest::DeleteFunctionTriggerRequest()
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

DeleteFunctionTriggerRequest::~DeleteFunctionTriggerRequest() = default;

void DeleteFunctionTriggerRequest::validate()
{
}

web::json::value DeleteFunctionTriggerRequest::toJson() const
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
bool DeleteFunctionTriggerRequest::fromJson(const web::json::value& val)
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


std::string DeleteFunctionTriggerRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void DeleteFunctionTriggerRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool DeleteFunctionTriggerRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void DeleteFunctionTriggerRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string DeleteFunctionTriggerRequest::getTriggerTypeCode() const
{
    return triggerTypeCode_;
}

void DeleteFunctionTriggerRequest::setTriggerTypeCode(const std::string& value)
{
    triggerTypeCode_ = value;
    triggerTypeCodeIsSet_ = true;
}

bool DeleteFunctionTriggerRequest::triggerTypeCodeIsSet() const
{
    return triggerTypeCodeIsSet_;
}

void DeleteFunctionTriggerRequest::unsettriggerTypeCode()
{
    triggerTypeCodeIsSet_ = false;
}

std::string DeleteFunctionTriggerRequest::getTriggerId() const
{
    return triggerId_;
}

void DeleteFunctionTriggerRequest::setTriggerId(const std::string& value)
{
    triggerId_ = value;
    triggerIdIsSet_ = true;
}

bool DeleteFunctionTriggerRequest::triggerIdIsSet() const
{
    return triggerIdIsSet_;
}

void DeleteFunctionTriggerRequest::unsettriggerId()
{
    triggerIdIsSet_ = false;
}

std::string DeleteFunctionTriggerRequest::getContentType() const
{
    return contentType_;
}

void DeleteFunctionTriggerRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteFunctionTriggerRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteFunctionTriggerRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


