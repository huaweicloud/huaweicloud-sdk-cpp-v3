

#include "huaweicloud/rds/v3/model/SetPostgresqlDbUserPwdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetPostgresqlDbUserPwdResponse::SetPostgresqlDbUserPwdResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

SetPostgresqlDbUserPwdResponse::~SetPostgresqlDbUserPwdResponse() = default;

void SetPostgresqlDbUserPwdResponse::validate()
{
}

web::json::value SetPostgresqlDbUserPwdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool SetPostgresqlDbUserPwdResponse::fromJson(const web::json::value& val)
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


std::string SetPostgresqlDbUserPwdResponse::getResp() const
{
    return resp_;
}

void SetPostgresqlDbUserPwdResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool SetPostgresqlDbUserPwdResponse::respIsSet() const
{
    return respIsSet_;
}

void SetPostgresqlDbUserPwdResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


