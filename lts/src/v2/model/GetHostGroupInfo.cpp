

#include "huaweicloud/lts/v2/model/GetHostGroupInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




GetHostGroupInfo::GetHostGroupInfo()
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
}

GetHostGroupInfo::~GetHostGroupInfo() = default;

void GetHostGroupInfo::validate()
{
}

web::json::value GetHostGroupInfo::toJson() const
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

    return val;
}

bool GetHostGroupInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GetHostGroupInfo::getHostGroupId() const
{
    return hostGroupId_;
}

void GetHostGroupInfo::setHostGroupId(const std::string& value)
{
    hostGroupId_ = value;
    hostGroupIdIsSet_ = true;
}

bool GetHostGroupInfo::hostGroupIdIsSet() const
{
    return hostGroupIdIsSet_;
}

void GetHostGroupInfo::unsethostGroupId()
{
    hostGroupIdIsSet_ = false;
}

std::string GetHostGroupInfo::getHostGroupName() const
{
    return hostGroupName_;
}

void GetHostGroupInfo::setHostGroupName(const std::string& value)
{
    hostGroupName_ = value;
    hostGroupNameIsSet_ = true;
}

bool GetHostGroupInfo::hostGroupNameIsSet() const
{
    return hostGroupNameIsSet_;
}

void GetHostGroupInfo::unsethostGroupName()
{
    hostGroupNameIsSet_ = false;
}

std::string GetHostGroupInfo::getHostGroupType() const
{
    return hostGroupType_;
}

void GetHostGroupInfo::setHostGroupType(const std::string& value)
{
    hostGroupType_ = value;
    hostGroupTypeIsSet_ = true;
}

bool GetHostGroupInfo::hostGroupTypeIsSet() const
{
    return hostGroupTypeIsSet_;
}

void GetHostGroupInfo::unsethostGroupType()
{
    hostGroupTypeIsSet_ = false;
}

std::vector<std::string>& GetHostGroupInfo::getHostIdList()
{
    return hostIdList_;
}

void GetHostGroupInfo::setHostIdList(const std::vector<std::string>& value)
{
    hostIdList_ = value;
    hostIdListIsSet_ = true;
}

bool GetHostGroupInfo::hostIdListIsSet() const
{
    return hostIdListIsSet_;
}

void GetHostGroupInfo::unsethostIdList()
{
    hostIdListIsSet_ = false;
}

std::vector<HostGroupTag>& GetHostGroupInfo::getHostGroupTag()
{
    return hostGroupTag_;
}

void GetHostGroupInfo::setHostGroupTag(const std::vector<HostGroupTag>& value)
{
    hostGroupTag_ = value;
    hostGroupTagIsSet_ = true;
}

bool GetHostGroupInfo::hostGroupTagIsSet() const
{
    return hostGroupTagIsSet_;
}

void GetHostGroupInfo::unsethostGroupTag()
{
    hostGroupTagIsSet_ = false;
}

int64_t GetHostGroupInfo::getCreateTime() const
{
    return createTime_;
}

void GetHostGroupInfo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool GetHostGroupInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void GetHostGroupInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t GetHostGroupInfo::getUpdateTime() const
{
    return updateTime_;
}

void GetHostGroupInfo::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool GetHostGroupInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void GetHostGroupInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


