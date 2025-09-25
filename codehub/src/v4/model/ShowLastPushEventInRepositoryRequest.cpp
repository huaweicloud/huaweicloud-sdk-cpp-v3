

#include "huaweicloud/codehub/v4/model/ShowLastPushEventInRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowLastPushEventInRepositoryRequest::ShowLastPushEventInRepositoryRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ShowLastPushEventInRepositoryRequest::~ShowLastPushEventInRepositoryRequest() = default;

void ShowLastPushEventInRepositoryRequest::validate()
{
}

web::json::value ShowLastPushEventInRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowLastPushEventInRepositoryRequest::fromJson(const web::json::value& val)
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


int32_t ShowLastPushEventInRepositoryRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowLastPushEventInRepositoryRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowLastPushEventInRepositoryRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowLastPushEventInRepositoryRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


