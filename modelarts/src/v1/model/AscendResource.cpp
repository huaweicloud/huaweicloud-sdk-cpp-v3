

#include "huaweicloud/modelarts/v1/model/AscendResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AscendResource::AscendResource()
{
    npu_ = 0;
    npuIsSet_ = false;
    npuMemory_ = "";
    npuMemoryIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    aiCore_ = "";
    aiCoreIsSet_ = false;
    aiCpu_ = "";
    aiCpuIsSet_ = false;
}

AscendResource::~AscendResource() = default;

void AscendResource::validate()
{
}

web::json::value AscendResource::toJson() const
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
    if(aiCoreIsSet_) {
        val[utility::conversions::to_string_t("ai_core")] = ModelBase::toJson(aiCore_);
    }
    if(aiCpuIsSet_) {
        val[utility::conversions::to_string_t("ai_cpu")] = ModelBase::toJson(aiCpu_);
    }

    return val;
}
bool AscendResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ai_core"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ai_core"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAiCore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ai_cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ai_cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAiCpu(refVal);
        }
    }
    return ok;
}


int32_t AscendResource::getNpu() const
{
    return npu_;
}

void AscendResource::setNpu(int32_t value)
{
    npu_ = value;
    npuIsSet_ = true;
}

bool AscendResource::npuIsSet() const
{
    return npuIsSet_;
}

void AscendResource::unsetnpu()
{
    npuIsSet_ = false;
}

std::string AscendResource::getNpuMemory() const
{
    return npuMemory_;
}

void AscendResource::setNpuMemory(const std::string& value)
{
    npuMemory_ = value;
    npuMemoryIsSet_ = true;
}

bool AscendResource::npuMemoryIsSet() const
{
    return npuMemoryIsSet_;
}

void AscendResource::unsetnpuMemory()
{
    npuMemoryIsSet_ = false;
}

std::string AscendResource::getType() const
{
    return type_;
}

void AscendResource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AscendResource::typeIsSet() const
{
    return typeIsSet_;
}

void AscendResource::unsettype()
{
    typeIsSet_ = false;
}

std::string AscendResource::getAiCore() const
{
    return aiCore_;
}

void AscendResource::setAiCore(const std::string& value)
{
    aiCore_ = value;
    aiCoreIsSet_ = true;
}

bool AscendResource::aiCoreIsSet() const
{
    return aiCoreIsSet_;
}

void AscendResource::unsetaiCore()
{
    aiCoreIsSet_ = false;
}

std::string AscendResource::getAiCpu() const
{
    return aiCpu_;
}

void AscendResource::setAiCpu(const std::string& value)
{
    aiCpu_ = value;
    aiCpuIsSet_ = true;
}

bool AscendResource::aiCpuIsSet() const
{
    return aiCpuIsSet_;
}

void AscendResource::unsetaiCpu()
{
    aiCpuIsSet_ = false;
}

}
}
}
}
}


