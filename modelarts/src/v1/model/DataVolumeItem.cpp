

#include "huaweicloud/modelarts/v1/model/DataVolumeItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DataVolumeItem::DataVolumeItem()
{
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    extendParamsIsSet_ = false;
}

DataVolumeItem::~DataVolumeItem() = default;

void DataVolumeItem::validate()
{
}

web::json::value DataVolumeItem::toJson() const
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
bool DataVolumeItem::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParams"));
        if(!fieldValue.is_null())
        {
            VolumeExtendParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParams(refVal);
        }
    }
    return ok;
}


std::string DataVolumeItem::getVolumeType() const
{
    return volumeType_;
}

void DataVolumeItem::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool DataVolumeItem::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void DataVolumeItem::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string DataVolumeItem::getSize() const
{
    return size_;
}

void DataVolumeItem::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool DataVolumeItem::sizeIsSet() const
{
    return sizeIsSet_;
}

void DataVolumeItem::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t DataVolumeItem::getCount() const
{
    return count_;
}

void DataVolumeItem::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool DataVolumeItem::countIsSet() const
{
    return countIsSet_;
}

void DataVolumeItem::unsetcount()
{
    countIsSet_ = false;
}

VolumeExtendParams DataVolumeItem::getExtendParams() const
{
    return extendParams_;
}

void DataVolumeItem::setExtendParams(const VolumeExtendParams& value)
{
    extendParams_ = value;
    extendParamsIsSet_ = true;
}

bool DataVolumeItem::extendParamsIsSet() const
{
    return extendParamsIsSet_;
}

void DataVolumeItem::unsetextendParams()
{
    extendParamsIsSet_ = false;
}

}
}
}
}
}


