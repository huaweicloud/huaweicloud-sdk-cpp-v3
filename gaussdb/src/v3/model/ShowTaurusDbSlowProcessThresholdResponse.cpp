

#include "huaweicloud/gaussdb/v3/model/ShowTaurusDbSlowProcessThresholdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowTaurusDbSlowProcessThresholdResponse::ShowTaurusDbSlowProcessThresholdResponse()
{
    slowProcessThreshold_ = 0;
    slowProcessThresholdIsSet_ = false;
}

ShowTaurusDbSlowProcessThresholdResponse::~ShowTaurusDbSlowProcessThresholdResponse() = default;

void ShowTaurusDbSlowProcessThresholdResponse::validate()
{
}

web::json::value ShowTaurusDbSlowProcessThresholdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowProcessThresholdIsSet_) {
        val[utility::conversions::to_string_t("slow_process_threshold")] = ModelBase::toJson(slowProcessThreshold_);
    }

    return val;
}
bool ShowTaurusDbSlowProcessThresholdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_process_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_process_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowProcessThreshold(refVal);
        }
    }
    return ok;
}


int32_t ShowTaurusDbSlowProcessThresholdResponse::getSlowProcessThreshold() const
{
    return slowProcessThreshold_;
}

void ShowTaurusDbSlowProcessThresholdResponse::setSlowProcessThreshold(int32_t value)
{
    slowProcessThreshold_ = value;
    slowProcessThresholdIsSet_ = true;
}

bool ShowTaurusDbSlowProcessThresholdResponse::slowProcessThresholdIsSet() const
{
    return slowProcessThresholdIsSet_;
}

void ShowTaurusDbSlowProcessThresholdResponse::unsetslowProcessThreshold()
{
    slowProcessThresholdIsSet_ = false;
}

}
}
}
}
}


