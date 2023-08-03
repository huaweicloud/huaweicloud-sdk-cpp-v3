

#include "huaweicloud/rds/v3/model/UpdatePostgresqlDatabaseResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlDatabaseResponse::UpdatePostgresqlDatabaseResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdatePostgresqlDatabaseResponse::~UpdatePostgresqlDatabaseResponse() = default;

void UpdatePostgresqlDatabaseResponse::validate()
{
}

web::json::value UpdatePostgresqlDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool UpdatePostgresqlDatabaseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResp(refVal);
        }
    }
    return ok;
}

std::string UpdatePostgresqlDatabaseResponse::getResp() const
{
    return resp_;
}

void UpdatePostgresqlDatabaseResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdatePostgresqlDatabaseResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdatePostgresqlDatabaseResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


