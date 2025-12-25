

#include "huaweicloud/codeartsartifact/v2/model/ListAllRepositoriesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListAllRepositoriesResult::ListAllRepositoriesResult()
{
    total_ = 0;
    totalIsSet_ = false;
    repositoriesIsSet_ = false;
}

ListAllRepositoriesResult::~ListAllRepositoriesResult() = default;

void ListAllRepositoriesResult::validate()
{
}

web::json::value ListAllRepositoriesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(repositoriesIsSet_) {
        val[utility::conversions::to_string_t("repositories")] = ModelBase::toJson(repositories_);
    }

    return val;
}
bool ListAllRepositoriesResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositories"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryBasicDO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositories(refVal);
        }
    }
    return ok;
}


int32_t ListAllRepositoriesResult::getTotal() const
{
    return total_;
}

void ListAllRepositoriesResult::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAllRepositoriesResult::totalIsSet() const
{
    return totalIsSet_;
}

void ListAllRepositoriesResult::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RepositoryBasicDO>& ListAllRepositoriesResult::getRepositories()
{
    return repositories_;
}

void ListAllRepositoriesResult::setRepositories(const std::vector<RepositoryBasicDO>& value)
{
    repositories_ = value;
    repositoriesIsSet_ = true;
}

bool ListAllRepositoriesResult::repositoriesIsSet() const
{
    return repositoriesIsSet_;
}

void ListAllRepositoriesResult::unsetrepositories()
{
    repositoriesIsSet_ = false;
}

}
}
}
}
}


