

#include "huaweicloud/functiongraph/v2/model/ShowFuncReservedInstanceMetricsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFuncReservedInstanceMetricsResponse::ShowFuncReservedInstanceMetricsResponse()
{
    instanceNumIsSet_ = false;
    reservedInstanceNumIsSet_ = false;
}

ShowFuncReservedInstanceMetricsResponse::~ShowFuncReservedInstanceMetricsResponse() = default;

void ShowFuncReservedInstanceMetricsResponse::validate()
{
}

web::json::value ShowFuncReservedInstanceMetricsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceNumIsSet_) {
        val[utility::conversions::to_string_t("instanceNum")] = ModelBase::toJson(instanceNum_);
    }
    if(reservedInstanceNumIsSet_) {
        val[utility::conversions::to_string_t("reservedInstanceNum")] = ModelBase::toJson(reservedInstanceNum_);
    }

    return val;
}
bool ShowFuncReservedInstanceMetricsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instanceNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instanceNum"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reservedInstanceNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reservedInstanceNum"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservedInstanceNum(refVal);
        }
    }
    return ok;
}


std::vector<SlaReportsValue>& ShowFuncReservedInstanceMetricsResponse::getInstanceNum()
{
    return instanceNum_;
}

void ShowFuncReservedInstanceMetricsResponse::setInstanceNum(const std::vector<SlaReportsValue>& value)
{
    instanceNum_ = value;
    instanceNumIsSet_ = true;
}

bool ShowFuncReservedInstanceMetricsResponse::instanceNumIsSet() const
{
    return instanceNumIsSet_;
}

void ShowFuncReservedInstanceMetricsResponse::unsetinstanceNum()
{
    instanceNumIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFuncReservedInstanceMetricsResponse::getReservedInstanceNum()
{
    return reservedInstanceNum_;
}

void ShowFuncReservedInstanceMetricsResponse::setReservedInstanceNum(const std::vector<SlaReportsValue>& value)
{
    reservedInstanceNum_ = value;
    reservedInstanceNumIsSet_ = true;
}

bool ShowFuncReservedInstanceMetricsResponse::reservedInstanceNumIsSet() const
{
    return reservedInstanceNumIsSet_;
}

void ShowFuncReservedInstanceMetricsResponse::unsetreservedInstanceNum()
{
    reservedInstanceNumIsSet_ = false;
}

}
}
}
}
}


