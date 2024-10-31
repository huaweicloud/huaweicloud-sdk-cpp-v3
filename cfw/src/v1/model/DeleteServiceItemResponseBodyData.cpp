

#include "huaweicloud/cfw/v1/model/DeleteServiceItemResponseBodyData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteServiceItemResponseBodyData::DeleteServiceItemResponseBodyData()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

DeleteServiceItemResponseBodyData::~DeleteServiceItemResponseBodyData() = default;

void DeleteServiceItemResponseBodyData::validate()
{
}

web::json::value DeleteServiceItemResponseBodyData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool DeleteServiceItemResponseBodyData::fromJson(const web::json::value& val)
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


std::string DeleteServiceItemResponseBodyData::getId() const
{
    return id_;
}

void DeleteServiceItemResponseBodyData::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteServiceItemResponseBodyData::idIsSet() const
{
    return idIsSet_;
}

void DeleteServiceItemResponseBodyData::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteServiceItemResponseBodyData::getName() const
{
    return name_;
}

void DeleteServiceItemResponseBodyData::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteServiceItemResponseBodyData::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteServiceItemResponseBodyData::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


