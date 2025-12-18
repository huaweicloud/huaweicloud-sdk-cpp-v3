

#include "huaweicloud/meeting/v1/model/QueryCorpGroupDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryCorpGroupDTO::QueryCorpGroupDTO()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    groupType_ = 0;
    groupTypeIsSet_ = false;
    remarks_ = "";
    remarksIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

QueryCorpGroupDTO::~QueryCorpGroupDTO() = default;

void QueryCorpGroupDTO::validate()
{
}

web::json::value QueryCorpGroupDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("groupId")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("groupName")] = ModelBase::toJson(groupName_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("groupType")] = ModelBase::toJson(groupType_);
    }
    if(remarksIsSet_) {
        val[utility::conversions::to_string_t("remarks")] = ModelBase::toJson(remarks_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("regionId")] = ModelBase::toJson(regionId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool QueryCorpGroupDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("groupId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remarks"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemarks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regionId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regionId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string QueryCorpGroupDTO::getGroupId() const
{
    return groupId_;
}

void QueryCorpGroupDTO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool QueryCorpGroupDTO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void QueryCorpGroupDTO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string QueryCorpGroupDTO::getGroupName() const
{
    return groupName_;
}

void QueryCorpGroupDTO::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool QueryCorpGroupDTO::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void QueryCorpGroupDTO::unsetgroupName()
{
    groupNameIsSet_ = false;
}

int32_t QueryCorpGroupDTO::getGroupType() const
{
    return groupType_;
}

void QueryCorpGroupDTO::setGroupType(int32_t value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool QueryCorpGroupDTO::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void QueryCorpGroupDTO::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::string QueryCorpGroupDTO::getRemarks() const
{
    return remarks_;
}

void QueryCorpGroupDTO::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool QueryCorpGroupDTO::remarksIsSet() const
{
    return remarksIsSet_;
}

void QueryCorpGroupDTO::unsetremarks()
{
    remarksIsSet_ = false;
}

std::string QueryCorpGroupDTO::getRegionId() const
{
    return regionId_;
}

void QueryCorpGroupDTO::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool QueryCorpGroupDTO::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void QueryCorpGroupDTO::unsetregionId()
{
    regionIdIsSet_ = false;
}

int32_t QueryCorpGroupDTO::getStatus() const
{
    return status_;
}

void QueryCorpGroupDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryCorpGroupDTO::statusIsSet() const
{
    return statusIsSet_;
}

void QueryCorpGroupDTO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


