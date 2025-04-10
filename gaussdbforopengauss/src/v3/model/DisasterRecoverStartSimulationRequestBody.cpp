

#include "huaweicloud/gaussdbforopengauss/v3/model/DisasterRecoverStartSimulationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DisasterRecoverStartSimulationRequestBody::DisasterRecoverStartSimulationRequestBody()
{
    xlogKeepRatio_ = 0;
    xlogKeepRatioIsSet_ = false;
    disasterType_ = "";
    disasterTypeIsSet_ = false;
}

DisasterRecoverStartSimulationRequestBody::~DisasterRecoverStartSimulationRequestBody() = default;

void DisasterRecoverStartSimulationRequestBody::validate()
{
}

web::json::value DisasterRecoverStartSimulationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xlogKeepRatioIsSet_) {
        val[utility::conversions::to_string_t("xlog_keep_ratio")] = ModelBase::toJson(xlogKeepRatio_);
    }
    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }

    return val;
}
bool DisasterRecoverStartSimulationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("xlog_keep_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xlog_keep_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXlogKeepRatio(refVal);
        }
    }
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


int32_t DisasterRecoverStartSimulationRequestBody::getXlogKeepRatio() const
{
    return xlogKeepRatio_;
}

void DisasterRecoverStartSimulationRequestBody::setXlogKeepRatio(int32_t value)
{
    xlogKeepRatio_ = value;
    xlogKeepRatioIsSet_ = true;
}

bool DisasterRecoverStartSimulationRequestBody::xlogKeepRatioIsSet() const
{
    return xlogKeepRatioIsSet_;
}

void DisasterRecoverStartSimulationRequestBody::unsetxlogKeepRatio()
{
    xlogKeepRatioIsSet_ = false;
}

std::string DisasterRecoverStartSimulationRequestBody::getDisasterType() const
{
    return disasterType_;
}

void DisasterRecoverStartSimulationRequestBody::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool DisasterRecoverStartSimulationRequestBody::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void DisasterRecoverStartSimulationRequestBody::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

}
}
}
}
}


