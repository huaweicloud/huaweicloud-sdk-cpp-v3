

#include "huaweicloud/modelarts/v1/model/UpdateWorkflowScheduleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkflowScheduleResponse::UpdateWorkflowScheduleResponse()
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

UpdateWorkflowScheduleResponse::~UpdateWorkflowScheduleResponse() = default;

void UpdateWorkflowScheduleResponse::validate()
{
}

web::json::value UpdateWorkflowScheduleResponse::toJson() const
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
bool UpdateWorkflowScheduleResponse::fromJson(const web::json::value& val)
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


std::string UpdateWorkflowScheduleResponse::getType() const
{
    return type_;
}

void UpdateWorkflowScheduleResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateWorkflowScheduleResponse::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateWorkflowScheduleResponse::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, Object>& UpdateWorkflowScheduleResponse::getContent()
{
    return content_;
}

void UpdateWorkflowScheduleResponse::setContent(const std::map<std::string, Object>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool UpdateWorkflowScheduleResponse::contentIsSet() const
{
    return contentIsSet_;
}

void UpdateWorkflowScheduleResponse::unsetcontent()
{
    contentIsSet_ = false;
}

std::string UpdateWorkflowScheduleResponse::getAction() const
{
    return action_;
}

void UpdateWorkflowScheduleResponse::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpdateWorkflowScheduleResponse::actionIsSet() const
{
    return actionIsSet_;
}

void UpdateWorkflowScheduleResponse::unsetaction()
{
    actionIsSet_ = false;
}

std::string UpdateWorkflowScheduleResponse::getWorkflowId() const
{
    return workflowId_;
}

void UpdateWorkflowScheduleResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool UpdateWorkflowScheduleResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void UpdateWorkflowScheduleResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string UpdateWorkflowScheduleResponse::getUserId() const
{
    return userId_;
}

void UpdateWorkflowScheduleResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UpdateWorkflowScheduleResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void UpdateWorkflowScheduleResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

bool UpdateWorkflowScheduleResponse::isEnable() const
{
    return enable_;
}

void UpdateWorkflowScheduleResponse::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool UpdateWorkflowScheduleResponse::enableIsSet() const
{
    return enableIsSet_;
}

void UpdateWorkflowScheduleResponse::unsetenable()
{
    enableIsSet_ = false;
}

std::string UpdateWorkflowScheduleResponse::getUuid() const
{
    return uuid_;
}

void UpdateWorkflowScheduleResponse::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool UpdateWorkflowScheduleResponse::uuidIsSet() const
{
    return uuidIsSet_;
}

void UpdateWorkflowScheduleResponse::unsetuuid()
{
    uuidIsSet_ = false;
}

WorkflowSchedulePolicies UpdateWorkflowScheduleResponse::getPolicies() const
{
    return policies_;
}

void UpdateWorkflowScheduleResponse::setPolicies(const WorkflowSchedulePolicies& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool UpdateWorkflowScheduleResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void UpdateWorkflowScheduleResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

std::string UpdateWorkflowScheduleResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateWorkflowScheduleResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateWorkflowScheduleResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateWorkflowScheduleResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


