

#include "huaweicloud/codeartsrepo/v4/model/ShowCommitDiffMetadataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowCommitDiffMetadataRequest::ShowCommitDiffMetadataRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
}

ShowCommitDiffMetadataRequest::~ShowCommitDiffMetadataRequest() = default;

void ShowCommitDiffMetadataRequest::validate()
{
}

web::json::value ShowCommitDiffMetadataRequest::toJson() const
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
bool ShowCommitDiffMetadataRequest::fromJson(const web::json::value& val)
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


int32_t ShowCommitDiffMetadataRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowCommitDiffMetadataRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowCommitDiffMetadataRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowCommitDiffMetadataRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowCommitDiffMetadataRequest::getSha() const
{
    return sha_;
}

void ShowCommitDiffMetadataRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ShowCommitDiffMetadataRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ShowCommitDiffMetadataRequest::unsetsha()
{
    shaIsSet_ = false;
}

}
}
}
}
}


