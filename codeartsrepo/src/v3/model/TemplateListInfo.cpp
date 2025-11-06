

#include "huaweicloud/codeartsrepo/v3/model/TemplateListInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




TemplateListInfo::TemplateListInfo()
{
    reposIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

TemplateListInfo::~TemplateListInfo() = default;

void TemplateListInfo::validate()
{
}

web::json::value TemplateListInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reposIsSet_) {
        val[utility::conversions::to_string_t("repos")] = ModelBase::toJson(repos_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool TemplateListInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repos"));
        if(!fieldValue.is_null())
        {
            std::vector<DevstarRepoInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<DevstarRepoInfo>& TemplateListInfo::getRepos()
{
    return repos_;
}

void TemplateListInfo::setRepos(const std::vector<DevstarRepoInfo>& value)
{
    repos_ = value;
    reposIsSet_ = true;
}

bool TemplateListInfo::reposIsSet() const
{
    return reposIsSet_;
}

void TemplateListInfo::unsetrepos()
{
    reposIsSet_ = false;
}

int32_t TemplateListInfo::getTotalCount() const
{
    return totalCount_;
}

void TemplateListInfo::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool TemplateListInfo::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void TemplateListInfo::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


