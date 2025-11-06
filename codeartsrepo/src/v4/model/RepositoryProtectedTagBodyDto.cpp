

#include "huaweicloud/codeartsrepo/v4/model/RepositoryProtectedTagBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryProtectedTagBodyDto::RepositoryProtectedTagBodyDto()
{
    namesIsSet_ = false;
    actionsIsSet_ = false;
}

RepositoryProtectedTagBodyDto::~RepositoryProtectedTagBodyDto() = default;

void RepositoryProtectedTagBodyDto::validate()
{
}

web::json::value RepositoryProtectedTagBodyDto::toJson() const
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
bool RepositoryProtectedTagBodyDto::fromJson(const web::json::value& val)
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
            std::vector<RepositoryProtectedTagActionBodyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RepositoryProtectedTagBodyDto::getNames()
{
    return names_;
}

void RepositoryProtectedTagBodyDto::setNames(const std::vector<std::string>& value)
{
    names_ = value;
    namesIsSet_ = true;
}

bool RepositoryProtectedTagBodyDto::namesIsSet() const
{
    return namesIsSet_;
}

void RepositoryProtectedTagBodyDto::unsetnames()
{
    namesIsSet_ = false;
}

std::vector<RepositoryProtectedTagActionBodyDto>& RepositoryProtectedTagBodyDto::getActions()
{
    return actions_;
}

void RepositoryProtectedTagBodyDto::setActions(const std::vector<RepositoryProtectedTagActionBodyDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool RepositoryProtectedTagBodyDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void RepositoryProtectedTagBodyDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


