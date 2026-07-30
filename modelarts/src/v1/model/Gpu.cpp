

#include "huaweicloud/modelarts/v1/model/Gpu.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Gpu::Gpu()
{
    unitNum_ = 0;
    unitNumIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
    memory_ = "";
    memoryIsSet_ = false;
}

Gpu::~Gpu() = default;

void Gpu::validate()
{
}

web::json::value Gpu::toJson() const
{
    web::json::value val = web::json::value::object();

    if(unitNumIsSet_) {
        val[utility::conversions::to_string_t("unit_num")] = ModelBase::toJson(unitNum_);
    }
    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }

    return val;
}
bool Gpu::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("unit_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnitNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemory(refVal);
        }
    }
    return ok;
}


int32_t Gpu::getUnitNum() const
{
    return unitNum_;
}

void Gpu::setUnitNum(int32_t value)
{
    unitNum_ = value;
    unitNumIsSet_ = true;
}

bool Gpu::unitNumIsSet() const
{
    return unitNumIsSet_;
}

void Gpu::unsetunitNum()
{
    unitNumIsSet_ = false;
}

std::string Gpu::getProductName() const
{
    return productName_;
}

void Gpu::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool Gpu::productNameIsSet() const
{
    return productNameIsSet_;
}

void Gpu::unsetproductName()
{
    productNameIsSet_ = false;
}

std::string Gpu::getMemory() const
{
    return memory_;
}

void Gpu::setMemory(const std::string& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool Gpu::memoryIsSet() const
{
    return memoryIsSet_;
}

void Gpu::unsetmemory()
{
    memoryIsSet_ = false;
}

}
}
}
}
}


