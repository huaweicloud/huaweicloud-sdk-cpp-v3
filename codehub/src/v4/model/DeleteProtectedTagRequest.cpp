

#include "huaweicloud/codehub/v4/model/DeleteProtectedTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteProtectedTagRequest::DeleteProtectedTagRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    tagName_ = "";
    tagNameIsSet_ = false;
}

DeleteProtectedTagRequest::~DeleteProtectedTagRequest() = default;

void DeleteProtectedTagRequest::validate()
{
}

web::json::value DeleteProtectedTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(tagNameIsSet_) {
        val[utility::conversions::to_string_t("tag_name")] = ModelBase::toJson(tagName_);
    }

    return val;
}
bool DeleteProtectedTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tag_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagName(refVal);
        }
    }
    return ok;
}


int32_t DeleteProtectedTagRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteProtectedTagRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteProtectedTagRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteProtectedTagRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string DeleteProtectedTagRequest::getTagName() const
{
    return tagName_;
}

void DeleteProtectedTagRequest::setTagName(const std::string& value)
{
    tagName_ = value;
    tagNameIsSet_ = true;
}

bool DeleteProtectedTagRequest::tagNameIsSet() const
{
    return tagNameIsSet_;
}

void DeleteProtectedTagRequest::unsettagName()
{
    tagNameIsSet_ = false;
}

}
}
}
}
}


