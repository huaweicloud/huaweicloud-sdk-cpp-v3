

#include "huaweicloud/codehub/v4/model/ListRepositoryLanguagesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryLanguagesRequest::ListRepositoryLanguagesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ListRepositoryLanguagesRequest::~ListRepositoryLanguagesRequest() = default;

void ListRepositoryLanguagesRequest::validate()
{
}

web::json::value ListRepositoryLanguagesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ListRepositoryLanguagesRequest::fromJson(const web::json::value& val)
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


int32_t ListRepositoryLanguagesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryLanguagesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryLanguagesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryLanguagesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


