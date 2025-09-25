

#include "huaweicloud/codehub/v4/model/ShowReadmeFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowReadmeFileRequest::ShowReadmeFileRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ShowReadmeFileRequest::~ShowReadmeFileRequest() = default;

void ShowReadmeFileRequest::validate()
{
}

web::json::value ShowReadmeFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowReadmeFileRequest::fromJson(const web::json::value& val)
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


int32_t ShowReadmeFileRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowReadmeFileRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowReadmeFileRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowReadmeFileRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


