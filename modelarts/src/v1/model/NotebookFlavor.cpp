

#include "huaweicloud/modelarts/v1/model/NotebookFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NotebookFlavor::NotebookFlavor()
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
    evsSkuCode_ = "";
    evsSkuCodeIsSet_ = false;
    growSupportType_ = "";
    growSupportTypeIsSet_ = false;
}

NotebookFlavor::~NotebookFlavor() = default;

void NotebookFlavor::validate()
{
}

web::json::value NotebookFlavor::toJson() const
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
    if(evsSkuCodeIsSet_) {
        val[utility::conversions::to_string_t("evs_sku_code")] = ModelBase::toJson(evsSkuCode_);
    }
    if(growSupportTypeIsSet_) {
        val[utility::conversions::to_string_t("grow_support_type")] = ModelBase::toJson(growSupportType_);
    }

    return val;
}
bool NotebookFlavor::fromJson(const web::json::value& val)
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
            AscendInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAscend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            BillingInfo refVal;
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
            GPUInfo refVal;
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
    if(val.has_field(utility::conversions::to_string_t("evs_sku_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evs_sku_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvsSkuCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grow_support_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grow_support_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrowSupportType(refVal);
        }
    }
    return ok;
}


std::string NotebookFlavor::getArch() const
{
    return arch_;
}

void NotebookFlavor::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool NotebookFlavor::archIsSet() const
{
    return archIsSet_;
}

void NotebookFlavor::unsetarch()
{
    archIsSet_ = false;
}

AscendInfo NotebookFlavor::getAscend() const
{
    return ascend_;
}

void NotebookFlavor::setAscend(const AscendInfo& value)
{
    ascend_ = value;
    ascendIsSet_ = true;
}

bool NotebookFlavor::ascendIsSet() const
{
    return ascendIsSet_;
}

void NotebookFlavor::unsetascend()
{
    ascendIsSet_ = false;
}

BillingInfo NotebookFlavor::getBilling() const
{
    return billing_;
}

void NotebookFlavor::setBilling(const BillingInfo& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool NotebookFlavor::billingIsSet() const
{
    return billingIsSet_;
}

void NotebookFlavor::unsetbilling()
{
    billingIsSet_ = false;
}

std::string NotebookFlavor::getCategory() const
{
    return category_;
}

void NotebookFlavor::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool NotebookFlavor::categoryIsSet() const
{
    return categoryIsSet_;
}

void NotebookFlavor::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string NotebookFlavor::getDescription() const
{
    return description_;
}

void NotebookFlavor::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NotebookFlavor::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NotebookFlavor::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NotebookFlavor::getFeature() const
{
    return feature_;
}

void NotebookFlavor::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool NotebookFlavor::featureIsSet() const
{
    return featureIsSet_;
}

void NotebookFlavor::unsetfeature()
{
    featureIsSet_ = false;
}

bool NotebookFlavor::isFree() const
{
    return free_;
}

void NotebookFlavor::setFree(bool value)
{
    free_ = value;
    freeIsSet_ = true;
}

bool NotebookFlavor::freeIsSet() const
{
    return freeIsSet_;
}

void NotebookFlavor::unsetfree()
{
    freeIsSet_ = false;
}

GPUInfo NotebookFlavor::getGpu() const
{
    return gpu_;
}

void NotebookFlavor::setGpu(const GPUInfo& value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool NotebookFlavor::gpuIsSet() const
{
    return gpuIsSet_;
}

void NotebookFlavor::unsetgpu()
{
    gpuIsSet_ = false;
}

std::string NotebookFlavor::getId() const
{
    return id_;
}

void NotebookFlavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NotebookFlavor::idIsSet() const
{
    return idIsSet_;
}

void NotebookFlavor::unsetid()
{
    idIsSet_ = false;
}

int64_t NotebookFlavor::getMemory() const
{
    return memory_;
}

void NotebookFlavor::setMemory(int64_t value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool NotebookFlavor::memoryIsSet() const
{
    return memoryIsSet_;
}

void NotebookFlavor::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string NotebookFlavor::getName() const
{
    return name_;
}

void NotebookFlavor::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NotebookFlavor::nameIsSet() const
{
    return nameIsSet_;
}

void NotebookFlavor::unsetname()
{
    nameIsSet_ = false;
}

bool NotebookFlavor::isSoldOut() const
{
    return soldOut_;
}

void NotebookFlavor::setSoldOut(bool value)
{
    soldOut_ = value;
    soldOutIsSet_ = true;
}

bool NotebookFlavor::soldOutIsSet() const
{
    return soldOutIsSet_;
}

void NotebookFlavor::unsetsoldOut()
{
    soldOutIsSet_ = false;
}

std::vector<std::string>& NotebookFlavor::getStorages()
{
    return storages_;
}

void NotebookFlavor::setStorages(const std::vector<std::string>& value)
{
    storages_ = value;
    storagesIsSet_ = true;
}

bool NotebookFlavor::storagesIsSet() const
{
    return storagesIsSet_;
}

void NotebookFlavor::unsetstorages()
{
    storagesIsSet_ = false;
}

int32_t NotebookFlavor::getVcpus() const
{
    return vcpus_;
}

void NotebookFlavor::setVcpus(int32_t value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool NotebookFlavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void NotebookFlavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string NotebookFlavor::getEvsMaxSize() const
{
    return evsMaxSize_;
}

void NotebookFlavor::setEvsMaxSize(const std::string& value)
{
    evsMaxSize_ = value;
    evsMaxSizeIsSet_ = true;
}

bool NotebookFlavor::evsMaxSizeIsSet() const
{
    return evsMaxSizeIsSet_;
}

void NotebookFlavor::unsetevsMaxSize()
{
    evsMaxSizeIsSet_ = false;
}

std::string NotebookFlavor::getEvsSkuCode() const
{
    return evsSkuCode_;
}

void NotebookFlavor::setEvsSkuCode(const std::string& value)
{
    evsSkuCode_ = value;
    evsSkuCodeIsSet_ = true;
}

bool NotebookFlavor::evsSkuCodeIsSet() const
{
    return evsSkuCodeIsSet_;
}

void NotebookFlavor::unsetevsSkuCode()
{
    evsSkuCodeIsSet_ = false;
}

std::string NotebookFlavor::getGrowSupportType() const
{
    return growSupportType_;
}

void NotebookFlavor::setGrowSupportType(const std::string& value)
{
    growSupportType_ = value;
    growSupportTypeIsSet_ = true;
}

bool NotebookFlavor::growSupportTypeIsSet() const
{
    return growSupportTypeIsSet_;
}

void NotebookFlavor::unsetgrowSupportType()
{
    growSupportTypeIsSet_ = false;
}

}
}
}
}
}


