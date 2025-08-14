

#include "huaweicloud/iotda/v5/model/ChangeGateway.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ChangeGateway::ChangeGateway()
{
    gatewayId_ = "";
    gatewayIdIsSet_ = false;
}

ChangeGateway::~ChangeGateway() = default;

void ChangeGateway::validate()
{
}

web::json::value ChangeGateway::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gatewayIdIsSet_) {
        val[utility::conversions::to_string_t("gateway_id")] = ModelBase::toJson(gatewayId_);
    }

    return val;
}
bool ChangeGateway::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gateway_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayId(refVal);
        }
    }
    return ok;
}


std::string ChangeGateway::getGatewayId() const
{
    return gatewayId_;
}

void ChangeGateway::setGatewayId(const std::string& value)
{
    gatewayId_ = value;
    gatewayIdIsSet_ = true;
}

bool ChangeGateway::gatewayIdIsSet() const
{
    return gatewayIdIsSet_;
}

void ChangeGateway::unsetgatewayId()
{
    gatewayIdIsSet_ = false;
}

}
}
}
}
}


