

#include "huaweicloud/lts/v2/model/FieldModel.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




FieldModel::FieldModel()
{
    fieldName_ = "";
    fieldNameIsSet_ = false;
    isAnalysis_ = false;
    isAnalysisIsSet_ = false;
}

FieldModel::~FieldModel() = default;

void FieldModel::validate()
{
}

web::json::value FieldModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("field_name")] = ModelBase::toJson(fieldName_);
    }
    if(isAnalysisIsSet_) {
        val[utility::conversions::to_string_t("is_analysis")] = ModelBase::toJson(isAnalysis_);
    }

    return val;
}

bool FieldModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("field_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_analysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_analysis"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAnalysis(refVal);
        }
    }
    return ok;
}

std::string FieldModel::getFieldName() const
{
    return fieldName_;
}

void FieldModel::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool FieldModel::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void FieldModel::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

bool FieldModel::isIsAnalysis() const
{
    return isAnalysis_;
}

void FieldModel::setIsAnalysis(bool value)
{
    isAnalysis_ = value;
    isAnalysisIsSet_ = true;
}

bool FieldModel::isAnalysisIsSet() const
{
    return isAnalysisIsSet_;
}

void FieldModel::unsetisAnalysis()
{
    isAnalysisIsSet_ = false;
}

}
}
}
}
}


