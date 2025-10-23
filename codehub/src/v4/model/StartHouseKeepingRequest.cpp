

#include "huaweicloud/codehub/v4/model/StartHouseKeepingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




StartHouseKeepingRequest::StartHouseKeepingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

StartHouseKeepingRequest::~StartHouseKeepingRequest() = default;

void StartHouseKeepingRequest::validate()
{
}

web::json::value StartHouseKeepingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool StartHouseKeepingRequest::fromJson(const web::json::value& val)
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


int32_t StartHouseKeepingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void StartHouseKeepingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool StartHouseKeepingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void StartHouseKeepingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


