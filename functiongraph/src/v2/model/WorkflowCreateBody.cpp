

#include "huaweicloud/functiongraph/v2/model/WorkflowCreateBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




WorkflowCreateBody::WorkflowCreateBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    start_ = "";
    startIsSet_ = false;
    triggersIsSet_ = false;
    functionsIsSet_ = false;
    statesIsSet_ = false;
    constantsIsSet_ = false;
    retriesIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    expressConfigIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    enableStreamResponse_ = false;
    enableStreamResponseIsSet_ = false;
}

WorkflowCreateBody::~WorkflowCreateBody() = default;

void WorkflowCreateBody::validate()
{
}

web::json::value WorkflowCreateBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(startIsSet_) {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(start_);
    }
    if(triggersIsSet_) {
        val[utility::conversions::to_string_t("triggers")] = ModelBase::toJson(triggers_);
    }
    if(functionsIsSet_) {
        val[utility::conversions::to_string_t("functions")] = ModelBase::toJson(functions_);
    }
    if(statesIsSet_) {
        val[utility::conversions::to_string_t("states")] = ModelBase::toJson(states_);
    }
    if(constantsIsSet_) {
        val[utility::conversions::to_string_t("constants")] = ModelBase::toJson(constants_);
    }
    if(retriesIsSet_) {
        val[utility::conversions::to_string_t("retries")] = ModelBase::toJson(retries_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(expressConfigIsSet_) {
        val[utility::conversions::to_string_t("express_config")] = ModelBase::toJson(expressConfig_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(enableStreamResponseIsSet_) {
        val[utility::conversions::to_string_t("enable_stream_response")] = ModelBase::toJson(enableStreamResponse_);
    }

    return val;
}
bool WorkflowCreateBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("triggers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("triggers"));
        if(!fieldValue.is_null())
        {
            std::vector<Trigger> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("functions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functions"));
        if(!fieldValue.is_null())
        {
            std::vector<Function> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("states"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("states"));
        if(!fieldValue.is_null())
        {
            std::vector<OperationState> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("constants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("constants"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConstants(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retries"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retries"));
        if(!fieldValue.is_null())
        {
            std::vector<Retry> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetries(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("express_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("express_config"));
        if(!fieldValue.is_null())
        {
            ExpressConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpressConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_stream_response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_stream_response"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableStreamResponse(refVal);
        }
    }
    return ok;
}


std::string WorkflowCreateBody::getName() const
{
    return name_;
}

void WorkflowCreateBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowCreateBody::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowCreateBody::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkflowCreateBody::getDescription() const
{
    return description_;
}

void WorkflowCreateBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkflowCreateBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkflowCreateBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string WorkflowCreateBody::getStart() const
{
    return start_;
}

void WorkflowCreateBody::setStart(const std::string& value)
{
    start_ = value;
    startIsSet_ = true;
}

bool WorkflowCreateBody::startIsSet() const
{
    return startIsSet_;
}

void WorkflowCreateBody::unsetstart()
{
    startIsSet_ = false;
}

std::vector<Trigger>& WorkflowCreateBody::getTriggers()
{
    return triggers_;
}

void WorkflowCreateBody::setTriggers(const std::vector<Trigger>& value)
{
    triggers_ = value;
    triggersIsSet_ = true;
}

bool WorkflowCreateBody::triggersIsSet() const
{
    return triggersIsSet_;
}

void WorkflowCreateBody::unsettriggers()
{
    triggersIsSet_ = false;
}

std::vector<Function>& WorkflowCreateBody::getFunctions()
{
    return functions_;
}

void WorkflowCreateBody::setFunctions(const std::vector<Function>& value)
{
    functions_ = value;
    functionsIsSet_ = true;
}

bool WorkflowCreateBody::functionsIsSet() const
{
    return functionsIsSet_;
}

void WorkflowCreateBody::unsetfunctions()
{
    functionsIsSet_ = false;
}

std::vector<OperationState>& WorkflowCreateBody::getStates()
{
    return states_;
}

void WorkflowCreateBody::setStates(const std::vector<OperationState>& value)
{
    states_ = value;
    statesIsSet_ = true;
}

bool WorkflowCreateBody::statesIsSet() const
{
    return statesIsSet_;
}

void WorkflowCreateBody::unsetstates()
{
    statesIsSet_ = false;
}

Object WorkflowCreateBody::getConstants() const
{
    return constants_;
}

void WorkflowCreateBody::setConstants(const Object& value)
{
    constants_ = value;
    constantsIsSet_ = true;
}

bool WorkflowCreateBody::constantsIsSet() const
{
    return constantsIsSet_;
}

void WorkflowCreateBody::unsetconstants()
{
    constantsIsSet_ = false;
}

std::vector<Retry>& WorkflowCreateBody::getRetries()
{
    return retries_;
}

void WorkflowCreateBody::setRetries(const std::vector<Retry>& value)
{
    retries_ = value;
    retriesIsSet_ = true;
}

bool WorkflowCreateBody::retriesIsSet() const
{
    return retriesIsSet_;
}

void WorkflowCreateBody::unsetretries()
{
    retriesIsSet_ = false;
}

std::string WorkflowCreateBody::getMode() const
{
    return mode_;
}

void WorkflowCreateBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool WorkflowCreateBody::modeIsSet() const
{
    return modeIsSet_;
}

void WorkflowCreateBody::unsetmode()
{
    modeIsSet_ = false;
}

ExpressConfig WorkflowCreateBody::getExpressConfig() const
{
    return expressConfig_;
}

void WorkflowCreateBody::setExpressConfig(const ExpressConfig& value)
{
    expressConfig_ = value;
    expressConfigIsSet_ = true;
}

bool WorkflowCreateBody::expressConfigIsSet() const
{
    return expressConfigIsSet_;
}

void WorkflowCreateBody::unsetexpressConfig()
{
    expressConfigIsSet_ = false;
}

std::string WorkflowCreateBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void WorkflowCreateBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool WorkflowCreateBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void WorkflowCreateBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool WorkflowCreateBody::isEnableStreamResponse() const
{
    return enableStreamResponse_;
}

void WorkflowCreateBody::setEnableStreamResponse(bool value)
{
    enableStreamResponse_ = value;
    enableStreamResponseIsSet_ = true;
}

bool WorkflowCreateBody::enableStreamResponseIsSet() const
{
    return enableStreamResponseIsSet_;
}

void WorkflowCreateBody::unsetenableStreamResponse()
{
    enableStreamResponseIsSet_ = false;
}

}
}
}
}
}


