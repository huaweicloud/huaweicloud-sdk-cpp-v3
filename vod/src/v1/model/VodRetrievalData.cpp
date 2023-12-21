

#include "huaweicloud/vod/v1/model/VodRetrievalData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




VodRetrievalData::VodRetrievalData()
{
    retrievalWarm_ = 0.0;
    retrievalWarmIsSet_ = false;
    retrievalCold_ = 0.0;
    retrievalColdIsSet_ = false;
    retrievalColdSpeed_ = 0.0;
    retrievalColdSpeedIsSet_ = false;
}

VodRetrievalData::~VodRetrievalData() = default;

void VodRetrievalData::validate()
{
}

web::json::value VodRetrievalData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retrievalWarmIsSet_) {
        val[utility::conversions::to_string_t("retrieval_warm")] = ModelBase::toJson(retrievalWarm_);
    }
    if(retrievalColdIsSet_) {
        val[utility::conversions::to_string_t("retrieval_cold")] = ModelBase::toJson(retrievalCold_);
    }
    if(retrievalColdSpeedIsSet_) {
        val[utility::conversions::to_string_t("retrieval_cold_speed")] = ModelBase::toJson(retrievalColdSpeed_);
    }

    return val;
}
bool VodRetrievalData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("retrieval_warm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retrieval_warm"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetrievalWarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retrieval_cold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retrieval_cold"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetrievalCold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retrieval_cold_speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retrieval_cold_speed"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetrievalColdSpeed(refVal);
        }
    }
    return ok;
}


double VodRetrievalData::getRetrievalWarm() const
{
    return retrievalWarm_;
}

void VodRetrievalData::setRetrievalWarm(double value)
{
    retrievalWarm_ = value;
    retrievalWarmIsSet_ = true;
}

bool VodRetrievalData::retrievalWarmIsSet() const
{
    return retrievalWarmIsSet_;
}

void VodRetrievalData::unsetretrievalWarm()
{
    retrievalWarmIsSet_ = false;
}

double VodRetrievalData::getRetrievalCold() const
{
    return retrievalCold_;
}

void VodRetrievalData::setRetrievalCold(double value)
{
    retrievalCold_ = value;
    retrievalColdIsSet_ = true;
}

bool VodRetrievalData::retrievalColdIsSet() const
{
    return retrievalColdIsSet_;
}

void VodRetrievalData::unsetretrievalCold()
{
    retrievalColdIsSet_ = false;
}

double VodRetrievalData::getRetrievalColdSpeed() const
{
    return retrievalColdSpeed_;
}

void VodRetrievalData::setRetrievalColdSpeed(double value)
{
    retrievalColdSpeed_ = value;
    retrievalColdSpeedIsSet_ = true;
}

bool VodRetrievalData::retrievalColdSpeedIsSet() const
{
    return retrievalColdSpeedIsSet_;
}

void VodRetrievalData::unsetretrievalColdSpeed()
{
    retrievalColdSpeedIsSet_ = false;
}

}
}
}
}
}


