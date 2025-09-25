

#include "huaweicloud/codehub/v4/model/UpdateProtectedTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateProtectedTagRequest::UpdateProtectedTagRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    tagName_ = "";
    tagNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProtectedTagRequest::~UpdateProtectedTagRequest() = default;

void UpdateProtectedTagRequest::validate()
{
}

web::json::value UpdateProtectedTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(tagNameIsSet_) {
        val[utility::conversions::to_string_t("tag_name")] = ModelBase::toJson(tagName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProtectedTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryProtectedTagActionBodyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateProtectedTagRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateProtectedTagRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateProtectedTagRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateProtectedTagRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string UpdateProtectedTagRequest::getTagName() const
{
    return tagName_;
}

void UpdateProtectedTagRequest::setTagName(const std::string& value)
{
    tagName_ = value;
    tagNameIsSet_ = true;
}

bool UpdateProtectedTagRequest::tagNameIsSet() const
{
    return tagNameIsSet_;
}

void UpdateProtectedTagRequest::unsettagName()
{
    tagNameIsSet_ = false;
}

std::vector<RepositoryProtectedTagActionBodyDto>& UpdateProtectedTagRequest::getBody()
{
    return body_;
}

void UpdateProtectedTagRequest::setBody(const std::vector<RepositoryProtectedTagActionBodyDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProtectedTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProtectedTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


