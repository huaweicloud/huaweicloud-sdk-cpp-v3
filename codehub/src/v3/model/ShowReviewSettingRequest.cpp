

#include "huaweicloud/codehub/v3/model/ShowReviewSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowReviewSettingRequest::ShowReviewSettingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ShowReviewSettingRequest::~ShowReviewSettingRequest() = default;

void ShowReviewSettingRequest::validate()
{
}

web::json::value ShowReviewSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowReviewSettingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    return ok;
}


int32_t ShowReviewSettingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowReviewSettingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowReviewSettingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowReviewSettingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


