

#include "huaweicloud/modelarts/v1/model/EvsVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




EvsVolume::EvsVolume()
{
    size_ = 0;
    sizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

EvsVolume::~EvsVolume() = default;

void EvsVolume::validate()
{
}

web::json::value EvsVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool EvsVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int32_t EvsVolume::getSize() const
{
    return size_;
}

void EvsVolume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool EvsVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void EvsVolume::unsetsize()
{
    sizeIsSet_ = false;
}

std::string EvsVolume::getType() const
{
    return type_;
}

void EvsVolume::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EvsVolume::typeIsSet() const
{
    return typeIsSet_;
}

void EvsVolume::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


