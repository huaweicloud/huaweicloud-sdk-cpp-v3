

#include "huaweicloud/modelarts/v1/model/Npu.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Npu::Npu()
{
    unitNum_ = "";
    unitNumIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
    memory_ = "";
    memoryIsSet_ = false;
}

Npu::~Npu() = default;

void Npu::validate()
{
}

web::json::value Npu::toJson() const
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
bool Npu::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("unit_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string Npu::getUnitNum() const
{
    return unitNum_;
}

void Npu::setUnitNum(const std::string& value)
{
    unitNum_ = value;
    unitNumIsSet_ = true;
}

bool Npu::unitNumIsSet() const
{
    return unitNumIsSet_;
}

void Npu::unsetunitNum()
{
    unitNumIsSet_ = false;
}

std::string Npu::getProductName() const
{
    return productName_;
}

void Npu::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool Npu::productNameIsSet() const
{
    return productNameIsSet_;
}

void Npu::unsetproductName()
{
    productNameIsSet_ = false;
}

std::string Npu::getMemory() const
{
    return memory_;
}

void Npu::setMemory(const std::string& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool Npu::memoryIsSet() const
{
    return memoryIsSet_;
}

void Npu::unsetmemory()
{
    memoryIsSet_ = false;
}

}
}
}
}
}


