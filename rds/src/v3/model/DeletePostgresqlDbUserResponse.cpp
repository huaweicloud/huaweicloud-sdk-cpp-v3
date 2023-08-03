

#include "huaweicloud/rds/v3/model/DeletePostgresqlDbUserResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeletePostgresqlDbUserResponse::DeletePostgresqlDbUserResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

DeletePostgresqlDbUserResponse::~DeletePostgresqlDbUserResponse() = default;

void DeletePostgresqlDbUserResponse::validate()
{
}

web::json::value DeletePostgresqlDbUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool DeletePostgresqlDbUserResponse::fromJson(const web::json::value& val)
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

std::string DeletePostgresqlDbUserResponse::getResp() const
{
    return resp_;
}

void DeletePostgresqlDbUserResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool DeletePostgresqlDbUserResponse::respIsSet() const
{
    return respIsSet_;
}

void DeletePostgresqlDbUserResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


