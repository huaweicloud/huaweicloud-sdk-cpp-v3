

#include "huaweicloud/codeartsrepo/v4/model/BatchUpdateProtectedTagsBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchUpdateProtectedTagsBodyDto::BatchUpdateProtectedTagsBodyDto()
{
    namesIsSet_ = false;
    actionsIsSet_ = false;
}

BatchUpdateProtectedTagsBodyDto::~BatchUpdateProtectedTagsBodyDto() = default;

void BatchUpdateProtectedTagsBodyDto::validate()
{
}

web::json::value BatchUpdateProtectedTagsBodyDto::toJson() const
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
bool BatchUpdateProtectedTagsBodyDto::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchUpdateProtectedTagsBodyDto::getNames()
{
    return names_;
}

void BatchUpdateProtectedTagsBodyDto::setNames(const std::vector<std::string>& value)
{
    names_ = value;
    namesIsSet_ = true;
}

bool BatchUpdateProtectedTagsBodyDto::namesIsSet() const
{
    return namesIsSet_;
}

void BatchUpdateProtectedTagsBodyDto::unsetnames()
{
    namesIsSet_ = false;
}

std::vector<RepositoryProtectedTagActionBodyDto>& BatchUpdateProtectedTagsBodyDto::getActions()
{
    return actions_;
}

void BatchUpdateProtectedTagsBodyDto::setActions(const std::vector<RepositoryProtectedTagActionBodyDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool BatchUpdateProtectedTagsBodyDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void BatchUpdateProtectedTagsBodyDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


