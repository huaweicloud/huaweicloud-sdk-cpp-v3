

#include "huaweicloud/iotda/v5/model/ServiceCommandPara.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ServiceCommandPara::ServiceCommandPara()
{
    paraName_ = "";
    paraNameIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    enumListIsSet_ = false;
    min_ = "";
    minIsSet_ = false;
    max_ = "";
    maxIsSet_ = false;
    maxLength_ = 0;
    maxLengthIsSet_ = false;
    step_ = 0.0;
    stepIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ServiceCommandPara::~ServiceCommandPara() = default;

void ServiceCommandPara::validate()
{
}

web::json::value ServiceCommandPara::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paraNameIsSet_) {
        val[utility::conversions::to_string_t("para_name")] = ModelBase::toJson(paraName_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }
    if(enumListIsSet_) {
        val[utility::conversions::to_string_t("enum_list")] = ModelBase::toJson(enumList_);
    }
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }
    if(maxIsSet_) {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(max_);
    }
    if(maxLengthIsSet_) {
        val[utility::conversions::to_string_t("max_length")] = ModelBase::toJson(maxLength_);
    }
    if(stepIsSet_) {
        val[utility::conversions::to_string_t("step")] = ModelBase::toJson(step_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ServiceCommandPara::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("para_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("para_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enum_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enum_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnumList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string ServiceCommandPara::getParaName() const
{
    return paraName_;
}

void ServiceCommandPara::setParaName(const std::string& value)
{
    paraName_ = value;
    paraNameIsSet_ = true;
}

bool ServiceCommandPara::paraNameIsSet() const
{
    return paraNameIsSet_;
}

void ServiceCommandPara::unsetparaName()
{
    paraNameIsSet_ = false;
}

std::string ServiceCommandPara::getDataType() const
{
    return dataType_;
}

void ServiceCommandPara::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool ServiceCommandPara::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void ServiceCommandPara::unsetdataType()
{
    dataTypeIsSet_ = false;
}

bool ServiceCommandPara::isRequired() const
{
    return required_;
}

void ServiceCommandPara::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool ServiceCommandPara::requiredIsSet() const
{
    return requiredIsSet_;
}

void ServiceCommandPara::unsetrequired()
{
    requiredIsSet_ = false;
}

std::vector<std::string>& ServiceCommandPara::getEnumList()
{
    return enumList_;
}

void ServiceCommandPara::setEnumList(const std::vector<std::string>& value)
{
    enumList_ = value;
    enumListIsSet_ = true;
}

bool ServiceCommandPara::enumListIsSet() const
{
    return enumListIsSet_;
}

void ServiceCommandPara::unsetenumList()
{
    enumListIsSet_ = false;
}

std::string ServiceCommandPara::getMin() const
{
    return min_;
}

void ServiceCommandPara::setMin(const std::string& value)
{
    min_ = value;
    minIsSet_ = true;
}

bool ServiceCommandPara::minIsSet() const
{
    return minIsSet_;
}

void ServiceCommandPara::unsetmin()
{
    minIsSet_ = false;
}

std::string ServiceCommandPara::getMax() const
{
    return max_;
}

void ServiceCommandPara::setMax(const std::string& value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool ServiceCommandPara::maxIsSet() const
{
    return maxIsSet_;
}

void ServiceCommandPara::unsetmax()
{
    maxIsSet_ = false;
}

int32_t ServiceCommandPara::getMaxLength() const
{
    return maxLength_;
}

void ServiceCommandPara::setMaxLength(int32_t value)
{
    maxLength_ = value;
    maxLengthIsSet_ = true;
}

bool ServiceCommandPara::maxLengthIsSet() const
{
    return maxLengthIsSet_;
}

void ServiceCommandPara::unsetmaxLength()
{
    maxLengthIsSet_ = false;
}

double ServiceCommandPara::getStep() const
{
    return step_;
}

void ServiceCommandPara::setStep(double value)
{
    step_ = value;
    stepIsSet_ = true;
}

bool ServiceCommandPara::stepIsSet() const
{
    return stepIsSet_;
}

void ServiceCommandPara::unsetstep()
{
    stepIsSet_ = false;
}

std::string ServiceCommandPara::getUnit() const
{
    return unit_;
}

void ServiceCommandPara::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ServiceCommandPara::unitIsSet() const
{
    return unitIsSet_;
}

void ServiceCommandPara::unsetunit()
{
    unitIsSet_ = false;
}

std::string ServiceCommandPara::getDescription() const
{
    return description_;
}

void ServiceCommandPara::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceCommandPara::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceCommandPara::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


