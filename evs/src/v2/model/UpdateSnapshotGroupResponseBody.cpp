

#include "huaweicloud/evs/v2/model/UpdateSnapshotGroupResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotGroupResponseBody::UpdateSnapshotGroupResponseBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateSnapshotGroupResponseBody::~UpdateSnapshotGroupResponseBody() = default;

void UpdateSnapshotGroupResponseBody::validate()
{
}

web::json::value UpdateSnapshotGroupResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UpdateSnapshotGroupResponseBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string UpdateSnapshotGroupResponseBody::getName() const
{
    return name_;
}

void UpdateSnapshotGroupResponseBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateSnapshotGroupResponseBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateSnapshotGroupResponseBody::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateSnapshotGroupResponseBody::getDescription() const
{
    return description_;
}

void UpdateSnapshotGroupResponseBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateSnapshotGroupResponseBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateSnapshotGroupResponseBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


