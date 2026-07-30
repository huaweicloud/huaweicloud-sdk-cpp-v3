

#include "huaweicloud/modelarts/v1/model/WorkflowSchedule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowSchedule::WorkflowSchedule()
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

WorkflowSchedule::~WorkflowSchedule() = default;

void WorkflowSchedule::validate()
{
}

web::json::value WorkflowSchedule::toJson() const
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
bool WorkflowSchedule::fromJson(const web::json::value& val)
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
            std::map<std::string, Object> refVal;
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
            WorkflowSchedulePolicies refVal;
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


std::string WorkflowSchedule::getType() const
{
    return type_;
}

void WorkflowSchedule::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkflowSchedule::typeIsSet() const
{
    return typeIsSet_;
}

void WorkflowSchedule::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, Object>& WorkflowSchedule::getContent()
{
    return content_;
}

void WorkflowSchedule::setContent(const std::map<std::string, Object>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool WorkflowSchedule::contentIsSet() const
{
    return contentIsSet_;
}

void WorkflowSchedule::unsetcontent()
{
    contentIsSet_ = false;
}

std::string WorkflowSchedule::getAction() const
{
    return action_;
}

void WorkflowSchedule::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool WorkflowSchedule::actionIsSet() const
{
    return actionIsSet_;
}

void WorkflowSchedule::unsetaction()
{
    actionIsSet_ = false;
}

std::string WorkflowSchedule::getWorkflowId() const
{
    return workflowId_;
}

void WorkflowSchedule::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool WorkflowSchedule::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void WorkflowSchedule::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string WorkflowSchedule::getUserId() const
{
    return userId_;
}

void WorkflowSchedule::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool WorkflowSchedule::userIdIsSet() const
{
    return userIdIsSet_;
}

void WorkflowSchedule::unsetuserId()
{
    userIdIsSet_ = false;
}

bool WorkflowSchedule::isEnable() const
{
    return enable_;
}

void WorkflowSchedule::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool WorkflowSchedule::enableIsSet() const
{
    return enableIsSet_;
}

void WorkflowSchedule::unsetenable()
{
    enableIsSet_ = false;
}

std::string WorkflowSchedule::getUuid() const
{
    return uuid_;
}

void WorkflowSchedule::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool WorkflowSchedule::uuidIsSet() const
{
    return uuidIsSet_;
}

void WorkflowSchedule::unsetuuid()
{
    uuidIsSet_ = false;
}

WorkflowSchedulePolicies WorkflowSchedule::getPolicies() const
{
    return policies_;
}

void WorkflowSchedule::setPolicies(const WorkflowSchedulePolicies& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool WorkflowSchedule::policiesIsSet() const
{
    return policiesIsSet_;
}

void WorkflowSchedule::unsetpolicies()
{
    policiesIsSet_ = false;
}

std::string WorkflowSchedule::getCreatedAt() const
{
    return createdAt_;
}

void WorkflowSchedule::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WorkflowSchedule::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WorkflowSchedule::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


