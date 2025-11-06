

#include "huaweicloud/codeartsrepo/v3/model/ShowBranchesByTwoRepositoryIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowBranchesByTwoRepositoryIdRequest::ShowBranchesByTwoRepositoryIdRequest()
{
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
}

ShowBranchesByTwoRepositoryIdRequest::~ShowBranchesByTwoRepositoryIdRequest() = default;

void ShowBranchesByTwoRepositoryIdRequest::validate()
{
}

web::json::value ShowBranchesByTwoRepositoryIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowBranchesByTwoRepositoryIdRequest::fromJson(const web::json::value& val)
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


std::string ShowBranchesByTwoRepositoryIdRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowBranchesByTwoRepositoryIdRequest::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowBranchesByTwoRepositoryIdRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowBranchesByTwoRepositoryIdRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


