

#include "huaweicloud/ecs/v2/model/NovaServerVolume.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServerVolume::NovaServerVolume()
{
    id_ = "";
    idIsSet_ = false;
    deleteOnTermination_ = false;
    deleteOnTerminationIsSet_ = false;
}

NovaServerVolume::~NovaServerVolume() = default;

void NovaServerVolume::validate()
{
}

web::json::value NovaServerVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(deleteOnTerminationIsSet_) {
        val[utility::conversions::to_string_t("delete_on_termination")] = ModelBase::toJson(deleteOnTermination_);
    }

    return val;
}

bool NovaServerVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_on_termination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_on_termination"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteOnTermination(refVal);
        }
    }
    return ok;
}


std::string NovaServerVolume::getId() const
{
    return id_;
}

void NovaServerVolume::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaServerVolume::idIsSet() const
{
    return idIsSet_;
}

void NovaServerVolume::unsetid()
{
    idIsSet_ = false;
}

bool NovaServerVolume::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void NovaServerVolume::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool NovaServerVolume::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void NovaServerVolume::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

}
}
}
}
}


