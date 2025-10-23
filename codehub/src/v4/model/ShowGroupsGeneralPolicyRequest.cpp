

#include "huaweicloud/codehub/v4/model/ShowGroupsGeneralPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowGroupsGeneralPolicyRequest::ShowGroupsGeneralPolicyRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ShowGroupsGeneralPolicyRequest::~ShowGroupsGeneralPolicyRequest() = default;

void ShowGroupsGeneralPolicyRequest::validate()
{
}

web::json::value ShowGroupsGeneralPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ShowGroupsGeneralPolicyRequest::fromJson(const web::json::value& val)
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


int32_t ShowGroupsGeneralPolicyRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupsGeneralPolicyRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupsGeneralPolicyRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupsGeneralPolicyRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


