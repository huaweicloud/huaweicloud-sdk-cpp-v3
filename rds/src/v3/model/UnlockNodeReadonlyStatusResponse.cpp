

#include "huaweicloud/rds/v3/model/UnlockNodeReadonlyStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UnlockNodeReadonlyStatusResponse::UnlockNodeReadonlyStatusResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UnlockNodeReadonlyStatusResponse::~UnlockNodeReadonlyStatusResponse() = default;

void UnlockNodeReadonlyStatusResponse::validate()
{
}

web::json::value UnlockNodeReadonlyStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool UnlockNodeReadonlyStatusResponse::fromJson(const web::json::value& val)
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


std::string UnlockNodeReadonlyStatusResponse::getResp() const
{
    return resp_;
}

void UnlockNodeReadonlyStatusResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UnlockNodeReadonlyStatusResponse::respIsSet() const
{
    return respIsSet_;
}

void UnlockNodeReadonlyStatusResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


