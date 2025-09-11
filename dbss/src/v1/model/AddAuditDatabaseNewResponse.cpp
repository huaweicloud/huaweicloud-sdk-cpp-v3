

#include "huaweicloud/dbss/v1/model/AddAuditDatabaseNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddAuditDatabaseNewResponse::AddAuditDatabaseNewResponse()
{
    id_ = "";
    idIsSet_ = false;
}

AddAuditDatabaseNewResponse::~AddAuditDatabaseNewResponse() = default;

void AddAuditDatabaseNewResponse::validate()
{
}

web::json::value AddAuditDatabaseNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool AddAuditDatabaseNewResponse::fromJson(const web::json::value& val)
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


std::string AddAuditDatabaseNewResponse::getId() const
{
    return id_;
}

void AddAuditDatabaseNewResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddAuditDatabaseNewResponse::idIsSet() const
{
    return idIsSet_;
}

void AddAuditDatabaseNewResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


