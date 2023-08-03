

#include "huaweicloud/rds/v3/model/AllowDbUserPrivilegeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AllowDbUserPrivilegeResponse::AllowDbUserPrivilegeResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

AllowDbUserPrivilegeResponse::~AllowDbUserPrivilegeResponse() = default;

void AllowDbUserPrivilegeResponse::validate()
{
}

web::json::value AllowDbUserPrivilegeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool AllowDbUserPrivilegeResponse::fromJson(const web::json::value& val)
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

std::string AllowDbUserPrivilegeResponse::getResp() const
{
    return resp_;
}

void AllowDbUserPrivilegeResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool AllowDbUserPrivilegeResponse::respIsSet() const
{
    return respIsSet_;
}

void AllowDbUserPrivilegeResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


