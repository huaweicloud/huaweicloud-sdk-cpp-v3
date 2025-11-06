

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryRequest::ShowRepositoryRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ShowRepositoryRequest::~ShowRepositoryRequest() = default;

void ShowRepositoryRequest::validate()
{
}

web::json::value ShowRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowRepositoryRequest::fromJson(const web::json::value& val)
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


int32_t ShowRepositoryRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


