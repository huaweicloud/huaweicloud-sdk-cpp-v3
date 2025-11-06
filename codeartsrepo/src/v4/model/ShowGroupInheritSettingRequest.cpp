

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupInheritSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupInheritSettingRequest::ShowGroupInheritSettingRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ShowGroupInheritSettingRequest::~ShowGroupInheritSettingRequest() = default;

void ShowGroupInheritSettingRequest::validate()
{
}

web::json::value ShowGroupInheritSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ShowGroupInheritSettingRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ShowGroupInheritSettingRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupInheritSettingRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupInheritSettingRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupInheritSettingRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


