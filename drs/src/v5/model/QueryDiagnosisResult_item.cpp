

#include "huaweicloud/drs/v5/model/QueryDiagnosisResult_item.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryDiagnosisResult_item::QueryDiagnosisResult_item()
{
    category_ = "";
    categoryIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    weight_ = 0.0;
    weightIsSet_ = false;
}

QueryDiagnosisResult_item::~QueryDiagnosisResult_item() = default;

void QueryDiagnosisResult_item::validate()
{
}

web::json::value QueryDiagnosisResult_item::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }

    return val;
}
bool QueryDiagnosisResult_item::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    return ok;
}


std::string QueryDiagnosisResult_item::getCategory() const
{
    return category_;
}

void QueryDiagnosisResult_item::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool QueryDiagnosisResult_item::categoryIsSet() const
{
    return categoryIsSet_;
}

void QueryDiagnosisResult_item::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string QueryDiagnosisResult_item::getName() const
{
    return name_;
}

void QueryDiagnosisResult_item::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryDiagnosisResult_item::nameIsSet() const
{
    return nameIsSet_;
}

void QueryDiagnosisResult_item::unsetname()
{
    nameIsSet_ = false;
}

double QueryDiagnosisResult_item::getWeight() const
{
    return weight_;
}

void QueryDiagnosisResult_item::setWeight(double value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool QueryDiagnosisResult_item::weightIsSet() const
{
    return weightIsSet_;
}

void QueryDiagnosisResult_item::unsetweight()
{
    weightIsSet_ = false;
}

}
}
}
}
}


