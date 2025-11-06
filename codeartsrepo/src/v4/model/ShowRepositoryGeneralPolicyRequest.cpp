

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryGeneralPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryGeneralPolicyRequest::ShowRepositoryGeneralPolicyRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ShowRepositoryGeneralPolicyRequest::~ShowRepositoryGeneralPolicyRequest() = default;

void ShowRepositoryGeneralPolicyRequest::validate()
{
}

web::json::value ShowRepositoryGeneralPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowRepositoryGeneralPolicyRequest::fromJson(const web::json::value& val)
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


int32_t ShowRepositoryGeneralPolicyRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryGeneralPolicyRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryGeneralPolicyRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryGeneralPolicyRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


