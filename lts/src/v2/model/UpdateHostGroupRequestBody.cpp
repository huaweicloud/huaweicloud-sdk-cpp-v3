

#include "huaweicloud/lts/v2/model/UpdateHostGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateHostGroupRequestBody::UpdateHostGroupRequestBody()
{
    hostGroupId_ = "";
    hostGroupIdIsSet_ = false;
    hostGroupName_ = "";
    hostGroupNameIsSet_ = false;
    hostIdListIsSet_ = false;
    hostGroupTagIsSet_ = false;
    agentAccessType_ = "";
    agentAccessTypeIsSet_ = false;
    labelsIsSet_ = false;
}

UpdateHostGroupRequestBody::~UpdateHostGroupRequestBody() = default;

void UpdateHostGroupRequestBody::validate()
{
}

web::json::value UpdateHostGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostGroupIdIsSet_) {
        val[utility::conversions::to_string_t("host_group_id")] = ModelBase::toJson(hostGroupId_);
    }
    if(hostGroupNameIsSet_) {
        val[utility::conversions::to_string_t("host_group_name")] = ModelBase::toJson(hostGroupName_);
    }
    if(hostIdListIsSet_) {
        val[utility::conversions::to_string_t("host_id_list")] = ModelBase::toJson(hostIdList_);
    }
    if(hostGroupTagIsSet_) {
        val[utility::conversions::to_string_t("host_group_tag")] = ModelBase::toJson(hostGroupTag_);
    }
    if(agentAccessTypeIsSet_) {
        val[utility::conversions::to_string_t("agent_access_type")] = ModelBase::toJson(agentAccessType_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }

    return val;
}
bool UpdateHostGroupRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateHostGroupRequestBody::getHostGroupId() const
{
    return hostGroupId_;
}

void UpdateHostGroupRequestBody::setHostGroupId(const std::string& value)
{
    hostGroupId_ = value;
    hostGroupIdIsSet_ = true;
}

bool UpdateHostGroupRequestBody::hostGroupIdIsSet() const
{
    return hostGroupIdIsSet_;
}

void UpdateHostGroupRequestBody::unsethostGroupId()
{
    hostGroupIdIsSet_ = false;
}

std::string UpdateHostGroupRequestBody::getHostGroupName() const
{
    return hostGroupName_;
}

void UpdateHostGroupRequestBody::setHostGroupName(const std::string& value)
{
    hostGroupName_ = value;
    hostGroupNameIsSet_ = true;
}

bool UpdateHostGroupRequestBody::hostGroupNameIsSet() const
{
    return hostGroupNameIsSet_;
}

void UpdateHostGroupRequestBody::unsethostGroupName()
{
    hostGroupNameIsSet_ = false;
}

std::vector<std::string>& UpdateHostGroupRequestBody::getHostIdList()
{
    return hostIdList_;
}

void UpdateHostGroupRequestBody::setHostIdList(const std::vector<std::string>& value)
{
    hostIdList_ = value;
    hostIdListIsSet_ = true;
}

bool UpdateHostGroupRequestBody::hostIdListIsSet() const
{
    return hostIdListIsSet_;
}

void UpdateHostGroupRequestBody::unsethostIdList()
{
    hostIdListIsSet_ = false;
}

std::vector<HostGroupTag>& UpdateHostGroupRequestBody::getHostGroupTag()
{
    return hostGroupTag_;
}

void UpdateHostGroupRequestBody::setHostGroupTag(const std::vector<HostGroupTag>& value)
{
    hostGroupTag_ = value;
    hostGroupTagIsSet_ = true;
}

bool UpdateHostGroupRequestBody::hostGroupTagIsSet() const
{
    return hostGroupTagIsSet_;
}

void UpdateHostGroupRequestBody::unsethostGroupTag()
{
    hostGroupTagIsSet_ = false;
}

std::string UpdateHostGroupRequestBody::getAgentAccessType() const
{
    return agentAccessType_;
}

void UpdateHostGroupRequestBody::setAgentAccessType(const std::string& value)
{
    agentAccessType_ = value;
    agentAccessTypeIsSet_ = true;
}

bool UpdateHostGroupRequestBody::agentAccessTypeIsSet() const
{
    return agentAccessTypeIsSet_;
}

void UpdateHostGroupRequestBody::unsetagentAccessType()
{
    agentAccessTypeIsSet_ = false;
}

std::vector<std::string>& UpdateHostGroupRequestBody::getLabels()
{
    return labels_;
}

void UpdateHostGroupRequestBody::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool UpdateHostGroupRequestBody::labelsIsSet() const
{
    return labelsIsSet_;
}

void UpdateHostGroupRequestBody::unsetlabels()
{
    labelsIsSet_ = false;
}

}
}
}
}
}


