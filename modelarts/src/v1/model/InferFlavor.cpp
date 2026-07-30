

#include "huaweicloud/modelarts/v1/model/InferFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InferFlavor::InferFlavor()
{
    arch_ = "";
    archIsSet_ = false;
    ascendIsSet_ = false;
    billingIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    feature_ = "";
    featureIsSet_ = false;
    free_ = false;
    freeIsSet_ = false;
    gpuIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    memory_ = 0L;
    memoryIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    soldOut_ = false;
    soldOutIsSet_ = false;
    storagesIsSet_ = false;
    vcpus_ = 0;
    vcpusIsSet_ = false;
    evsMaxSize_ = "";
    evsMaxSizeIsSet_ = false;
}

InferFlavor::~InferFlavor() = default;

void InferFlavor::validate()
{
}

web::json::value InferFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(ascendIsSet_) {
        val[utility::conversions::to_string_t("ascend")] = ModelBase::toJson(ascend_);
    }
    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }
    if(freeIsSet_) {
        val[utility::conversions::to_string_t("free")] = ModelBase::toJson(free_);
    }
    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(soldOutIsSet_) {
        val[utility::conversions::to_string_t("sold_out")] = ModelBase::toJson(soldOut_);
    }
    if(storagesIsSet_) {
        val[utility::conversions::to_string_t("storages")] = ModelBase::toJson(storages_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(evsMaxSizeIsSet_) {
        val[utility::conversions::to_string_t("evs_max_size")] = ModelBase::toJson(evsMaxSize_);
    }

    return val;
}
bool InferFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ascend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ascend"));
        if(!fieldValue.is_null())
        {
            AscendResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAscend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            BillingResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBilling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("free"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFree(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu"));
        if(!fieldValue.is_null())
        {
            GPUResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sold_out"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sold_out"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSoldOut(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storages"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("evs_max_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evs_max_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvsMaxSize(refVal);
        }
    }
    return ok;
}


std::string InferFlavor::getArch() const
{
    return arch_;
}

void InferFlavor::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool InferFlavor::archIsSet() const
{
    return archIsSet_;
}

void InferFlavor::unsetarch()
{
    archIsSet_ = false;
}

AscendResource InferFlavor::getAscend() const
{
    return ascend_;
}

void InferFlavor::setAscend(const AscendResource& value)
{
    ascend_ = value;
    ascendIsSet_ = true;
}

bool InferFlavor::ascendIsSet() const
{
    return ascendIsSet_;
}

void InferFlavor::unsetascend()
{
    ascendIsSet_ = false;
}

BillingResource InferFlavor::getBilling() const
{
    return billing_;
}

void InferFlavor::setBilling(const BillingResource& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool InferFlavor::billingIsSet() const
{
    return billingIsSet_;
}

void InferFlavor::unsetbilling()
{
    billingIsSet_ = false;
}

std::string InferFlavor::getCategory() const
{
    return category_;
}

void InferFlavor::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool InferFlavor::categoryIsSet() const
{
    return categoryIsSet_;
}

void InferFlavor::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string InferFlavor::getDescription() const
{
    return description_;
}

void InferFlavor::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool InferFlavor::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void InferFlavor::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string InferFlavor::getFeature() const
{
    return feature_;
}

void InferFlavor::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool InferFlavor::featureIsSet() const
{
    return featureIsSet_;
}

void InferFlavor::unsetfeature()
{
    featureIsSet_ = false;
}

bool InferFlavor::isFree() const
{
    return free_;
}

void InferFlavor::setFree(bool value)
{
    free_ = value;
    freeIsSet_ = true;
}

bool InferFlavor::freeIsSet() const
{
    return freeIsSet_;
}

void InferFlavor::unsetfree()
{
    freeIsSet_ = false;
}

GPUResource InferFlavor::getGpu() const
{
    return gpu_;
}

void InferFlavor::setGpu(const GPUResource& value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool InferFlavor::gpuIsSet() const
{
    return gpuIsSet_;
}

void InferFlavor::unsetgpu()
{
    gpuIsSet_ = false;
}

std::string InferFlavor::getId() const
{
    return id_;
}

void InferFlavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InferFlavor::idIsSet() const
{
    return idIsSet_;
}

void InferFlavor::unsetid()
{
    idIsSet_ = false;
}

int64_t InferFlavor::getMemory() const
{
    return memory_;
}

void InferFlavor::setMemory(int64_t value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool InferFlavor::memoryIsSet() const
{
    return memoryIsSet_;
}

void InferFlavor::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string InferFlavor::getName() const
{
    return name_;
}

void InferFlavor::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InferFlavor::nameIsSet() const
{
    return nameIsSet_;
}

void InferFlavor::unsetname()
{
    nameIsSet_ = false;
}

bool InferFlavor::isSoldOut() const
{
    return soldOut_;
}

void InferFlavor::setSoldOut(bool value)
{
    soldOut_ = value;
    soldOutIsSet_ = true;
}

bool InferFlavor::soldOutIsSet() const
{
    return soldOutIsSet_;
}

void InferFlavor::unsetsoldOut()
{
    soldOutIsSet_ = false;
}

std::vector<std::string>& InferFlavor::getStorages()
{
    return storages_;
}

void InferFlavor::setStorages(const std::vector<std::string>& value)
{
    storages_ = value;
    storagesIsSet_ = true;
}

bool InferFlavor::storagesIsSet() const
{
    return storagesIsSet_;
}

void InferFlavor::unsetstorages()
{
    storagesIsSet_ = false;
}

int32_t InferFlavor::getVcpus() const
{
    return vcpus_;
}

void InferFlavor::setVcpus(int32_t value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool InferFlavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void InferFlavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string InferFlavor::getEvsMaxSize() const
{
    return evsMaxSize_;
}

void InferFlavor::setEvsMaxSize(const std::string& value)
{
    evsMaxSize_ = value;
    evsMaxSizeIsSet_ = true;
}

bool InferFlavor::evsMaxSizeIsSet() const
{
    return evsMaxSizeIsSet_;
}

void InferFlavor::unsetevsMaxSize()
{
    evsMaxSizeIsSet_ = false;
}

}
}
}
}
}


