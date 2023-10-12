

#include "huaweicloud/rds/v3/model/AllowDbPrivilegeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AllowDbPrivilegeResponse::AllowDbPrivilegeResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

AllowDbPrivilegeResponse::~AllowDbPrivilegeResponse() = default;

void AllowDbPrivilegeResponse::validate()
{
}

web::json::value AllowDbPrivilegeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool AllowDbPrivilegeResponse::fromJson(const web::json::value& val)
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


std::string AllowDbPrivilegeResponse::getResp() const
{
    return resp_;
}

void AllowDbPrivilegeResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool AllowDbPrivilegeResponse::respIsSet() const
{
    return respIsSet_;
}

void AllowDbPrivilegeResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


