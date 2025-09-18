

#include "huaweicloud/codeartsartifact/v2/model/ShowRepositoryInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowRepositoryInfoRequest::ShowRepositoryInfoRequest()
{
    repoId_ = "";
    repoIdIsSet_ = false;
}

ShowRepositoryInfoRequest::~ShowRepositoryInfoRequest() = default;

void ShowRepositoryInfoRequest::validate()
{
}

web::json::value ShowRepositoryInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }

    return val;
}
bool ShowRepositoryInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    return ok;
}


std::string ShowRepositoryInfoRequest::getRepoId() const
{
    return repoId_;
}

void ShowRepositoryInfoRequest::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ShowRepositoryInfoRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ShowRepositoryInfoRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

}
}
}
}
}


