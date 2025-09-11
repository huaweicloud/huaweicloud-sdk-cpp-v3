

#include "huaweicloud/functiongraph/v2/model/ShowWorkFlowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowWorkFlowResponse::ShowWorkFlowResponse()
{
    id_ = "";
    idIsSet_ = false;
    workflowUrn_ = "";
    workflowUrnIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    updatedTime_ = "";
    updatedTimeIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsStreamId_ = "";
    ltsStreamIdIsSet_ = false;
    definitionIsSet_ = false;
}

ShowWorkFlowResponse::~ShowWorkFlowResponse() = default;

void ShowWorkFlowResponse::validate()
{
}

web::json::value ShowWorkFlowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(workflowUrnIsSet_) {
        val[utility::conversions::to_string_t("workflow_urn")] = ModelBase::toJson(workflowUrn_);
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
    if(ltsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("lts_group_id")] = ModelBase::toJson(ltsGroupId_);
    }
    if(ltsStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_stream_id")] = ModelBase::toJson(ltsStreamId_);
    }
    if(definitionIsSet_) {
        val[utility::conversions::to_string_t("definition")] = ModelBase::toJson(definition_);
    }

    return val;
}
bool ShowWorkFlowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("lts_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("definition"));
        if(!fieldValue.is_null())
        {
            WorkflowCreateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefinition(refVal);
        }
    }
    return ok;
}


std::string ShowWorkFlowResponse::getId() const
{
    return id_;
}

void ShowWorkFlowResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowWorkFlowResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowWorkFlowResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowWorkFlowResponse::getWorkflowUrn() const
{
    return workflowUrn_;
}

void ShowWorkFlowResponse::setWorkflowUrn(const std::string& value)
{
    workflowUrn_ = value;
    workflowUrnIsSet_ = true;
}

bool ShowWorkFlowResponse::workflowUrnIsSet() const
{
    return workflowUrnIsSet_;
}

void ShowWorkFlowResponse::unsetworkflowUrn()
{
    workflowUrnIsSet_ = false;
}

std::string ShowWorkFlowResponse::getCreatedTime() const
{
    return createdTime_;
}

void ShowWorkFlowResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowWorkFlowResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowWorkFlowResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ShowWorkFlowResponse::getUpdatedTime() const
{
    return updatedTime_;
}

void ShowWorkFlowResponse::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ShowWorkFlowResponse::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ShowWorkFlowResponse::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string ShowWorkFlowResponse::getCreatedBy() const
{
    return createdBy_;
}

void ShowWorkFlowResponse::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ShowWorkFlowResponse::createdByIsSet() const
{
    return createdByIsSet_;
}

void ShowWorkFlowResponse::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ShowWorkFlowResponse::getLtsGroupId() const
{
    return ltsGroupId_;
}

void ShowWorkFlowResponse::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool ShowWorkFlowResponse::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void ShowWorkFlowResponse::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string ShowWorkFlowResponse::getLtsStreamId() const
{
    return ltsStreamId_;
}

void ShowWorkFlowResponse::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool ShowWorkFlowResponse::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void ShowWorkFlowResponse::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

WorkflowCreateBody ShowWorkFlowResponse::getDefinition() const
{
    return definition_;
}

void ShowWorkFlowResponse::setDefinition(const WorkflowCreateBody& value)
{
    definition_ = value;
    definitionIsSet_ = true;
}

bool ShowWorkFlowResponse::definitionIsSet() const
{
    return definitionIsSet_;
}

void ShowWorkFlowResponse::unsetdefinition()
{
    definitionIsSet_ = false;
}

}
}
}
}
}


