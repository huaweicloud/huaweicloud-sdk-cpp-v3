

#include "huaweicloud/codeartsdeploy/v2/model/CreateAppRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateAppRequestBody::CreateAppRequestBody()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    isDraft_ = false;
    isDraftIsSet_ = false;
    createType_ = "";
    createTypeIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
    triggerIsSet_ = false;
    arrangeInfosIsSet_ = false;
    agencyUrn_ = "";
    agencyUrnIsSet_ = false;
    slaveResourceType_ = "";
    slaveResourceTypeIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
}

CreateAppRequestBody::~CreateAppRequestBody() = default;

void CreateAppRequestBody::validate()
{
}

web::json::value CreateAppRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
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
    if(agencyUrnIsSet_) {
        val[utility::conversions::to_string_t("agency_urn")] = ModelBase::toJson(agencyUrn_);
    }
    if(slaveResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("slave_resource_type")] = ModelBase::toJson(slaveResourceType_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }

    return val;
}
bool CreateAppRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
            std::vector<TaskV2RequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArrangeInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    return ok;
}


std::string CreateAppRequestBody::getProjectId() const
{
    return projectId_;
}

void CreateAppRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateAppRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateAppRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateAppRequestBody::getName() const
{
    return name_;
}

void CreateAppRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateAppRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateAppRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateAppRequestBody::getDescription() const
{
    return description_;
}

void CreateAppRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateAppRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateAppRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateAppRequestBody::getGroupId() const
{
    return groupId_;
}

void CreateAppRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateAppRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateAppRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

bool CreateAppRequestBody::isIsDraft() const
{
    return isDraft_;
}

void CreateAppRequestBody::setIsDraft(bool value)
{
    isDraft_ = value;
    isDraftIsSet_ = true;
}

bool CreateAppRequestBody::isDraftIsSet() const
{
    return isDraftIsSet_;
}

void CreateAppRequestBody::unsetisDraft()
{
    isDraftIsSet_ = false;
}

std::string CreateAppRequestBody::getCreateType() const
{
    return createType_;
}

void CreateAppRequestBody::setCreateType(const std::string& value)
{
    createType_ = value;
    createTypeIsSet_ = true;
}

bool CreateAppRequestBody::createTypeIsSet() const
{
    return createTypeIsSet_;
}

void CreateAppRequestBody::unsetcreateType()
{
    createTypeIsSet_ = false;
}

std::string CreateAppRequestBody::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void CreateAppRequestBody::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool CreateAppRequestBody::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void CreateAppRequestBody::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

TaskTriggerVO CreateAppRequestBody::getTrigger() const
{
    return trigger_;
}

void CreateAppRequestBody::setTrigger(const TaskTriggerVO& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool CreateAppRequestBody::triggerIsSet() const
{
    return triggerIsSet_;
}

void CreateAppRequestBody::unsettrigger()
{
    triggerIsSet_ = false;
}

std::vector<TaskV2RequestBody>& CreateAppRequestBody::getArrangeInfos()
{
    return arrangeInfos_;
}

void CreateAppRequestBody::setArrangeInfos(const std::vector<TaskV2RequestBody>& value)
{
    arrangeInfos_ = value;
    arrangeInfosIsSet_ = true;
}

bool CreateAppRequestBody::arrangeInfosIsSet() const
{
    return arrangeInfosIsSet_;
}

void CreateAppRequestBody::unsetarrangeInfos()
{
    arrangeInfosIsSet_ = false;
}

std::string CreateAppRequestBody::getAgencyUrn() const
{
    return agencyUrn_;
}

void CreateAppRequestBody::setAgencyUrn(const std::string& value)
{
    agencyUrn_ = value;
    agencyUrnIsSet_ = true;
}

bool CreateAppRequestBody::agencyUrnIsSet() const
{
    return agencyUrnIsSet_;
}

void CreateAppRequestBody::unsetagencyUrn()
{
    agencyUrnIsSet_ = false;
}

std::string CreateAppRequestBody::getSlaveResourceType() const
{
    return slaveResourceType_;
}

void CreateAppRequestBody::setSlaveResourceType(const std::string& value)
{
    slaveResourceType_ = value;
    slaveResourceTypeIsSet_ = true;
}

bool CreateAppRequestBody::slaveResourceTypeIsSet() const
{
    return slaveResourceTypeIsSet_;
}

void CreateAppRequestBody::unsetslaveResourceType()
{
    slaveResourceTypeIsSet_ = false;
}

int32_t CreateAppRequestBody::getTimeout() const
{
    return timeout_;
}

void CreateAppRequestBody::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool CreateAppRequestBody::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void CreateAppRequestBody::unsettimeout()
{
    timeoutIsSet_ = false;
}

}
}
}
}
}


