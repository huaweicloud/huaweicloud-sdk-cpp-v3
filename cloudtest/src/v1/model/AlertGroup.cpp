

#include "huaweicloud/cloudtest/v1/model/AlertGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AlertGroup::AlertGroup()
{
    dingTalkHookUrl_ = "";
    dingTalkHookUrlIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    weChatWorkHookUrl_ = "";
    weChatWorkHookUrlIsSet_ = false;
    weLinkGroupNo_ = "";
    weLinkGroupNoIsSet_ = false;
}

AlertGroup::~AlertGroup() = default;

void AlertGroup::validate()
{
}

web::json::value AlertGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dingTalkHookUrlIsSet_) {
        val[utility::conversions::to_string_t("dingTalkHookUrl")] = ModelBase::toJson(dingTalkHookUrl_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(weChatWorkHookUrlIsSet_) {
        val[utility::conversions::to_string_t("weChatWorkHookUrl")] = ModelBase::toJson(weChatWorkHookUrl_);
    }
    if(weLinkGroupNoIsSet_) {
        val[utility::conversions::to_string_t("weLinkGroupNo")] = ModelBase::toJson(weLinkGroupNo_);
    }

    return val;
}
bool AlertGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dingTalkHookUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dingTalkHookUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDingTalkHookUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weChatWorkHookUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weChatWorkHookUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeChatWorkHookUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weLinkGroupNo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weLinkGroupNo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeLinkGroupNo(refVal);
        }
    }
    return ok;
}


std::string AlertGroup::getDingTalkHookUrl() const
{
    return dingTalkHookUrl_;
}

void AlertGroup::setDingTalkHookUrl(const std::string& value)
{
    dingTalkHookUrl_ = value;
    dingTalkHookUrlIsSet_ = true;
}

bool AlertGroup::dingTalkHookUrlIsSet() const
{
    return dingTalkHookUrlIsSet_;
}

void AlertGroup::unsetdingTalkHookUrl()
{
    dingTalkHookUrlIsSet_ = false;
}

std::string AlertGroup::getGroupName() const
{
    return groupName_;
}

void AlertGroup::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool AlertGroup::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void AlertGroup::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string AlertGroup::getId() const
{
    return id_;
}

void AlertGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AlertGroup::idIsSet() const
{
    return idIsSet_;
}

void AlertGroup::unsetid()
{
    idIsSet_ = false;
}

std::string AlertGroup::getWeChatWorkHookUrl() const
{
    return weChatWorkHookUrl_;
}

void AlertGroup::setWeChatWorkHookUrl(const std::string& value)
{
    weChatWorkHookUrl_ = value;
    weChatWorkHookUrlIsSet_ = true;
}

bool AlertGroup::weChatWorkHookUrlIsSet() const
{
    return weChatWorkHookUrlIsSet_;
}

void AlertGroup::unsetweChatWorkHookUrl()
{
    weChatWorkHookUrlIsSet_ = false;
}

std::string AlertGroup::getWeLinkGroupNo() const
{
    return weLinkGroupNo_;
}

void AlertGroup::setWeLinkGroupNo(const std::string& value)
{
    weLinkGroupNo_ = value;
    weLinkGroupNoIsSet_ = true;
}

bool AlertGroup::weLinkGroupNoIsSet() const
{
    return weLinkGroupNoIsSet_;
}

void AlertGroup::unsetweLinkGroupNo()
{
    weLinkGroupNoIsSet_ = false;
}

}
}
}
}
}


