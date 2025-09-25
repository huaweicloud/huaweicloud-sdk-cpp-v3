

#include "huaweicloud/codehub/v4/model/ListCurrentUserRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListCurrentUserRepositoriesRequest::ListCurrentUserRepositoriesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ListCurrentUserRepositoriesRequest::~ListCurrentUserRepositoriesRequest() = default;

void ListCurrentUserRepositoriesRequest::validate()
{
}

web::json::value ListCurrentUserRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ListCurrentUserRepositoriesRequest::fromJson(const web::json::value& val)
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


int32_t ListCurrentUserRepositoriesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListCurrentUserRepositoriesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListCurrentUserRepositoriesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListCurrentUserRepositoriesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


