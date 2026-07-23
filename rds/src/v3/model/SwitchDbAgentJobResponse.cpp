

#include "huaweicloud/rds/v3/model/SwitchDbAgentJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchDbAgentJobResponse::SwitchDbAgentJobResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

SwitchDbAgentJobResponse::~SwitchDbAgentJobResponse() = default;

void SwitchDbAgentJobResponse::validate()
{
}

web::json::value SwitchDbAgentJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool SwitchDbAgentJobResponse::fromJson(const web::json::value& val)
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


std::string SwitchDbAgentJobResponse::getResp() const
{
    return resp_;
}

void SwitchDbAgentJobResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool SwitchDbAgentJobResponse::respIsSet() const
{
    return respIsSet_;
}

void SwitchDbAgentJobResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


