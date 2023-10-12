

#include "huaweicloud/rds/v3/model/AllowSqlserverDbUserPrivilegeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AllowSqlserverDbUserPrivilegeResponse::AllowSqlserverDbUserPrivilegeResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

AllowSqlserverDbUserPrivilegeResponse::~AllowSqlserverDbUserPrivilegeResponse() = default;

void AllowSqlserverDbUserPrivilegeResponse::validate()
{
}

web::json::value AllowSqlserverDbUserPrivilegeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool AllowSqlserverDbUserPrivilegeResponse::fromJson(const web::json::value& val)
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


std::string AllowSqlserverDbUserPrivilegeResponse::getResp() const
{
    return resp_;
}

void AllowSqlserverDbUserPrivilegeResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool AllowSqlserverDbUserPrivilegeResponse::respIsSet() const
{
    return respIsSet_;
}

void AllowSqlserverDbUserPrivilegeResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


