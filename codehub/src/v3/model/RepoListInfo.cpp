

#include "huaweicloud/codehub/v3/model/RepoListInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepoListInfo::RepoListInfo()
{
    repositorysIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

RepoListInfo::~RepoListInfo() = default;

void RepoListInfo::validate()
{
}

web::json::value RepoListInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositorysIsSet_) {
        val[utility::conversions::to_string_t("repositorys")] = ModelBase::toJson(repositorys_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool RepoListInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repositorys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositorys"));
        if(!fieldValue.is_null())
        {
            std::vector<RepoInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositorys(refVal);
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


std::vector<RepoInfo>& RepoListInfo::getRepositorys()
{
    return repositorys_;
}

void RepoListInfo::setRepositorys(const std::vector<RepoInfo>& value)
{
    repositorys_ = value;
    repositorysIsSet_ = true;
}

bool RepoListInfo::repositorysIsSet() const
{
    return repositorysIsSet_;
}

void RepoListInfo::unsetrepositorys()
{
    repositorysIsSet_ = false;
}

int32_t RepoListInfo::getTotal() const
{
    return total_;
}

void RepoListInfo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool RepoListInfo::totalIsSet() const
{
    return totalIsSet_;
}

void RepoListInfo::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


