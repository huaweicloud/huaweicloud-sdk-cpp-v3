

#include "huaweicloud/codehub/v4/model/ShowProtectedTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProtectedTagRequest::ShowProtectedTagRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    tagName_ = "";
    tagNameIsSet_ = false;
}

ShowProtectedTagRequest::~ShowProtectedTagRequest() = default;

void ShowProtectedTagRequest::validate()
{
}

web::json::value ShowProtectedTagRequest::toJson() const
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
bool ShowProtectedTagRequest::fromJson(const web::json::value& val)
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


int32_t ShowProtectedTagRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowProtectedTagRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowProtectedTagRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowProtectedTagRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowProtectedTagRequest::getTagName() const
{
    return tagName_;
}

void ShowProtectedTagRequest::setTagName(const std::string& value)
{
    tagName_ = value;
    tagNameIsSet_ = true;
}

bool ShowProtectedTagRequest::tagNameIsSet() const
{
    return tagNameIsSet_;
}

void ShowProtectedTagRequest::unsettagName()
{
    tagNameIsSet_ = false;
}

}
}
}
}
}


