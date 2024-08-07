

#include "huaweicloud/codeartsdeploy/v2/model/UpdateAppInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateAppInfoRequestBody::UpdateAppInfoRequestBody()
{
    id_ = "";
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isDraft_ = false;
    isDraftIsSet_ = false;
    createType_ = "";
    createTypeIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
    triggerIsSet_ = false;
    arrangeInfosIsSet_ = false;
}

UpdateAppInfoRequestBody::~UpdateAppInfoRequestBody() = default;

void UpdateAppInfoRequestBody::validate()
{
}

web::json::value UpdateAppInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isDraftIsSet_) {
        val[utility::conversions::to_string_t("is_draft")] = ModelBase::toJson(isDraft_);
    }
    if(createTypeIsSet_) {
        val[utility::conversions::to_string_t("create_type")] = ModelBase::toJson(createType_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }
    if(triggerIsSet_) {
        val[utility::conversions::to_string_t("trigger")] = ModelBase::toJson(trigger_);
    }
    if(arrangeInfosIsSet_) {
        val[utility::conversions::to_string_t("arrange_infos")] = ModelBase::toJson(arrangeInfos_);
    }

    return val;
}
bool UpdateAppInfoRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_draft"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_draft"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDraft(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger"));
        if(!fieldValue.is_null())
        {
            TaskTriggerVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrigger(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arrange_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arrange_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateTaskV2RequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArrangeInfos(refVal);
        }
    }
    return ok;
}


std::string UpdateAppInfoRequestBody::getId() const
{
    return id_;
}

void UpdateAppInfoRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateAppInfoRequestBody::idIsSet() const
{
    return idIsSet_;
}

void UpdateAppInfoRequestBody::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateAppInfoRequestBody::getProjectId() const
{
    return projectId_;
}

void UpdateAppInfoRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateAppInfoRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateAppInfoRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateAppInfoRequestBody::getName() const
{
    return name_;
}

void UpdateAppInfoRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAppInfoRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAppInfoRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateAppInfoRequestBody::getDescription() const
{
    return description_;
}

void UpdateAppInfoRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateAppInfoRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateAppInfoRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool UpdateAppInfoRequestBody::isIsDraft() const
{
    return isDraft_;
}

void UpdateAppInfoRequestBody::setIsDraft(bool value)
{
    isDraft_ = value;
    isDraftIsSet_ = true;
}

bool UpdateAppInfoRequestBody::isDraftIsSet() const
{
    return isDraftIsSet_;
}

void UpdateAppInfoRequestBody::unsetisDraft()
{
    isDraftIsSet_ = false;
}

std::string UpdateAppInfoRequestBody::getCreateType() const
{
    return createType_;
}

void UpdateAppInfoRequestBody::setCreateType(const std::string& value)
{
    createType_ = value;
    createTypeIsSet_ = true;
}

bool UpdateAppInfoRequestBody::createTypeIsSet() const
{
    return createTypeIsSet_;
}

void UpdateAppInfoRequestBody::unsetcreateType()
{
    createTypeIsSet_ = false;
}

std::string UpdateAppInfoRequestBody::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void UpdateAppInfoRequestBody::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool UpdateAppInfoRequestBody::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void UpdateAppInfoRequestBody::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

TaskTriggerVO UpdateAppInfoRequestBody::getTrigger() const
{
    return trigger_;
}

void UpdateAppInfoRequestBody::setTrigger(const TaskTriggerVO& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool UpdateAppInfoRequestBody::triggerIsSet() const
{
    return triggerIsSet_;
}

void UpdateAppInfoRequestBody::unsettrigger()
{
    triggerIsSet_ = false;
}

std::vector<UpdateTaskV2RequestBody>& UpdateAppInfoRequestBody::getArrangeInfos()
{
    return arrangeInfos_;
}

void UpdateAppInfoRequestBody::setArrangeInfos(const std::vector<UpdateTaskV2RequestBody>& value)
{
    arrangeInfos_ = value;
    arrangeInfosIsSet_ = true;
}

bool UpdateAppInfoRequestBody::arrangeInfosIsSet() const
{
    return arrangeInfosIsSet_;
}

void UpdateAppInfoRequestBody::unsetarrangeInfos()
{
    arrangeInfosIsSet_ = false;
}

}
}
}
}
}


