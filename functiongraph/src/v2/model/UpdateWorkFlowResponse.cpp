

#include "huaweicloud/functiongraph/v2/model/UpdateWorkFlowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateWorkFlowResponse::UpdateWorkFlowResponse()
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

UpdateWorkFlowResponse::~UpdateWorkFlowResponse() = default;

void UpdateWorkFlowResponse::validate()
{
}

web::json::value UpdateWorkFlowResponse::toJson() const
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
bool UpdateWorkFlowResponse::fromJson(const web::json::value& val)
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


bool UpdateWorkFlowResponse::isEnableStreamResponse() const
{
    return enableStreamResponse_;
}

void UpdateWorkFlowResponse::setEnableStreamResponse(bool value)
{
    enableStreamResponse_ = value;
    enableStreamResponseIsSet_ = true;
}

bool UpdateWorkFlowResponse::enableStreamResponseIsSet() const
{
    return enableStreamResponseIsSet_;
}

void UpdateWorkFlowResponse::unsetenableStreamResponse()
{
    enableStreamResponseIsSet_ = false;
}

std::string UpdateWorkFlowResponse::getId() const
{
    return id_;
}

void UpdateWorkFlowResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateWorkFlowResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateWorkFlowResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateWorkFlowResponse::getWorkflowUrn() const
{
    return workflowUrn_;
}

void UpdateWorkFlowResponse::setWorkflowUrn(const std::string& value)
{
    workflowUrn_ = value;
    workflowUrnIsSet_ = true;
}

bool UpdateWorkFlowResponse::workflowUrnIsSet() const
{
    return workflowUrnIsSet_;
}

void UpdateWorkFlowResponse::unsetworkflowUrn()
{
    workflowUrnIsSet_ = false;
}

std::string UpdateWorkFlowResponse::getName() const
{
    return name_;
}

void UpdateWorkFlowResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateWorkFlowResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateWorkFlowResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateWorkFlowResponse::getDescription() const
{
    return description_;
}

void UpdateWorkFlowResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateWorkFlowResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateWorkFlowResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateWorkFlowResponse::getCreatedTime() const
{
    return createdTime_;
}

void UpdateWorkFlowResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool UpdateWorkFlowResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void UpdateWorkFlowResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string UpdateWorkFlowResponse::getUpdatedTime() const
{
    return updatedTime_;
}

void UpdateWorkFlowResponse::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool UpdateWorkFlowResponse::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void UpdateWorkFlowResponse::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string UpdateWorkFlowResponse::getCreatedBy() const
{
    return createdBy_;
}

void UpdateWorkFlowResponse::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool UpdateWorkFlowResponse::createdByIsSet() const
{
    return createdByIsSet_;
}

void UpdateWorkFlowResponse::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

}
}
}
}
}


