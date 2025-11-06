

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupGeneralPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupGeneralPolicyRequest::ShowGroupGeneralPolicyRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ShowGroupGeneralPolicyRequest::~ShowGroupGeneralPolicyRequest() = default;

void ShowGroupGeneralPolicyRequest::validate()
{
}

web::json::value ShowGroupGeneralPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ShowGroupGeneralPolicyRequest::fromJson(const web::json::value& val)
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


int32_t ShowGroupGeneralPolicyRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupGeneralPolicyRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupGeneralPolicyRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupGeneralPolicyRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


