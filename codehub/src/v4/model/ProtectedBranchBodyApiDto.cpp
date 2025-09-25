

#include "huaweicloud/codehub/v4/model/ProtectedBranchBodyApiDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ProtectedBranchBodyApiDto::ProtectedBranchBodyApiDto()
{
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

ProtectedBranchBodyApiDto::~ProtectedBranchBodyApiDto() = default;

void ProtectedBranchBodyApiDto::validate()
{
}

web::json::value ProtectedBranchBodyApiDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool ProtectedBranchBodyApiDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectedActionBasicApiDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


std::string ProtectedBranchBodyApiDto::getName() const
{
    return name_;
}

void ProtectedBranchBodyApiDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProtectedBranchBodyApiDto::nameIsSet() const
{
    return nameIsSet_;
}

void ProtectedBranchBodyApiDto::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ProtectedActionBasicApiDto>& ProtectedBranchBodyApiDto::getActions()
{
    return actions_;
}

void ProtectedBranchBodyApiDto::setActions(const std::vector<ProtectedActionBasicApiDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ProtectedBranchBodyApiDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void ProtectedBranchBodyApiDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


