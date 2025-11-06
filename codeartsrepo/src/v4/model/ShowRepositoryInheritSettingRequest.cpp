

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryInheritSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryInheritSettingRequest::ShowRepositoryInheritSettingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ShowRepositoryInheritSettingRequest::~ShowRepositoryInheritSettingRequest() = default;

void ShowRepositoryInheritSettingRequest::validate()
{
}

web::json::value ShowRepositoryInheritSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowRepositoryInheritSettingRequest::fromJson(const web::json::value& val)
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


int32_t ShowRepositoryInheritSettingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryInheritSettingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryInheritSettingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryInheritSettingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


