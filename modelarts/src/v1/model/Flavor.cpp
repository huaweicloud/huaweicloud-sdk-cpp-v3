

#include "huaweicloud/modelarts/v1/model/Flavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Flavor::Flavor()
{
    arch_ = "";
    archIsSet_ = false;
    billingIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    evsMaxSize_ = "";
    evsMaxSizeIsSet_ = false;
    evsSkuCode_ = "";
    evsSkuCodeIsSet_ = false;
    feature_ = "";
    featureIsSet_ = false;
    free_ = false;
    freeIsSet_ = false;
    growSupportType_ = "";
    growSupportTypeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    memory_ = "";
    memoryIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    soldOut_ = false;
    soldOutIsSet_ = false;
    storagesIsSet_ = false;
    vcpus_ = 0;
    vcpusIsSet_ = false;
    gpuIsSet_ = false;
    ascendIsSet_ = false;
}

Flavor::~Flavor() = default;

void Flavor::validate()
{
}

web::json::value Flavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
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
    if(evsMaxSizeIsSet_) {
        val[utility::conversions::to_string_t("evs_max_size")] = ModelBase::toJson(evsMaxSize_);
    }
    if(evsSkuCodeIsSet_) {
        val[utility::conversions::to_string_t("evs_sku_code")] = ModelBase::toJson(evsSkuCode_);
    }
    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }
    if(freeIsSet_) {
        val[utility::conversions::to_string_t("free")] = ModelBase::toJson(free_);
    }
    if(growSupportTypeIsSet_) {
        val[utility::conversions::to_string_t("grow_support_type")] = ModelBase::toJson(growSupportType_);
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
    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(ascendIsSet_) {
        val[utility::conversions::to_string_t("ascend")] = ModelBase::toJson(ascend_);
    }

    return val;
}
bool Flavor::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("grow_support_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grow_support_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrowSupportType(refVal);
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
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu"));
        if(!fieldValue.is_null())
        {
            GPUsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpu(refVal);
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
    return ok;
}


std::string Flavor::getArch() const
{
    return arch_;
}

void Flavor::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool Flavor::archIsSet() const
{
    return archIsSet_;
}

void Flavor::unsetarch()
{
    archIsSet_ = false;
}

BillingInfo Flavor::getBilling() const
{
    return billing_;
}

void Flavor::setBilling(const BillingInfo& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool Flavor::billingIsSet() const
{
    return billingIsSet_;
}

void Flavor::unsetbilling()
{
    billingIsSet_ = false;
}

std::string Flavor::getCategory() const
{
    return category_;
}

void Flavor::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool Flavor::categoryIsSet() const
{
    return categoryIsSet_;
}

void Flavor::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string Flavor::getDescription() const
{
    return description_;
}

void Flavor::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Flavor::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Flavor::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Flavor::getEvsMaxSize() const
{
    return evsMaxSize_;
}

void Flavor::setEvsMaxSize(const std::string& value)
{
    evsMaxSize_ = value;
    evsMaxSizeIsSet_ = true;
}

bool Flavor::evsMaxSizeIsSet() const
{
    return evsMaxSizeIsSet_;
}

void Flavor::unsetevsMaxSize()
{
    evsMaxSizeIsSet_ = false;
}

std::string Flavor::getEvsSkuCode() const
{
    return evsSkuCode_;
}

void Flavor::setEvsSkuCode(const std::string& value)
{
    evsSkuCode_ = value;
    evsSkuCodeIsSet_ = true;
}

bool Flavor::evsSkuCodeIsSet() const
{
    return evsSkuCodeIsSet_;
}

void Flavor::unsetevsSkuCode()
{
    evsSkuCodeIsSet_ = false;
}

std::string Flavor::getFeature() const
{
    return feature_;
}

void Flavor::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool Flavor::featureIsSet() const
{
    return featureIsSet_;
}

void Flavor::unsetfeature()
{
    featureIsSet_ = false;
}

bool Flavor::isFree() const
{
    return free_;
}

void Flavor::setFree(bool value)
{
    free_ = value;
    freeIsSet_ = true;
}

bool Flavor::freeIsSet() const
{
    return freeIsSet_;
}

void Flavor::unsetfree()
{
    freeIsSet_ = false;
}

std::string Flavor::getGrowSupportType() const
{
    return growSupportType_;
}

void Flavor::setGrowSupportType(const std::string& value)
{
    growSupportType_ = value;
    growSupportTypeIsSet_ = true;
}

bool Flavor::growSupportTypeIsSet() const
{
    return growSupportTypeIsSet_;
}

void Flavor::unsetgrowSupportType()
{
    growSupportTypeIsSet_ = false;
}

std::string Flavor::getId() const
{
    return id_;
}

void Flavor::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Flavor::idIsSet() const
{
    return idIsSet_;
}

void Flavor::unsetid()
{
    idIsSet_ = false;
}

std::string Flavor::getMemory() const
{
    return memory_;
}

void Flavor::setMemory(const std::string& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool Flavor::memoryIsSet() const
{
    return memoryIsSet_;
}

void Flavor::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string Flavor::getName() const
{
    return name_;
}

void Flavor::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Flavor::nameIsSet() const
{
    return nameIsSet_;
}

void Flavor::unsetname()
{
    nameIsSet_ = false;
}

bool Flavor::isSoldOut() const
{
    return soldOut_;
}

void Flavor::setSoldOut(bool value)
{
    soldOut_ = value;
    soldOutIsSet_ = true;
}

bool Flavor::soldOutIsSet() const
{
    return soldOutIsSet_;
}

void Flavor::unsetsoldOut()
{
    soldOutIsSet_ = false;
}

std::vector<std::string>& Flavor::getStorages()
{
    return storages_;
}

void Flavor::setStorages(const std::vector<std::string>& value)
{
    storages_ = value;
    storagesIsSet_ = true;
}

bool Flavor::storagesIsSet() const
{
    return storagesIsSet_;
}

void Flavor::unsetstorages()
{
    storagesIsSet_ = false;
}

int32_t Flavor::getVcpus() const
{
    return vcpus_;
}

void Flavor::setVcpus(int32_t value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool Flavor::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void Flavor::unsetvcpus()
{
    vcpusIsSet_ = false;
}

GPUsInfo Flavor::getGpu() const
{
    return gpu_;
}

void Flavor::setGpu(const GPUsInfo& value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool Flavor::gpuIsSet() const
{
    return gpuIsSet_;
}

void Flavor::unsetgpu()
{
    gpuIsSet_ = false;
}

AscendInfo Flavor::getAscend() const
{
    return ascend_;
}

void Flavor::setAscend(const AscendInfo& value)
{
    ascend_ = value;
    ascendIsSet_ = true;
}

bool Flavor::ascendIsSet() const
{
    return ascendIsSet_;
}

void Flavor::unsetascend()
{
    ascendIsSet_ = false;
}

}
}
}
}
}


