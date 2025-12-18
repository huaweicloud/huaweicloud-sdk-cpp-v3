

#include "huaweicloud/meeting/v1/model/OrgGroupDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OrgGroupDTO::OrgGroupDTO()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
}

OrgGroupDTO::~OrgGroupDTO() = default;

void OrgGroupDTO::validate()
{
}

web::json::value OrgGroupDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("groupId")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("groupName")] = ModelBase::toJson(groupName_);
    }

    return val;
}
bool OrgGroupDTO::fromJson(const web::json::value& val)
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
    return ok;
}


std::string OrgGroupDTO::getGroupId() const
{
    return groupId_;
}

void OrgGroupDTO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool OrgGroupDTO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void OrgGroupDTO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string OrgGroupDTO::getGroupName() const
{
    return groupName_;
}

void OrgGroupDTO::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool OrgGroupDTO::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void OrgGroupDTO::unsetgroupName()
{
    groupNameIsSet_ = false;
}

}
}
}
}
}


