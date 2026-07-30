

#include "huaweicloud/modelarts/v1/model/WorkflowScheduleResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowScheduleResp::WorkflowScheduleResp()
{
    type_ = "";
    typeIsSet_ = false;
    contentIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    policiesIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
}

WorkflowScheduleResp::~WorkflowScheduleResp() = default;

void WorkflowScheduleResp::validate()
{
}

web::json::value WorkflowScheduleResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool WorkflowScheduleResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            WorkflowSchedulePoliciesResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string WorkflowScheduleResp::getType() const
{
    return type_;
}

void WorkflowScheduleResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkflowScheduleResp::typeIsSet() const
{
    return typeIsSet_;
}

void WorkflowScheduleResp::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, std::string>& WorkflowScheduleResp::getContent()
{
    return content_;
}

void WorkflowScheduleResp::setContent(const std::map<std::string, std::string>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool WorkflowScheduleResp::contentIsSet() const
{
    return contentIsSet_;
}

void WorkflowScheduleResp::unsetcontent()
{
    contentIsSet_ = false;
}

std::string WorkflowScheduleResp::getAction() const
{
    return action_;
}

void WorkflowScheduleResp::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool WorkflowScheduleResp::actionIsSet() const
{
    return actionIsSet_;
}

void WorkflowScheduleResp::unsetaction()
{
    actionIsSet_ = false;
}

std::string WorkflowScheduleResp::getWorkflowId() const
{
    return workflowId_;
}

void WorkflowScheduleResp::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool WorkflowScheduleResp::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void WorkflowScheduleResp::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string WorkflowScheduleResp::getUserId() const
{
    return userId_;
}

void WorkflowScheduleResp::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool WorkflowScheduleResp::userIdIsSet() const
{
    return userIdIsSet_;
}

void WorkflowScheduleResp::unsetuserId()
{
    userIdIsSet_ = false;
}

bool WorkflowScheduleResp::isEnable() const
{
    return enable_;
}

void WorkflowScheduleResp::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool WorkflowScheduleResp::enableIsSet() const
{
    return enableIsSet_;
}

void WorkflowScheduleResp::unsetenable()
{
    enableIsSet_ = false;
}

std::string WorkflowScheduleResp::getUuid() const
{
    return uuid_;
}

void WorkflowScheduleResp::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool WorkflowScheduleResp::uuidIsSet() const
{
    return uuidIsSet_;
}

void WorkflowScheduleResp::unsetuuid()
{
    uuidIsSet_ = false;
}

WorkflowSchedulePoliciesResp WorkflowScheduleResp::getPolicies() const
{
    return policies_;
}

void WorkflowScheduleResp::setPolicies(const WorkflowSchedulePoliciesResp& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool WorkflowScheduleResp::policiesIsSet() const
{
    return policiesIsSet_;
}

void WorkflowScheduleResp::unsetpolicies()
{
    policiesIsSet_ = false;
}

std::string WorkflowScheduleResp::getCreatedAt() const
{
    return createdAt_;
}

void WorkflowScheduleResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WorkflowScheduleResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WorkflowScheduleResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


