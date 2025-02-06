

#include "huaweicloud/rds/v3/model/SetAutoUpgradePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAutoUpgradePolicyResponse::SetAutoUpgradePolicyResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

SetAutoUpgradePolicyResponse::~SetAutoUpgradePolicyResponse() = default;

void SetAutoUpgradePolicyResponse::validate()
{
}

web::json::value SetAutoUpgradePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool SetAutoUpgradePolicyResponse::fromJson(const web::json::value& val)
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


std::string SetAutoUpgradePolicyResponse::getResp() const
{
    return resp_;
}

void SetAutoUpgradePolicyResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool SetAutoUpgradePolicyResponse::respIsSet() const
{
    return respIsSet_;
}

void SetAutoUpgradePolicyResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


