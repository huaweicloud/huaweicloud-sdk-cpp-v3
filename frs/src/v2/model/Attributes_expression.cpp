

#include "huaweicloud/frs/v2/model/Attributes_expression.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




Attributes_expression::Attributes_expression()
{
    type_ = "";
    typeIsSet_ = false;
    probability_ = 0.0;
    probabilityIsSet_ = false;
}

Attributes_expression::~Attributes_expression() = default;

void Attributes_expression::validate()
{
}

web::json::value Attributes_expression::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(probabilityIsSet_) {
        val[utility::conversions::to_string_t("probability")] = ModelBase::toJson(probability_);
    }

    return val;
}
bool Attributes_expression::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("probability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("probability"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProbability(refVal);
        }
    }
    return ok;
}


std::string Attributes_expression::getType() const
{
    return type_;
}

void Attributes_expression::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Attributes_expression::typeIsSet() const
{
    return typeIsSet_;
}

void Attributes_expression::unsettype()
{
    typeIsSet_ = false;
}

double Attributes_expression::getProbability() const
{
    return probability_;
}

void Attributes_expression::setProbability(double value)
{
    probability_ = value;
    probabilityIsSet_ = true;
}

bool Attributes_expression::probabilityIsSet() const
{
    return probabilityIsSet_;
}

void Attributes_expression::unsetprobability()
{
    probabilityIsSet_ = false;
}

}
}
}
}
}


