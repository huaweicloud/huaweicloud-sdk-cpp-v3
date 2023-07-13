

#include "huaweicloud/drs/v3/model/TransformationInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




TransformationInfo::TransformationInfo()
{
    transformationType_ = "";
    transformationTypeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TransformationInfo::~TransformationInfo() = default;

void TransformationInfo::validate()
{
}

web::json::value TransformationInfo::toJson() const
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

bool TransformationInfo::fromJson(const web::json::value& val)
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

std::string TransformationInfo::getTransformationType() const
{
    return transformationType_;
}

void TransformationInfo::setTransformationType(const std::string& value)
{
    transformationType_ = value;
    transformationTypeIsSet_ = true;
}

bool TransformationInfo::transformationTypeIsSet() const
{
    return transformationTypeIsSet_;
}

void TransformationInfo::unsettransformationType()
{
    transformationTypeIsSet_ = false;
}

std::string TransformationInfo::getValue() const
{
    return value_;
}

void TransformationInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TransformationInfo::valueIsSet() const
{
    return valueIsSet_;
}

void TransformationInfo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


