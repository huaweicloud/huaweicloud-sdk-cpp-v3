

#include "huaweicloud/evs/v2/model/UpdateSnapshotOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotOption::UpdateSnapshotOption()
{
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UpdateSnapshotOption::~UpdateSnapshotOption() = default;

void UpdateSnapshotOption::validate()
{
}

web::json::value UpdateSnapshotOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool UpdateSnapshotOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}

std::string UpdateSnapshotOption::getDescription() const
{
    return description_;
}

void UpdateSnapshotOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateSnapshotOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateSnapshotOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateSnapshotOption::getName() const
{
    return name_;
}

void UpdateSnapshotOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateSnapshotOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateSnapshotOption::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


