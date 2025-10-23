

#include "huaweicloud/codehub/v4/model/CustomEvaluationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CustomEvaluationDto::CustomEvaluationDto()
{
    id_ = 0;
    idIsSet_ = false;
    evaluationTypeId_ = 0;
    evaluationTypeIdIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CustomEvaluationDto::~CustomEvaluationDto() = default;

void CustomEvaluationDto::validate()
{
}

web::json::value CustomEvaluationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(evaluationTypeIdIsSet_) {
        val[utility::conversions::to_string_t("evaluation_type_id")] = ModelBase::toJson(evaluationTypeId_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool CustomEvaluationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("evaluation_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evaluation_type_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluationTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
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
    return ok;
}


int32_t CustomEvaluationDto::getId() const
{
    return id_;
}

void CustomEvaluationDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CustomEvaluationDto::idIsSet() const
{
    return idIsSet_;
}

void CustomEvaluationDto::unsetid()
{
    idIsSet_ = false;
}

int32_t CustomEvaluationDto::getEvaluationTypeId() const
{
    return evaluationTypeId_;
}

void CustomEvaluationDto::setEvaluationTypeId(int32_t value)
{
    evaluationTypeId_ = value;
    evaluationTypeIdIsSet_ = true;
}

bool CustomEvaluationDto::evaluationTypeIdIsSet() const
{
    return evaluationTypeIdIsSet_;
}

void CustomEvaluationDto::unsetevaluationTypeId()
{
    evaluationTypeIdIsSet_ = false;
}

int32_t CustomEvaluationDto::getLevel() const
{
    return level_;
}

void CustomEvaluationDto::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool CustomEvaluationDto::levelIsSet() const
{
    return levelIsSet_;
}

void CustomEvaluationDto::unsetlevel()
{
    levelIsSet_ = false;
}

std::string CustomEvaluationDto::getName() const
{
    return name_;
}

void CustomEvaluationDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CustomEvaluationDto::nameIsSet() const
{
    return nameIsSet_;
}

void CustomEvaluationDto::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


