

#include "huaweicloud/rds/v3/model/RevokeSqlserverDbUserPrivilegeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokeSqlserverDbUserPrivilegeResponse::RevokeSqlserverDbUserPrivilegeResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

RevokeSqlserverDbUserPrivilegeResponse::~RevokeSqlserverDbUserPrivilegeResponse() = default;

void RevokeSqlserverDbUserPrivilegeResponse::validate()
{
}

web::json::value RevokeSqlserverDbUserPrivilegeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool RevokeSqlserverDbUserPrivilegeResponse::fromJson(const web::json::value& val)
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


std::string RevokeSqlserverDbUserPrivilegeResponse::getResp() const
{
    return resp_;
}

void RevokeSqlserverDbUserPrivilegeResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool RevokeSqlserverDbUserPrivilegeResponse::respIsSet() const
{
    return respIsSet_;
}

void RevokeSqlserverDbUserPrivilegeResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


