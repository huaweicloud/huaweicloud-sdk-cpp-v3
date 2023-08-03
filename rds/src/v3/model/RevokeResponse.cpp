

#include "huaweicloud/rds/v3/model/RevokeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokeResponse::RevokeResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

RevokeResponse::~RevokeResponse() = default;

void RevokeResponse::validate()
{
}

web::json::value RevokeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool RevokeResponse::fromJson(const web::json::value& val)
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

std::string RevokeResponse::getResp() const
{
    return resp_;
}

void RevokeResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool RevokeResponse::respIsSet() const
{
    return respIsSet_;
}

void RevokeResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


