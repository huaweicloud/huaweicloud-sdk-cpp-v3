

#include "huaweicloud/rds/v3/model/SetBinlogClearPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetBinlogClearPolicyResponse::SetBinlogClearPolicyResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

SetBinlogClearPolicyResponse::~SetBinlogClearPolicyResponse() = default;

void SetBinlogClearPolicyResponse::validate()
{
}

web::json::value SetBinlogClearPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool SetBinlogClearPolicyResponse::fromJson(const web::json::value& val)
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

std::string SetBinlogClearPolicyResponse::getResp() const
{
    return resp_;
}

void SetBinlogClearPolicyResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool SetBinlogClearPolicyResponse::respIsSet() const
{
    return respIsSet_;
}

void SetBinlogClearPolicyResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


