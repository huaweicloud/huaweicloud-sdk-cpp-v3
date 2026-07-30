

#include "huaweicloud/modelarts/v1/model/ResourceFlavorSpec_npu.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavorSpec_npu::ResourceFlavorSpec_npu()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

ResourceFlavorSpec_npu::~ResourceFlavorSpec_npu() = default;

void ResourceFlavorSpec_npu::validate()
{
}

web::json::value ResourceFlavorSpec_npu::toJson() const
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
bool ResourceFlavorSpec_npu::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string ResourceFlavorSpec_npu::getType() const
{
    return type_;
}

void ResourceFlavorSpec_npu::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourceFlavorSpec_npu::typeIsSet() const
{
    return typeIsSet_;
}

void ResourceFlavorSpec_npu::unsettype()
{
    typeIsSet_ = false;
}

std::string ResourceFlavorSpec_npu::getSize() const
{
    return size_;
}

void ResourceFlavorSpec_npu::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ResourceFlavorSpec_npu::sizeIsSet() const
{
    return sizeIsSet_;
}

void ResourceFlavorSpec_npu::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


