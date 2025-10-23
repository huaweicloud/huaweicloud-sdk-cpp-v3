

#include "huaweicloud/codehub/v4/model/ShowCommitCommentsByLineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowCommitCommentsByLineRequest::ShowCommitCommentsByLineRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
}

ShowCommitCommentsByLineRequest::~ShowCommitCommentsByLineRequest() = default;

void ShowCommitCommentsByLineRequest::validate()
{
}

web::json::value ShowCommitCommentsByLineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }

    return val;
}
bool ShowCommitCommentsByLineRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    return ok;
}


int32_t ShowCommitCommentsByLineRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowCommitCommentsByLineRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowCommitCommentsByLineRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowCommitCommentsByLineRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowCommitCommentsByLineRequest::getSha() const
{
    return sha_;
}

void ShowCommitCommentsByLineRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ShowCommitCommentsByLineRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ShowCommitCommentsByLineRequest::unsetsha()
{
    shaIsSet_ = false;
}

}
}
}
}
}


