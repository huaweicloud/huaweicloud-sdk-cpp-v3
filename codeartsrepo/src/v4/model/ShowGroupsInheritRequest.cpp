

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupsInheritRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupsInheritRequest::ShowGroupsInheritRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    settingType_ = "";
    settingTypeIsSet_ = false;
}

ShowGroupsInheritRequest::~ShowGroupsInheritRequest() = default;

void ShowGroupsInheritRequest::validate()
{
}

web::json::value ShowGroupsInheritRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(settingTypeIsSet_) {
        val[utility::conversions::to_string_t("setting_type")] = ModelBase::toJson(settingType_);
    }

    return val;
}
bool ShowGroupsInheritRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("setting_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingType(refVal);
        }
    }
    return ok;
}


int32_t ShowGroupsInheritRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupsInheritRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupsInheritRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupsInheritRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowGroupsInheritRequest::getSettingType() const
{
    return settingType_;
}

void ShowGroupsInheritRequest::setSettingType(const std::string& value)
{
    settingType_ = value;
    settingTypeIsSet_ = true;
}

bool ShowGroupsInheritRequest::settingTypeIsSet() const
{
    return settingTypeIsSet_;
}

void ShowGroupsInheritRequest::unsetsettingType()
{
    settingTypeIsSet_ = false;
}

}
}
}
}
}


