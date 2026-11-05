

#include "huaweicloud/rds/v3/model/SupabaseVolumeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseVolumeConfig::SupabaseVolumeConfig()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

SupabaseVolumeConfig::~SupabaseVolumeConfig() = default;

void SupabaseVolumeConfig::validate()
{
}

web::json::value SupabaseVolumeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool SupabaseVolumeConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string SupabaseVolumeConfig::getType() const
{
    return type_;
}

void SupabaseVolumeConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SupabaseVolumeConfig::typeIsSet() const
{
    return typeIsSet_;
}

void SupabaseVolumeConfig::unsettype()
{
    typeIsSet_ = false;
}

int32_t SupabaseVolumeConfig::getSize() const
{
    return size_;
}

void SupabaseVolumeConfig::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SupabaseVolumeConfig::sizeIsSet() const
{
    return sizeIsSet_;
}

void SupabaseVolumeConfig::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


