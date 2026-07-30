

#include "huaweicloud/modelarts/v1/model/CreateWorkflowScheduleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowScheduleResponse::CreateWorkflowScheduleResponse()
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

CreateWorkflowScheduleResponse::~CreateWorkflowScheduleResponse() = default;

void CreateWorkflowScheduleResponse::validate()
{
}

web::json::value CreateWorkflowScheduleResponse::toJson() const
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
bool CreateWorkflowScheduleResponse::fromJson(const web::json::value& val)
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


std::string CreateWorkflowScheduleResponse::getType() const
{
    return type_;
}

void CreateWorkflowScheduleResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateWorkflowScheduleResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CreateWorkflowScheduleResponse::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, Object>& CreateWorkflowScheduleResponse::getContent()
{
    return content_;
}

void CreateWorkflowScheduleResponse::setContent(const std::map<std::string, Object>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CreateWorkflowScheduleResponse::contentIsSet() const
{
    return contentIsSet_;
}

void CreateWorkflowScheduleResponse::unsetcontent()
{
    contentIsSet_ = false;
}

std::string CreateWorkflowScheduleResponse::getAction() const
{
    return action_;
}

void CreateWorkflowScheduleResponse::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool CreateWorkflowScheduleResponse::actionIsSet() const
{
    return actionIsSet_;
}

void CreateWorkflowScheduleResponse::unsetaction()
{
    actionIsSet_ = false;
}

std::string CreateWorkflowScheduleResponse::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowScheduleResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowScheduleResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowScheduleResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string CreateWorkflowScheduleResponse::getUserId() const
{
    return userId_;
}

void CreateWorkflowScheduleResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CreateWorkflowScheduleResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void CreateWorkflowScheduleResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

bool CreateWorkflowScheduleResponse::isEnable() const
{
    return enable_;
}

void CreateWorkflowScheduleResponse::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool CreateWorkflowScheduleResponse::enableIsSet() const
{
    return enableIsSet_;
}

void CreateWorkflowScheduleResponse::unsetenable()
{
    enableIsSet_ = false;
}

std::string CreateWorkflowScheduleResponse::getUuid() const
{
    return uuid_;
}

void CreateWorkflowScheduleResponse::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool CreateWorkflowScheduleResponse::uuidIsSet() const
{
    return uuidIsSet_;
}

void CreateWorkflowScheduleResponse::unsetuuid()
{
    uuidIsSet_ = false;
}

WorkflowSchedulePolicies CreateWorkflowScheduleResponse::getPolicies() const
{
    return policies_;
}

void CreateWorkflowScheduleResponse::setPolicies(const WorkflowSchedulePolicies& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool CreateWorkflowScheduleResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void CreateWorkflowScheduleResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

std::string CreateWorkflowScheduleResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateWorkflowScheduleResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateWorkflowScheduleResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateWorkflowScheduleResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


