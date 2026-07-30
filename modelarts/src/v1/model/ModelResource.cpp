

#include "huaweicloud/modelarts/v1/model/ModelResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ModelResource::ModelResource()
{
    source_ = "";
    sourceIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
    hostCache_ = false;
    hostCacheIsSet_ = false;
    efsSubPath_ = "";
    efsSubPathIsSet_ = false;
    readOnly_ = false;
    readOnlyIsSet_ = false;
    osWarmUp_ = false;
    osWarmUpIsSet_ = false;
    sourceName_ = "";
    sourceNameIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
}

ModelResource::~ModelResource() = default;

void ModelResource::validate()
{
}

web::json::value ModelResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(mountPathIsSet_) {
        val[utility::conversions::to_string_t("mount_path")] = ModelBase::toJson(mountPath_);
    }
    if(hostCacheIsSet_) {
        val[utility::conversions::to_string_t("host_cache")] = ModelBase::toJson(hostCache_);
    }
    if(efsSubPathIsSet_) {
        val[utility::conversions::to_string_t("efs_sub_path")] = ModelBase::toJson(efsSubPath_);
    }
    if(readOnlyIsSet_) {
        val[utility::conversions::to_string_t("read_only")] = ModelBase::toJson(readOnly_);
    }
    if(osWarmUpIsSet_) {
        val[utility::conversions::to_string_t("os_warm_up")] = ModelBase::toJson(osWarmUp_);
    }
    if(sourceNameIsSet_) {
        val[utility::conversions::to_string_t("source_name")] = ModelBase::toJson(sourceName_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}
bool ModelResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_cache"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostCache(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("efs_sub_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("efs_sub_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEfsSubPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_warm_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_warm_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsWarmUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    return ok;
}


std::string ModelResource::getSource() const
{
    return source_;
}

void ModelResource::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ModelResource::sourceIsSet() const
{
    return sourceIsSet_;
}

void ModelResource::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ModelResource::getAddress() const
{
    return address_;
}

void ModelResource::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ModelResource::addressIsSet() const
{
    return addressIsSet_;
}

void ModelResource::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ModelResource::getMountPath() const
{
    return mountPath_;
}

void ModelResource::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool ModelResource::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void ModelResource::unsetmountPath()
{
    mountPathIsSet_ = false;
}

bool ModelResource::isHostCache() const
{
    return hostCache_;
}

void ModelResource::setHostCache(bool value)
{
    hostCache_ = value;
    hostCacheIsSet_ = true;
}

bool ModelResource::hostCacheIsSet() const
{
    return hostCacheIsSet_;
}

void ModelResource::unsethostCache()
{
    hostCacheIsSet_ = false;
}

std::string ModelResource::getEfsSubPath() const
{
    return efsSubPath_;
}

void ModelResource::setEfsSubPath(const std::string& value)
{
    efsSubPath_ = value;
    efsSubPathIsSet_ = true;
}

bool ModelResource::efsSubPathIsSet() const
{
    return efsSubPathIsSet_;
}

void ModelResource::unsetefsSubPath()
{
    efsSubPathIsSet_ = false;
}

bool ModelResource::isReadOnly() const
{
    return readOnly_;
}

void ModelResource::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool ModelResource::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void ModelResource::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

bool ModelResource::isOsWarmUp() const
{
    return osWarmUp_;
}

void ModelResource::setOsWarmUp(bool value)
{
    osWarmUp_ = value;
    osWarmUpIsSet_ = true;
}

bool ModelResource::osWarmUpIsSet() const
{
    return osWarmUpIsSet_;
}

void ModelResource::unsetosWarmUp()
{
    osWarmUpIsSet_ = false;
}

std::string ModelResource::getSourceName() const
{
    return sourceName_;
}

void ModelResource::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool ModelResource::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void ModelResource::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

std::string ModelResource::getAssetId() const
{
    return assetId_;
}

void ModelResource::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ModelResource::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ModelResource::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


