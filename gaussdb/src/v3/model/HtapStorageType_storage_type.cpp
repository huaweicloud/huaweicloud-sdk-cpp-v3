

#include "huaweicloud/gaussdb/v3/model/HtapStorageType_storage_type.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapStorageType_storage_type::HtapStorageType_storage_type()
{
    name_ = "";
    nameIsSet_ = false;
    azStatusIsSet_ = false;
    minVolumeSize_ = 0;
    minVolumeSizeIsSet_ = false;
}

HtapStorageType_storage_type::~HtapStorageType_storage_type() = default;

void HtapStorageType_storage_type::validate()
{
}

web::json::value HtapStorageType_storage_type::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(azStatusIsSet_) {
        val[utility::conversions::to_string_t("az_status")] = ModelBase::toJson(azStatus_);
    }
    if(minVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("min_volume_size")] = ModelBase::toJson(minVolumeSize_);
    }

    return val;
}
bool HtapStorageType_storage_type::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVolumeSize(refVal);
        }
    }
    return ok;
}


std::string HtapStorageType_storage_type::getName() const
{
    return name_;
}

void HtapStorageType_storage_type::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HtapStorageType_storage_type::nameIsSet() const
{
    return nameIsSet_;
}

void HtapStorageType_storage_type::unsetname()
{
    nameIsSet_ = false;
}

std::map<std::string, std::string>& HtapStorageType_storage_type::getAzStatus()
{
    return azStatus_;
}

void HtapStorageType_storage_type::setAzStatus(const std::map<std::string, std::string>& value)
{
    azStatus_ = value;
    azStatusIsSet_ = true;
}

bool HtapStorageType_storage_type::azStatusIsSet() const
{
    return azStatusIsSet_;
}

void HtapStorageType_storage_type::unsetazStatus()
{
    azStatusIsSet_ = false;
}

int32_t HtapStorageType_storage_type::getMinVolumeSize() const
{
    return minVolumeSize_;
}

void HtapStorageType_storage_type::setMinVolumeSize(int32_t value)
{
    minVolumeSize_ = value;
    minVolumeSizeIsSet_ = true;
}

bool HtapStorageType_storage_type::minVolumeSizeIsSet() const
{
    return minVolumeSizeIsSet_;
}

void HtapStorageType_storage_type::unsetminVolumeSize()
{
    minVolumeSizeIsSet_ = false;
}

}
}
}
}
}


