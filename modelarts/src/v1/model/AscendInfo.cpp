

#include "huaweicloud/modelarts/v1/model/AscendInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AscendInfo::AscendInfo()
{
    npu_ = 0;
    npuIsSet_ = false;
    npuMemory_ = "";
    npuMemoryIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    chip_ = 0;
    chipIsSet_ = false;
}

AscendInfo::~AscendInfo() = default;

void AscendInfo::validate()
{
}

web::json::value AscendInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(npuIsSet_) {
        val[utility::conversions::to_string_t("npu")] = ModelBase::toJson(npu_);
    }
    if(npuMemoryIsSet_) {
        val[utility::conversions::to_string_t("npu_memory")] = ModelBase::toJson(npuMemory_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(chipIsSet_) {
        val[utility::conversions::to_string_t("chip")] = ModelBase::toJson(chip_);
    }

    return val;
}
bool AscendInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("npu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npu"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npu_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npu_memory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpuMemory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("chip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chip"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChip(refVal);
        }
    }
    return ok;
}


int32_t AscendInfo::getNpu() const
{
    return npu_;
}

void AscendInfo::setNpu(int32_t value)
{
    npu_ = value;
    npuIsSet_ = true;
}

bool AscendInfo::npuIsSet() const
{
    return npuIsSet_;
}

void AscendInfo::unsetnpu()
{
    npuIsSet_ = false;
}

std::string AscendInfo::getNpuMemory() const
{
    return npuMemory_;
}

void AscendInfo::setNpuMemory(const std::string& value)
{
    npuMemory_ = value;
    npuMemoryIsSet_ = true;
}

bool AscendInfo::npuMemoryIsSet() const
{
    return npuMemoryIsSet_;
}

void AscendInfo::unsetnpuMemory()
{
    npuMemoryIsSet_ = false;
}

std::string AscendInfo::getType() const
{
    return type_;
}

void AscendInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AscendInfo::typeIsSet() const
{
    return typeIsSet_;
}

void AscendInfo::unsettype()
{
    typeIsSet_ = false;
}

int32_t AscendInfo::getChip() const
{
    return chip_;
}

void AscendInfo::setChip(int32_t value)
{
    chip_ = value;
    chipIsSet_ = true;
}

bool AscendInfo::chipIsSet() const
{
    return chipIsSet_;
}

void AscendInfo::unsetchip()
{
    chipIsSet_ = false;
}

}
}
}
}
}


