

#include "huaweicloud/codehub/v4/model/BatchUpdateProtectedBranchesBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchUpdateProtectedBranchesBodyDto::BatchUpdateProtectedBranchesBodyDto()
{
    namesIsSet_ = false;
    actionsIsSet_ = false;
}

BatchUpdateProtectedBranchesBodyDto::~BatchUpdateProtectedBranchesBodyDto() = default;

void BatchUpdateProtectedBranchesBodyDto::validate()
{
}

web::json::value BatchUpdateProtectedBranchesBodyDto::toJson() const
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
bool BatchUpdateProtectedBranchesBodyDto::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchUpdateProtectedBranchesBodyDto::getNames()
{
    return names_;
}

void BatchUpdateProtectedBranchesBodyDto::setNames(const std::vector<std::string>& value)
{
    names_ = value;
    namesIsSet_ = true;
}

bool BatchUpdateProtectedBranchesBodyDto::namesIsSet() const
{
    return namesIsSet_;
}

void BatchUpdateProtectedBranchesBodyDto::unsetnames()
{
    namesIsSet_ = false;
}

std::vector<ProtectedBranchProtectedActionBodyDto>& BatchUpdateProtectedBranchesBodyDto::getActions()
{
    return actions_;
}

void BatchUpdateProtectedBranchesBodyDto::setActions(const std::vector<ProtectedBranchProtectedActionBodyDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool BatchUpdateProtectedBranchesBodyDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void BatchUpdateProtectedBranchesBodyDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


