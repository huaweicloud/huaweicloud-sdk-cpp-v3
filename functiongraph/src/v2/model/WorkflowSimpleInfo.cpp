

#include "huaweicloud/functiongraph/v2/model/WorkflowSimpleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




WorkflowSimpleInfo::WorkflowSimpleInfo()
{
    enableStreamResponse_ = false;
    enableStreamResponseIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    workflowUrn_ = "";
    workflowUrnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    updatedTime_ = "";
    updatedTimeIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
}

WorkflowSimpleInfo::~WorkflowSimpleInfo() = default;

void WorkflowSimpleInfo::validate()
{
}

web::json::value WorkflowSimpleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableStreamResponseIsSet_) {
        val[utility::conversions::to_string_t("enable_stream_response")] = ModelBase::toJson(enableStreamResponse_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(workflowUrnIsSet_) {
        val[utility::conversions::to_string_t("workflow_urn")] = ModelBase::toJson(workflowUrn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }

    return val;
}
bool WorkflowSimpleInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_stream_response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_stream_response"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableStreamResponse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowUrn(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    return ok;
}


bool WorkflowSimpleInfo::isEnableStreamResponse() const
{
    return enableStreamResponse_;
}

void WorkflowSimpleInfo::setEnableStreamResponse(bool value)
{
    enableStreamResponse_ = value;
    enableStreamResponseIsSet_ = true;
}

bool WorkflowSimpleInfo::enableStreamResponseIsSet() const
{
    return enableStreamResponseIsSet_;
}

void WorkflowSimpleInfo::unsetenableStreamResponse()
{
    enableStreamResponseIsSet_ = false;
}

std::string WorkflowSimpleInfo::getId() const
{
    return id_;
}

void WorkflowSimpleInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkflowSimpleInfo::idIsSet() const
{
    return idIsSet_;
}

void WorkflowSimpleInfo::unsetid()
{
    idIsSet_ = false;
}

std::string WorkflowSimpleInfo::getWorkflowUrn() const
{
    return workflowUrn_;
}

void WorkflowSimpleInfo::setWorkflowUrn(const std::string& value)
{
    workflowUrn_ = value;
    workflowUrnIsSet_ = true;
}

bool WorkflowSimpleInfo::workflowUrnIsSet() const
{
    return workflowUrnIsSet_;
}

void WorkflowSimpleInfo::unsetworkflowUrn()
{
    workflowUrnIsSet_ = false;
}

std::string WorkflowSimpleInfo::getName() const
{
    return name_;
}

void WorkflowSimpleInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowSimpleInfo::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowSimpleInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkflowSimpleInfo::getDescription() const
{
    return description_;
}

void WorkflowSimpleInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkflowSimpleInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkflowSimpleInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string WorkflowSimpleInfo::getCreatedTime() const
{
    return createdTime_;
}

void WorkflowSimpleInfo::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool WorkflowSimpleInfo::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void WorkflowSimpleInfo::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string WorkflowSimpleInfo::getUpdatedTime() const
{
    return updatedTime_;
}

void WorkflowSimpleInfo::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool WorkflowSimpleInfo::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void WorkflowSimpleInfo::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string WorkflowSimpleInfo::getCreatedBy() const
{
    return createdBy_;
}

void WorkflowSimpleInfo::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool WorkflowSimpleInfo::createdByIsSet() const
{
    return createdByIsSet_;
}

void WorkflowSimpleInfo::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

}
}
}
}
}


