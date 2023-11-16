

#include "huaweicloud/rds/v3/model/RevokePostgresqlDbPrivilegeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokePostgresqlDbPrivilegeResponse::RevokePostgresqlDbPrivilegeResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

RevokePostgresqlDbPrivilegeResponse::~RevokePostgresqlDbPrivilegeResponse() = default;

void RevokePostgresqlDbPrivilegeResponse::validate()
{
}

web::json::value RevokePostgresqlDbPrivilegeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool RevokePostgresqlDbPrivilegeResponse::fromJson(const web::json::value& val)
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


std::string RevokePostgresqlDbPrivilegeResponse::getResp() const
{
    return resp_;
}

void RevokePostgresqlDbPrivilegeResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool RevokePostgresqlDbPrivilegeResponse::respIsSet() const
{
    return respIsSet_;
}

void RevokePostgresqlDbPrivilegeResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


