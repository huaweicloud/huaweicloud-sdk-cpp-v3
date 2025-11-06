

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupReviewSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupReviewSettingsRequest::ShowGroupReviewSettingsRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ShowGroupReviewSettingsRequest::~ShowGroupReviewSettingsRequest() = default;

void ShowGroupReviewSettingsRequest::validate()
{
}

web::json::value ShowGroupReviewSettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ShowGroupReviewSettingsRequest::fromJson(const web::json::value& val)
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


int32_t ShowGroupReviewSettingsRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupReviewSettingsRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupReviewSettingsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupReviewSettingsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


