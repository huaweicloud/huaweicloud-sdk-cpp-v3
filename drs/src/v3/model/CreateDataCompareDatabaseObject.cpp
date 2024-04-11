

#include "huaweicloud/drs/v3/model/CreateDataCompareDatabaseObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateDataCompareDatabaseObject::CreateDataCompareDatabaseObject()
{
    id_ = "";
    idIsSet_ = false;
}

CreateDataCompareDatabaseObject::~CreateDataCompareDatabaseObject() = default;

void CreateDataCompareDatabaseObject::validate()
{
}

web::json::value CreateDataCompareDatabaseObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateDataCompareDatabaseObject::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateDataCompareDatabaseObject::getId() const
{
    return id_;
}

void CreateDataCompareDatabaseObject::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateDataCompareDatabaseObject::idIsSet() const
{
    return idIsSet_;
}

void CreateDataCompareDatabaseObject::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


