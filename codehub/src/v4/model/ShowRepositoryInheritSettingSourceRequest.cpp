

#include "huaweicloud/codehub/v4/model/ShowRepositoryInheritSettingSourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowRepositoryInheritSettingSourceRequest::ShowRepositoryInheritSettingSourceRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ShowRepositoryInheritSettingSourceRequest::~ShowRepositoryInheritSettingSourceRequest() = default;

void ShowRepositoryInheritSettingSourceRequest::validate()
{
}

web::json::value ShowRepositoryInheritSettingSourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ShowRepositoryInheritSettingSourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


int32_t ShowRepositoryInheritSettingSourceRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryInheritSettingSourceRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryInheritSettingSourceRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryInheritSettingSourceRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowRepositoryInheritSettingSourceRequest::getName() const
{
    return name_;
}

void ShowRepositoryInheritSettingSourceRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowRepositoryInheritSettingSourceRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowRepositoryInheritSettingSourceRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


