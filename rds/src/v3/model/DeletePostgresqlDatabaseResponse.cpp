

#include "huaweicloud/rds/v3/model/DeletePostgresqlDatabaseResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeletePostgresqlDatabaseResponse::DeletePostgresqlDatabaseResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

DeletePostgresqlDatabaseResponse::~DeletePostgresqlDatabaseResponse() = default;

void DeletePostgresqlDatabaseResponse::validate()
{
}

web::json::value DeletePostgresqlDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool DeletePostgresqlDatabaseResponse::fromJson(const web::json::value& val)
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

std::string DeletePostgresqlDatabaseResponse::getResp() const
{
    return resp_;
}

void DeletePostgresqlDatabaseResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool DeletePostgresqlDatabaseResponse::respIsSet() const
{
    return respIsSet_;
}

void DeletePostgresqlDatabaseResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


