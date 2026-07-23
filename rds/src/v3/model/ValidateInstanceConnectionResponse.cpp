

#include "huaweicloud/rds/v3/model/ValidateInstanceConnectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ValidateInstanceConnectionResponse::ValidateInstanceConnectionResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

ValidateInstanceConnectionResponse::~ValidateInstanceConnectionResponse() = default;

void ValidateInstanceConnectionResponse::validate()
{
}

web::json::value ValidateInstanceConnectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool ValidateInstanceConnectionResponse::fromJson(const web::json::value& val)
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


std::string ValidateInstanceConnectionResponse::getResp() const
{
    return resp_;
}

void ValidateInstanceConnectionResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool ValidateInstanceConnectionResponse::respIsSet() const
{
    return respIsSet_;
}

void ValidateInstanceConnectionResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


