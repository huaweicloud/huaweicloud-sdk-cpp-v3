

#include "huaweicloud/modelarts/v1/model/SloInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SloInfo::SloInfo()
{
    sloObjectivesIsSet_ = false;
    predictWindowSeconds_ = 0;
    predictWindowSecondsIsSet_ = false;
}

SloInfo::~SloInfo() = default;

void SloInfo::validate()
{
}

web::json::value SloInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sloObjectivesIsSet_) {
        val[utility::conversions::to_string_t("slo_objectives")] = ModelBase::toJson(sloObjectives_);
    }
    if(predictWindowSecondsIsSet_) {
        val[utility::conversions::to_string_t("predict_window_seconds")] = ModelBase::toJson(predictWindowSeconds_);
    }

    return val;
}
bool SloInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slo_objectives"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slo_objectives"));
        if(!fieldValue.is_null())
        {
            std::vector<SloObjectives> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSloObjectives(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("predict_window_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("predict_window_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPredictWindowSeconds(refVal);
        }
    }
    return ok;
}


std::vector<SloObjectives>& SloInfo::getSloObjectives()
{
    return sloObjectives_;
}

void SloInfo::setSloObjectives(const std::vector<SloObjectives>& value)
{
    sloObjectives_ = value;
    sloObjectivesIsSet_ = true;
}

bool SloInfo::sloObjectivesIsSet() const
{
    return sloObjectivesIsSet_;
}

void SloInfo::unsetsloObjectives()
{
    sloObjectivesIsSet_ = false;
}

int32_t SloInfo::getPredictWindowSeconds() const
{
    return predictWindowSeconds_;
}

void SloInfo::setPredictWindowSeconds(int32_t value)
{
    predictWindowSeconds_ = value;
    predictWindowSecondsIsSet_ = true;
}

bool SloInfo::predictWindowSecondsIsSet() const
{
    return predictWindowSecondsIsSet_;
}

void SloInfo::unsetpredictWindowSeconds()
{
    predictWindowSecondsIsSet_ = false;
}

}
}
}
}
}


