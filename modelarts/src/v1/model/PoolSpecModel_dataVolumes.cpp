

#include "huaweicloud/modelarts/v1/model/PoolSpecModel_dataVolumes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecModel_dataVolumes::PoolSpecModel_dataVolumes()
{
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    count_ = "";
    countIsSet_ = false;
    extendParamsIsSet_ = false;
}

PoolSpecModel_dataVolumes::~PoolSpecModel_dataVolumes() = default;

void PoolSpecModel_dataVolumes::validate()
{
}

web::json::value PoolSpecModel_dataVolumes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volumeType")] = ModelBase::toJson(volumeType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(extendParamsIsSet_) {
        val[utility::conversions::to_string_t("extendParams")] = ModelBase::toJson(extendParams_);
    }

    return val;
}
bool PoolSpecModel_dataVolumes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumeType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParams"));
        if(!fieldValue.is_null())
        {
            PoolSpecModel_dataVolumes_extendParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParams(refVal);
        }
    }
    return ok;
}


std::string PoolSpecModel_dataVolumes::getVolumeType() const
{
    return volumeType_;
}

void PoolSpecModel_dataVolumes::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool PoolSpecModel_dataVolumes::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void PoolSpecModel_dataVolumes::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string PoolSpecModel_dataVolumes::getSize() const
{
    return size_;
}

void PoolSpecModel_dataVolumes::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PoolSpecModel_dataVolumes::sizeIsSet() const
{
    return sizeIsSet_;
}

void PoolSpecModel_dataVolumes::unsetsize()
{
    sizeIsSet_ = false;
}

std::string PoolSpecModel_dataVolumes::getCount() const
{
    return count_;
}

void PoolSpecModel_dataVolumes::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PoolSpecModel_dataVolumes::countIsSet() const
{
    return countIsSet_;
}

void PoolSpecModel_dataVolumes::unsetcount()
{
    countIsSet_ = false;
}

PoolSpecModel_dataVolumes_extendParams PoolSpecModel_dataVolumes::getExtendParams() const
{
    return extendParams_;
}

void PoolSpecModel_dataVolumes::setExtendParams(const PoolSpecModel_dataVolumes_extendParams& value)
{
    extendParams_ = value;
    extendParamsIsSet_ = true;
}

bool PoolSpecModel_dataVolumes::extendParamsIsSet() const
{
    return extendParamsIsSet_;
}

void PoolSpecModel_dataVolumes::unsetextendParams()
{
    extendParamsIsSet_ = false;
}

}
}
}
}
}


