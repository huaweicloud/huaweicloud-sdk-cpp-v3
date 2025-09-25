

#include "huaweicloud/codehub/v4/model/DeleteRepositoryLabelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteRepositoryLabelRequest::DeleteRepositoryLabelRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

DeleteRepositoryLabelRequest::~DeleteRepositoryLabelRequest() = default;

void DeleteRepositoryLabelRequest::validate()
{
}

web::json::value DeleteRepositoryLabelRequest::toJson() const
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
bool DeleteRepositoryLabelRequest::fromJson(const web::json::value& val)
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


int32_t DeleteRepositoryLabelRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteRepositoryLabelRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteRepositoryLabelRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteRepositoryLabelRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string DeleteRepositoryLabelRequest::getName() const
{
    return name_;
}

void DeleteRepositoryLabelRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteRepositoryLabelRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteRepositoryLabelRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


