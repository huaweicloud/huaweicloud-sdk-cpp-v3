

#include "huaweicloud/dbss/v1/model/AddAuditDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddAuditDatabaseResponse::AddAuditDatabaseResponse()
{
    id_ = "";
    idIsSet_ = false;
}

AddAuditDatabaseResponse::~AddAuditDatabaseResponse() = default;

void AddAuditDatabaseResponse::validate()
{
}

web::json::value AddAuditDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool AddAuditDatabaseResponse::fromJson(const web::json::value& val)
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


std::string AddAuditDatabaseResponse::getId() const
{
    return id_;
}

void AddAuditDatabaseResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddAuditDatabaseResponse::idIsSet() const
{
    return idIsSet_;
}

void AddAuditDatabaseResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


