

#include "huaweicloud/drs/v3/model/CreateDataCompareTransformationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateDataCompareTransformationInfo::CreateDataCompareTransformationInfo()
{
    transformationType_ = "";
    transformationTypeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CreateDataCompareTransformationInfo::~CreateDataCompareTransformationInfo() = default;

void CreateDataCompareTransformationInfo::validate()
{
}

web::json::value CreateDataCompareTransformationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transformationTypeIsSet_) {
        val[utility::conversions::to_string_t("transformation_type")] = ModelBase::toJson(transformationType_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool CreateDataCompareTransformationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transformation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transformation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransformationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string CreateDataCompareTransformationInfo::getTransformationType() const
{
    return transformationType_;
}

void CreateDataCompareTransformationInfo::setTransformationType(const std::string& value)
{
    transformationType_ = value;
    transformationTypeIsSet_ = true;
}

bool CreateDataCompareTransformationInfo::transformationTypeIsSet() const
{
    return transformationTypeIsSet_;
}

void CreateDataCompareTransformationInfo::unsettransformationType()
{
    transformationTypeIsSet_ = false;
}

std::string CreateDataCompareTransformationInfo::getValue() const
{
    return value_;
}

void CreateDataCompareTransformationInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateDataCompareTransformationInfo::valueIsSet() const
{
    return valueIsSet_;
}

void CreateDataCompareTransformationInfo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


