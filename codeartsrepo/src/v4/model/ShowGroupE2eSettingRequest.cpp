

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupE2eSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupE2eSettingRequest::ShowGroupE2eSettingRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ShowGroupE2eSettingRequest::~ShowGroupE2eSettingRequest() = default;

void ShowGroupE2eSettingRequest::validate()
{
}

web::json::value ShowGroupE2eSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ShowGroupE2eSettingRequest::fromJson(const web::json::value& val)
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


int32_t ShowGroupE2eSettingRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupE2eSettingRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupE2eSettingRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupE2eSettingRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


