

#include "huaweicloud/codeartsrepo/v4/model/EvaluationTypeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




EvaluationTypeDto::EvaluationTypeDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

EvaluationTypeDto::~EvaluationTypeDto() = default;

void EvaluationTypeDto::validate()
{
}

web::json::value EvaluationTypeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool EvaluationTypeDto::fromJson(const web::json::value& val)
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


int32_t EvaluationTypeDto::getId() const
{
    return id_;
}

void EvaluationTypeDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EvaluationTypeDto::idIsSet() const
{
    return idIsSet_;
}

void EvaluationTypeDto::unsetid()
{
    idIsSet_ = false;
}

std::string EvaluationTypeDto::getName() const
{
    return name_;
}

void EvaluationTypeDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EvaluationTypeDto::nameIsSet() const
{
    return nameIsSet_;
}

void EvaluationTypeDto::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


