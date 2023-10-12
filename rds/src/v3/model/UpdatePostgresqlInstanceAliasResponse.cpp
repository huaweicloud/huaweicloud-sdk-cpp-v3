

#include "huaweicloud/rds/v3/model/UpdatePostgresqlInstanceAliasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlInstanceAliasResponse::UpdatePostgresqlInstanceAliasResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdatePostgresqlInstanceAliasResponse::~UpdatePostgresqlInstanceAliasResponse() = default;

void UpdatePostgresqlInstanceAliasResponse::validate()
{
}

web::json::value UpdatePostgresqlInstanceAliasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool UpdatePostgresqlInstanceAliasResponse::fromJson(const web::json::value& val)
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


std::string UpdatePostgresqlInstanceAliasResponse::getResp() const
{
    return resp_;
}

void UpdatePostgresqlInstanceAliasResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdatePostgresqlInstanceAliasResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdatePostgresqlInstanceAliasResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


