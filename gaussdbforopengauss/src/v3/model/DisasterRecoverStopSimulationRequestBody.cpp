

#include "huaweicloud/gaussdbforopengauss/v3/model/DisasterRecoverStopSimulationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DisasterRecoverStopSimulationRequestBody::DisasterRecoverStopSimulationRequestBody()
{
    disasterType_ = "";
    disasterTypeIsSet_ = false;
}

DisasterRecoverStopSimulationRequestBody::~DisasterRecoverStopSimulationRequestBody() = default;

void DisasterRecoverStopSimulationRequestBody::validate()
{
}

web::json::value DisasterRecoverStopSimulationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }

    return val;
}
bool DisasterRecoverStopSimulationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterType(refVal);
        }
    }
    return ok;
}


std::string DisasterRecoverStopSimulationRequestBody::getDisasterType() const
{
    return disasterType_;
}

void DisasterRecoverStopSimulationRequestBody::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool DisasterRecoverStopSimulationRequestBody::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void DisasterRecoverStopSimulationRequestBody::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

}
}
}
}
}


