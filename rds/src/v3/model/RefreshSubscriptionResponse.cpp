

#include "huaweicloud/rds/v3/model/RefreshSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RefreshSubscriptionResponse::RefreshSubscriptionResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

RefreshSubscriptionResponse::~RefreshSubscriptionResponse() = default;

void RefreshSubscriptionResponse::validate()
{
}

web::json::value RefreshSubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool RefreshSubscriptionResponse::fromJson(const web::json::value& val)
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


std::string RefreshSubscriptionResponse::getResp() const
{
    return resp_;
}

void RefreshSubscriptionResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool RefreshSubscriptionResponse::respIsSet() const
{
    return respIsSet_;
}

void RefreshSubscriptionResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


