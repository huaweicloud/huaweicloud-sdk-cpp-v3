

#include "huaweicloud/codeartsrepo/v3/model/ShowDiffCommitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowDiffCommitRequest::ShowDiffCommitRequest()
{
    repoId_ = 0;
    repoIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
}

ShowDiffCommitRequest::~ShowDiffCommitRequest() = default;

void ShowDiffCommitRequest::validate()
{
}

web::json::value ShowDiffCommitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }

    return val;
}
bool ShowDiffCommitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
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


int32_t ShowDiffCommitRequest::getRepoId() const
{
    return repoId_;
}

void ShowDiffCommitRequest::setRepoId(int32_t value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ShowDiffCommitRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ShowDiffCommitRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ShowDiffCommitRequest::getSha() const
{
    return sha_;
}

void ShowDiffCommitRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ShowDiffCommitRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ShowDiffCommitRequest::unsetsha()
{
    shaIsSet_ = false;
}

}
}
}
}
}


