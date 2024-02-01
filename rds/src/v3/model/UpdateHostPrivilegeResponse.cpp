

#include "huaweicloud/rds/v3/model/UpdateHostPrivilegeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateHostPrivilegeResponse::UpdateHostPrivilegeResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdateHostPrivilegeResponse::~UpdateHostPrivilegeResponse() = default;

void UpdateHostPrivilegeResponse::validate()
{
}

web::json::value UpdateHostPrivilegeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool UpdateHostPrivilegeResponse::fromJson(const web::json::value& val)
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


std::string UpdateHostPrivilegeResponse::getResp() const
{
    return resp_;
}

void UpdateHostPrivilegeResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdateHostPrivilegeResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdateHostPrivilegeResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


