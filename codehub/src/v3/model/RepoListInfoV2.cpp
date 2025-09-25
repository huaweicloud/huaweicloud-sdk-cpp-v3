

#include "huaweicloud/codehub/v3/model/RepoListInfoV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepoListInfoV2::RepoListInfoV2()
{
    repositoriesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

RepoListInfoV2::~RepoListInfoV2() = default;

void RepoListInfoV2::validate()
{
}

web::json::value RepoListInfoV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoriesIsSet_) {
        val[utility::conversions::to_string_t("repositories")] = ModelBase::toJson(repositories_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool RepoListInfoV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repositories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositories"));
        if(!fieldValue.is_null())
        {
            std::vector<RepoInfoV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<RepoInfoV2>& RepoListInfoV2::getRepositories()
{
    return repositories_;
}

void RepoListInfoV2::setRepositories(const std::vector<RepoInfoV2>& value)
{
    repositories_ = value;
    repositoriesIsSet_ = true;
}

bool RepoListInfoV2::repositoriesIsSet() const
{
    return repositoriesIsSet_;
}

void RepoListInfoV2::unsetrepositories()
{
    repositoriesIsSet_ = false;
}

int32_t RepoListInfoV2::getTotal() const
{
    return total_;
}

void RepoListInfoV2::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool RepoListInfoV2::totalIsSet() const
{
    return totalIsSet_;
}

void RepoListInfoV2::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


