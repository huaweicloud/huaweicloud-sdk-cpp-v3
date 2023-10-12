

#include "huaweicloud/rds/v3/model/ChangingTheDelayThresholdRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChangingTheDelayThresholdRequestBody::ChangingTheDelayThresholdRequestBody()
{
    delayThresholdInKilobytes_ = 0;
    delayThresholdInKilobytesIsSet_ = false;
}

ChangingTheDelayThresholdRequestBody::~ChangingTheDelayThresholdRequestBody() = default;

void ChangingTheDelayThresholdRequestBody::validate()
{
}

web::json::value ChangingTheDelayThresholdRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayThresholdInKilobytesIsSet_) {
        val[utility::conversions::to_string_t("delay_threshold_in_kilobytes")] = ModelBase::toJson(delayThresholdInKilobytes_);
    }

    return val;
}
bool ChangingTheDelayThresholdRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delay_threshold_in_kilobytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay_threshold_in_kilobytes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelayThresholdInKilobytes(refVal);
        }
    }
    return ok;
}


int32_t ChangingTheDelayThresholdRequestBody::getDelayThresholdInKilobytes() const
{
    return delayThresholdInKilobytes_;
}

void ChangingTheDelayThresholdRequestBody::setDelayThresholdInKilobytes(int32_t value)
{
    delayThresholdInKilobytes_ = value;
    delayThresholdInKilobytesIsSet_ = true;
}

bool ChangingTheDelayThresholdRequestBody::delayThresholdInKilobytesIsSet() const
{
    return delayThresholdInKilobytesIsSet_;
}

void ChangingTheDelayThresholdRequestBody::unsetdelayThresholdInKilobytes()
{
    delayThresholdInKilobytesIsSet_ = false;
}

}
}
}
}
}


