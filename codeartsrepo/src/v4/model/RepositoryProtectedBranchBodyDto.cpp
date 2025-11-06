

#include "huaweicloud/codeartsrepo/v4/model/RepositoryProtectedBranchBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryProtectedBranchBodyDto::RepositoryProtectedBranchBodyDto()
{
    namesIsSet_ = false;
    actionsIsSet_ = false;
}

RepositoryProtectedBranchBodyDto::~RepositoryProtectedBranchBodyDto() = default;

void RepositoryProtectedBranchBodyDto::validate()
{
}

web::json::value RepositoryProtectedBranchBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namesIsSet_) {
        val[utility::conversions::to_string_t("names")] = ModelBase::toJson(names_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool RepositoryProtectedBranchBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectedBranchProtectedActionBodyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RepositoryProtectedBranchBodyDto::getNames()
{
    return names_;
}

void RepositoryProtectedBranchBodyDto::setNames(const std::vector<std::string>& value)
{
    names_ = value;
    namesIsSet_ = true;
}

bool RepositoryProtectedBranchBodyDto::namesIsSet() const
{
    return namesIsSet_;
}

void RepositoryProtectedBranchBodyDto::unsetnames()
{
    namesIsSet_ = false;
}

std::vector<ProtectedBranchProtectedActionBodyDto>& RepositoryProtectedBranchBodyDto::getActions()
{
    return actions_;
}

void RepositoryProtectedBranchBodyDto::setActions(const std::vector<ProtectedBranchProtectedActionBodyDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool RepositoryProtectedBranchBodyDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void RepositoryProtectedBranchBodyDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


