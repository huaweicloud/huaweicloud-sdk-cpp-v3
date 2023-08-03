

#include "huaweicloud/rds/v3/model/LDatastore.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




LDatastore::LDatastore()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

LDatastore::~LDatastore() = default;

void LDatastore::validate()
{
}

web::json::value LDatastore::toJson() const
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

bool LDatastore::fromJson(const web::json::value& val)
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

std::string LDatastore::getId() const
{
    return id_;
}

void LDatastore::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LDatastore::idIsSet() const
{
    return idIsSet_;
}

void LDatastore::unsetid()
{
    idIsSet_ = false;
}

std::string LDatastore::getName() const
{
    return name_;
}

void LDatastore::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LDatastore::nameIsSet() const
{
    return nameIsSet_;
}

void LDatastore::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


