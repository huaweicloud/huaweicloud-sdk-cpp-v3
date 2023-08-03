

#include "huaweicloud/rds/v3/model/DeleteSqlserverDatabaseResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSqlserverDatabaseResponse::DeleteSqlserverDatabaseResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

DeleteSqlserverDatabaseResponse::~DeleteSqlserverDatabaseResponse() = default;

void DeleteSqlserverDatabaseResponse::validate()
{
}

web::json::value DeleteSqlserverDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool DeleteSqlserverDatabaseResponse::fromJson(const web::json::value& val)
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

std::string DeleteSqlserverDatabaseResponse::getResp() const
{
    return resp_;
}

void DeleteSqlserverDatabaseResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool DeleteSqlserverDatabaseResponse::respIsSet() const
{
    return respIsSet_;
}

void DeleteSqlserverDatabaseResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


