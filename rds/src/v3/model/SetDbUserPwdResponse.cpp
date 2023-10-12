

#include "huaweicloud/rds/v3/model/SetDbUserPwdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetDbUserPwdResponse::SetDbUserPwdResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

SetDbUserPwdResponse::~SetDbUserPwdResponse() = default;

void SetDbUserPwdResponse::validate()
{
}

web::json::value SetDbUserPwdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool SetDbUserPwdResponse::fromJson(const web::json::value& val)
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


std::string SetDbUserPwdResponse::getResp() const
{
    return resp_;
}

void SetDbUserPwdResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool SetDbUserPwdResponse::respIsSet() const
{
    return respIsSet_;
}

void SetDbUserPwdResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


