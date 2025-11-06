

#include "huaweicloud/codeartsrepo/v3/model/ShowBranchesByRepositoryIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowBranchesByRepositoryIdRequest::ShowBranchesByRepositoryIdRequest()
{
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
}

ShowBranchesByRepositoryIdRequest::~ShowBranchesByRepositoryIdRequest() = default;

void ShowBranchesByRepositoryIdRequest::validate()
{
}

web::json::value ShowBranchesByRepositoryIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowBranchesByRepositoryIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    return ok;
}


std::string ShowBranchesByRepositoryIdRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowBranchesByRepositoryIdRequest::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowBranchesByRepositoryIdRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowBranchesByRepositoryIdRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


