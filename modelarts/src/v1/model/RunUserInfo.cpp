

#include "huaweicloud/modelarts/v1/model/RunUserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RunUserInfo::RunUserInfo()
{
    uid_ = 0;
    uidIsSet_ = false;
    gid_ = 0;
    gidIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
}

RunUserInfo::~RunUserInfo() = default;

void RunUserInfo::validate()
{
}

web::json::value RunUserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(gidIsSet_) {
        val[utility::conversions::to_string_t("gid")] = ModelBase::toJson(gid_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }

    return val;
}
bool RunUserInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    return ok;
}


int32_t RunUserInfo::getUid() const
{
    return uid_;
}

void RunUserInfo::setUid(int32_t value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool RunUserInfo::uidIsSet() const
{
    return uidIsSet_;
}

void RunUserInfo::unsetuid()
{
    uidIsSet_ = false;
}

int32_t RunUserInfo::getGid() const
{
    return gid_;
}

void RunUserInfo::setGid(int32_t value)
{
    gid_ = value;
    gidIsSet_ = true;
}

bool RunUserInfo::gidIsSet() const
{
    return gidIsSet_;
}

void RunUserInfo::unsetgid()
{
    gidIsSet_ = false;
}

std::string RunUserInfo::getUserName() const
{
    return userName_;
}

void RunUserInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RunUserInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void RunUserInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string RunUserInfo::getGroupName() const
{
    return groupName_;
}

void RunUserInfo::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool RunUserInfo::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void RunUserInfo::unsetgroupName()
{
    groupNameIsSet_ = false;
}

}
}
}
}
}


