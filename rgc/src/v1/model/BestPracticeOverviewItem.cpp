

#include "huaweicloud/rgc/v1/model/BestPracticeOverviewItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




BestPracticeOverviewItem::BestPracticeOverviewItem()
{
    score_ = 0.0;
    scoreIsSet_ = false;
    detectionCount_ = 0;
    detectionCountIsSet_ = false;
    highRiskCount_ = 0;
    highRiskCountIsSet_ = false;
    mediumRiskCount_ = 0;
    mediumRiskCountIsSet_ = false;
    lowRiskCount_ = 0;
    lowRiskCountIsSet_ = false;
    riskItemDescriptionIsSet_ = false;
}

BestPracticeOverviewItem::~BestPracticeOverviewItem() = default;

void BestPracticeOverviewItem::validate()
{
}

web::json::value BestPracticeOverviewItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(detectionCountIsSet_) {
        val[utility::conversions::to_string_t("detection_count")] = ModelBase::toJson(detectionCount_);
    }
    if(highRiskCountIsSet_) {
        val[utility::conversions::to_string_t("high_risk_count")] = ModelBase::toJson(highRiskCount_);
    }
    if(mediumRiskCountIsSet_) {
        val[utility::conversions::to_string_t("medium_risk_count")] = ModelBase::toJson(mediumRiskCount_);
    }
    if(lowRiskCountIsSet_) {
        val[utility::conversions::to_string_t("low_risk_count")] = ModelBase::toJson(lowRiskCount_);
    }
    if(riskItemDescriptionIsSet_) {
        val[utility::conversions::to_string_t("risk_item_description")] = ModelBase::toJson(riskItemDescription_);
    }

    return val;
}
bool BestPracticeOverviewItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detection_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detection_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high_risk_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high_risk_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighRiskCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("medium_risk_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medium_risk_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediumRiskCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("low_risk_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("low_risk_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLowRiskCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_item_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_item_description"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskItemDescription(refVal);
        }
    }
    return ok;
}


double BestPracticeOverviewItem::getScore() const
{
    return score_;
}

void BestPracticeOverviewItem::setScore(double value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool BestPracticeOverviewItem::scoreIsSet() const
{
    return scoreIsSet_;
}

void BestPracticeOverviewItem::unsetscore()
{
    scoreIsSet_ = false;
}

int32_t BestPracticeOverviewItem::getDetectionCount() const
{
    return detectionCount_;
}

void BestPracticeOverviewItem::setDetectionCount(int32_t value)
{
    detectionCount_ = value;
    detectionCountIsSet_ = true;
}

bool BestPracticeOverviewItem::detectionCountIsSet() const
{
    return detectionCountIsSet_;
}

void BestPracticeOverviewItem::unsetdetectionCount()
{
    detectionCountIsSet_ = false;
}

int32_t BestPracticeOverviewItem::getHighRiskCount() const
{
    return highRiskCount_;
}

void BestPracticeOverviewItem::setHighRiskCount(int32_t value)
{
    highRiskCount_ = value;
    highRiskCountIsSet_ = true;
}

bool BestPracticeOverviewItem::highRiskCountIsSet() const
{
    return highRiskCountIsSet_;
}

void BestPracticeOverviewItem::unsethighRiskCount()
{
    highRiskCountIsSet_ = false;
}

int32_t BestPracticeOverviewItem::getMediumRiskCount() const
{
    return mediumRiskCount_;
}

void BestPracticeOverviewItem::setMediumRiskCount(int32_t value)
{
    mediumRiskCount_ = value;
    mediumRiskCountIsSet_ = true;
}

bool BestPracticeOverviewItem::mediumRiskCountIsSet() const
{
    return mediumRiskCountIsSet_;
}

void BestPracticeOverviewItem::unsetmediumRiskCount()
{
    mediumRiskCountIsSet_ = false;
}

int32_t BestPracticeOverviewItem::getLowRiskCount() const
{
    return lowRiskCount_;
}

void BestPracticeOverviewItem::setLowRiskCount(int32_t value)
{
    lowRiskCount_ = value;
    lowRiskCountIsSet_ = true;
}

bool BestPracticeOverviewItem::lowRiskCountIsSet() const
{
    return lowRiskCountIsSet_;
}

void BestPracticeOverviewItem::unsetlowRiskCount()
{
    lowRiskCountIsSet_ = false;
}

std::vector<std::string>& BestPracticeOverviewItem::getRiskItemDescription()
{
    return riskItemDescription_;
}

void BestPracticeOverviewItem::setRiskItemDescription(const std::vector<std::string>& value)
{
    riskItemDescription_ = value;
    riskItemDescriptionIsSet_ = true;
}

bool BestPracticeOverviewItem::riskItemDescriptionIsSet() const
{
    return riskItemDescriptionIsSet_;
}

void BestPracticeOverviewItem::unsetriskItemDescription()
{
    riskItemDescriptionIsSet_ = false;
}

}
}
}
}
}


