

#include "huaweicloud/codehub/v4/model/MergeRequestCustomAverageEvaluationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeRequestCustomAverageEvaluationDto::MergeRequestCustomAverageEvaluationDto()
{
    evaluationTypeId_ = 0;
    evaluationTypeIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    level_ = 0.0;
    levelIsSet_ = false;
}

MergeRequestCustomAverageEvaluationDto::~MergeRequestCustomAverageEvaluationDto() = default;

void MergeRequestCustomAverageEvaluationDto::validate()
{
}

web::json::value MergeRequestCustomAverageEvaluationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(evaluationTypeIdIsSet_) {
        val[utility::conversions::to_string_t("evaluation_type_id")] = ModelBase::toJson(evaluationTypeId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }

    return val;
}
bool MergeRequestCustomAverageEvaluationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("evaluation_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evaluation_type_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluationTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestCustomAverageEvaluationDto::getEvaluationTypeId() const
{
    return evaluationTypeId_;
}

void MergeRequestCustomAverageEvaluationDto::setEvaluationTypeId(int32_t value)
{
    evaluationTypeId_ = value;
    evaluationTypeIdIsSet_ = true;
}

bool MergeRequestCustomAverageEvaluationDto::evaluationTypeIdIsSet() const
{
    return evaluationTypeIdIsSet_;
}

void MergeRequestCustomAverageEvaluationDto::unsetevaluationTypeId()
{
    evaluationTypeIdIsSet_ = false;
}

std::string MergeRequestCustomAverageEvaluationDto::getName() const
{
    return name_;
}

void MergeRequestCustomAverageEvaluationDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MergeRequestCustomAverageEvaluationDto::nameIsSet() const
{
    return nameIsSet_;
}

void MergeRequestCustomAverageEvaluationDto::unsetname()
{
    nameIsSet_ = false;
}

double MergeRequestCustomAverageEvaluationDto::getLevel() const
{
    return level_;
}

void MergeRequestCustomAverageEvaluationDto::setLevel(double value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool MergeRequestCustomAverageEvaluationDto::levelIsSet() const
{
    return levelIsSet_;
}

void MergeRequestCustomAverageEvaluationDto::unsetlevel()
{
    levelIsSet_ = false;
}

}
}
}
}
}


