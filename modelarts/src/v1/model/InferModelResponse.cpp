

#include "huaweicloud/modelarts/v1/model/InferModelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InferModelResponse::InferModelResponse()
{
    source_ = "";
    sourceIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    sourceId_ = "";
    sourceIdIsSet_ = false;
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

InferModelResponse::~InferModelResponse() = default;

void InferModelResponse::validate()
{
}

web::json::value InferModelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
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
bool InferModelResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
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


std::string InferModelResponse::getSource() const
{
    return source_;
}

void InferModelResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool InferModelResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void InferModelResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string InferModelResponse::getAddress() const
{
    return address_;
}

void InferModelResponse::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool InferModelResponse::addressIsSet() const
{
    return addressIsSet_;
}

void InferModelResponse::unsetaddress()
{
    addressIsSet_ = false;
}

std::string InferModelResponse::getSourceId() const
{
    return sourceId_;
}

void InferModelResponse::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool InferModelResponse::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void InferModelResponse::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string InferModelResponse::getMountPath() const
{
    return mountPath_;
}

void InferModelResponse::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool InferModelResponse::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void InferModelResponse::unsetmountPath()
{
    mountPathIsSet_ = false;
}

bool InferModelResponse::isHostCache() const
{
    return hostCache_;
}

void InferModelResponse::setHostCache(bool value)
{
    hostCache_ = value;
    hostCacheIsSet_ = true;
}

bool InferModelResponse::hostCacheIsSet() const
{
    return hostCacheIsSet_;
}

void InferModelResponse::unsethostCache()
{
    hostCacheIsSet_ = false;
}

std::string InferModelResponse::getEfsSubPath() const
{
    return efsSubPath_;
}

void InferModelResponse::setEfsSubPath(const std::string& value)
{
    efsSubPath_ = value;
    efsSubPathIsSet_ = true;
}

bool InferModelResponse::efsSubPathIsSet() const
{
    return efsSubPathIsSet_;
}

void InferModelResponse::unsetefsSubPath()
{
    efsSubPathIsSet_ = false;
}

bool InferModelResponse::isReadOnly() const
{
    return readOnly_;
}

void InferModelResponse::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool InferModelResponse::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void InferModelResponse::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

bool InferModelResponse::isOsWarmUp() const
{
    return osWarmUp_;
}

void InferModelResponse::setOsWarmUp(bool value)
{
    osWarmUp_ = value;
    osWarmUpIsSet_ = true;
}

bool InferModelResponse::osWarmUpIsSet() const
{
    return osWarmUpIsSet_;
}

void InferModelResponse::unsetosWarmUp()
{
    osWarmUpIsSet_ = false;
}

std::string InferModelResponse::getSourceName() const
{
    return sourceName_;
}

void InferModelResponse::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool InferModelResponse::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void InferModelResponse::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

std::string InferModelResponse::getAssetId() const
{
    return assetId_;
}

void InferModelResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool InferModelResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void InferModelResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


