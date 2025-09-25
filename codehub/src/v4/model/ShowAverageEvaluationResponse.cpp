

#include "huaweicloud/codehub/v4/model/ShowAverageEvaluationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowAverageEvaluationResponse::ShowAverageEvaluationResponse()
{
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
    averageEvaluationLevel_ = 0.0;
    averageEvaluationLevelIsSet_ = false;
    evaluationsIsSet_ = false;
    customEvaluationsIsSet_ = false;
}

ShowAverageEvaluationResponse::~ShowAverageEvaluationResponse() = default;

void ShowAverageEvaluationResponse::validate()
{
}

web::json::value ShowAverageEvaluationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(averageEvaluationLevelIsSet_) {
        val[utility::conversions::to_string_t("average_evaluation_level")] = ModelBase::toJson(averageEvaluationLevel_);
    }
    if(evaluationsIsSet_) {
        val[utility::conversions::to_string_t("evaluations")] = ModelBase::toJson(evaluations_);
    }
    if(customEvaluationsIsSet_) {
        val[utility::conversions::to_string_t("custom_evaluations")] = ModelBase::toJson(customEvaluations_);
    }

    return val;
}
bool ShowAverageEvaluationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("merge_request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("average_evaluation_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("average_evaluation_level"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAverageEvaluationLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("evaluations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evaluations"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestBaseEvaluationDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_evaluations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_evaluations"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestCustomAverageEvaluationDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomEvaluations(refVal);
        }
    }
    return ok;
}


int32_t ShowAverageEvaluationResponse::getMergeRequestId() const
{
    return mergeRequestId_;
}

void ShowAverageEvaluationResponse::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool ShowAverageEvaluationResponse::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void ShowAverageEvaluationResponse::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

double ShowAverageEvaluationResponse::getAverageEvaluationLevel() const
{
    return averageEvaluationLevel_;
}

void ShowAverageEvaluationResponse::setAverageEvaluationLevel(double value)
{
    averageEvaluationLevel_ = value;
    averageEvaluationLevelIsSet_ = true;
}

bool ShowAverageEvaluationResponse::averageEvaluationLevelIsSet() const
{
    return averageEvaluationLevelIsSet_;
}

void ShowAverageEvaluationResponse::unsetaverageEvaluationLevel()
{
    averageEvaluationLevelIsSet_ = false;
}

std::vector<MergeRequestBaseEvaluationDto>& ShowAverageEvaluationResponse::getEvaluations()
{
    return evaluations_;
}

void ShowAverageEvaluationResponse::setEvaluations(const std::vector<MergeRequestBaseEvaluationDto>& value)
{
    evaluations_ = value;
    evaluationsIsSet_ = true;
}

bool ShowAverageEvaluationResponse::evaluationsIsSet() const
{
    return evaluationsIsSet_;
}

void ShowAverageEvaluationResponse::unsetevaluations()
{
    evaluationsIsSet_ = false;
}

std::vector<MergeRequestCustomAverageEvaluationDto>& ShowAverageEvaluationResponse::getCustomEvaluations()
{
    return customEvaluations_;
}

void ShowAverageEvaluationResponse::setCustomEvaluations(const std::vector<MergeRequestCustomAverageEvaluationDto>& value)
{
    customEvaluations_ = value;
    customEvaluationsIsSet_ = true;
}

bool ShowAverageEvaluationResponse::customEvaluationsIsSet() const
{
    return customEvaluationsIsSet_;
}

void ShowAverageEvaluationResponse::unsetcustomEvaluations()
{
    customEvaluationsIsSet_ = false;
}

}
}
}
}
}


