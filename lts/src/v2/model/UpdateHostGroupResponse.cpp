

#include "huaweicloud/lts/v2/model/UpdateHostGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateHostGroupResponse::UpdateHostGroupResponse()
{
    hostGroupId_ = "";
    hostGroupIdIsSet_ = false;
    hostGroupName_ = "";
    hostGroupNameIsSet_ = false;
    hostGroupType_ = "";
    hostGroupTypeIsSet_ = false;
    hostIdListIsSet_ = false;
    hostGroupTagIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    agentAccessType_ = "";
    agentAccessTypeIsSet_ = false;
    labelsIsSet_ = false;
}

UpdateHostGroupResponse::~UpdateHostGroupResponse() = default;

void UpdateHostGroupResponse::validate()
{
}

web::json::value UpdateHostGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostGroupIdIsSet_) {
        val[utility::conversions::to_string_t("host_group_id")] = ModelBase::toJson(hostGroupId_);
    }
    if(hostGroupNameIsSet_) {
        val[utility::conversions::to_string_t("host_group_name")] = ModelBase::toJson(hostGroupName_);
    }
    if(hostGroupTypeIsSet_) {
        val[utility::conversions::to_string_t("host_group_type")] = ModelBase::toJson(hostGroupType_);
    }
    if(hostIdListIsSet_) {
        val[utility::conversions::to_string_t("host_id_list")] = ModelBase::toJson(hostIdList_);
    }
    if(hostGroupTagIsSet_) {
        val[utility::conversions::to_string_t("host_group_tag")] = ModelBase::toJson(hostGroupTag_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(agentAccessTypeIsSet_) {
        val[utility::conversions::to_string_t("agent_access_type")] = ModelBase::toJson(agentAccessType_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }

    return val;
}
bool UpdateHostGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIdList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_tag"));
        if(!fieldValue.is_null())
        {
            std::vector<HostGroupTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_access_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_access_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentAccessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    return ok;
}


std::string UpdateHostGroupResponse::getHostGroupId() const
{
    return hostGroupId_;
}

void UpdateHostGroupResponse::setHostGroupId(const std::string& value)
{
    hostGroupId_ = value;
    hostGroupIdIsSet_ = true;
}

bool UpdateHostGroupResponse::hostGroupIdIsSet() const
{
    return hostGroupIdIsSet_;
}

void UpdateHostGroupResponse::unsethostGroupId()
{
    hostGroupIdIsSet_ = false;
}

std::string UpdateHostGroupResponse::getHostGroupName() const
{
    return hostGroupName_;
}

void UpdateHostGroupResponse::setHostGroupName(const std::string& value)
{
    hostGroupName_ = value;
    hostGroupNameIsSet_ = true;
}

bool UpdateHostGroupResponse::hostGroupNameIsSet() const
{
    return hostGroupNameIsSet_;
}

void UpdateHostGroupResponse::unsethostGroupName()
{
    hostGroupNameIsSet_ = false;
}

std::string UpdateHostGroupResponse::getHostGroupType() const
{
    return hostGroupType_;
}

void UpdateHostGroupResponse::setHostGroupType(const std::string& value)
{
    hostGroupType_ = value;
    hostGroupTypeIsSet_ = true;
}

bool UpdateHostGroupResponse::hostGroupTypeIsSet() const
{
    return hostGroupTypeIsSet_;
}

void UpdateHostGroupResponse::unsethostGroupType()
{
    hostGroupTypeIsSet_ = false;
}

std::vector<std::string>& UpdateHostGroupResponse::getHostIdList()
{
    return hostIdList_;
}

void UpdateHostGroupResponse::setHostIdList(const std::vector<std::string>& value)
{
    hostIdList_ = value;
    hostIdListIsSet_ = true;
}

bool UpdateHostGroupResponse::hostIdListIsSet() const
{
    return hostIdListIsSet_;
}

void UpdateHostGroupResponse::unsethostIdList()
{
    hostIdListIsSet_ = false;
}

std::vector<HostGroupTag>& UpdateHostGroupResponse::getHostGroupTag()
{
    return hostGroupTag_;
}

void UpdateHostGroupResponse::setHostGroupTag(const std::vector<HostGroupTag>& value)
{
    hostGroupTag_ = value;
    hostGroupTagIsSet_ = true;
}

bool UpdateHostGroupResponse::hostGroupTagIsSet() const
{
    return hostGroupTagIsSet_;
}

void UpdateHostGroupResponse::unsethostGroupTag()
{
    hostGroupTagIsSet_ = false;
}

int64_t UpdateHostGroupResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateHostGroupResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateHostGroupResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateHostGroupResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t UpdateHostGroupResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateHostGroupResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateHostGroupResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateHostGroupResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateHostGroupResponse::getAgentAccessType() const
{
    return agentAccessType_;
}

void UpdateHostGroupResponse::setAgentAccessType(const std::string& value)
{
    agentAccessType_ = value;
    agentAccessTypeIsSet_ = true;
}

bool UpdateHostGroupResponse::agentAccessTypeIsSet() const
{
    return agentAccessTypeIsSet_;
}

void UpdateHostGroupResponse::unsetagentAccessType()
{
    agentAccessTypeIsSet_ = false;
}

std::vector<std::string>& UpdateHostGroupResponse::getLabels()
{
    return labels_;
}

void UpdateHostGroupResponse::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool UpdateHostGroupResponse::labelsIsSet() const
{
    return labelsIsSet_;
}

void UpdateHostGroupResponse::unsetlabels()
{
    labelsIsSet_ = false;
}

}
}
}
}
}


