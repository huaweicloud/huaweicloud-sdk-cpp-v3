

#include "huaweicloud/gaussdb/v3/model/BatchModifySlowProcessThresholdRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchModifySlowProcessThresholdRequestBody::BatchModifySlowProcessThresholdRequestBody()
{
    instanceIdsIsSet_ = false;
    slowProcessThreshold_ = 0;
    slowProcessThresholdIsSet_ = false;
}

BatchModifySlowProcessThresholdRequestBody::~BatchModifySlowProcessThresholdRequestBody() = default;

void BatchModifySlowProcessThresholdRequestBody::validate()
{
}

web::json::value BatchModifySlowProcessThresholdRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(slowProcessThresholdIsSet_) {
        val[utility::conversions::to_string_t("slow_process_threshold")] = ModelBase::toJson(slowProcessThreshold_);
    }

    return val;
}
bool BatchModifySlowProcessThresholdRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
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


std::vector<std::string>& BatchModifySlowProcessThresholdRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void BatchModifySlowProcessThresholdRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool BatchModifySlowProcessThresholdRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void BatchModifySlowProcessThresholdRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

int32_t BatchModifySlowProcessThresholdRequestBody::getSlowProcessThreshold() const
{
    return slowProcessThreshold_;
}

void BatchModifySlowProcessThresholdRequestBody::setSlowProcessThreshold(int32_t value)
{
    slowProcessThreshold_ = value;
    slowProcessThresholdIsSet_ = true;
}

bool BatchModifySlowProcessThresholdRequestBody::slowProcessThresholdIsSet() const
{
    return slowProcessThresholdIsSet_;
}

void BatchModifySlowProcessThresholdRequestBody::unsetslowProcessThreshold()
{
    slowProcessThresholdIsSet_ = false;
}

}
}
}
}
}


