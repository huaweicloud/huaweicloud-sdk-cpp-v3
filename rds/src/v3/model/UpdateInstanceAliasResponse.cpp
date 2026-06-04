

#include "huaweicloud/rds/v3/model/UpdateInstanceAliasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstanceAliasResponse::UpdateInstanceAliasResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdateInstanceAliasResponse::~UpdateInstanceAliasResponse() = default;

void UpdateInstanceAliasResponse::validate()
{
}

web::json::value UpdateInstanceAliasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool UpdateInstanceAliasResponse::fromJson(const web::json::value& val)
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


std::string UpdateInstanceAliasResponse::getResp() const
{
    return resp_;
}

void UpdateInstanceAliasResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdateInstanceAliasResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdateInstanceAliasResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


