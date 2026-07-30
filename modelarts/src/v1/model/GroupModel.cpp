

#include "huaweicloud/modelarts/v1/model/GroupModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GroupModel::GroupModel()
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

GroupModel::~GroupModel() = default;

void GroupModel::validate()
{
}

web::json::value GroupModel::toJson() const
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
bool GroupModel::fromJson(const web::json::value& val)
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


std::string GroupModel::getSource() const
{
    return source_;
}

void GroupModel::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool GroupModel::sourceIsSet() const
{
    return sourceIsSet_;
}

void GroupModel::unsetsource()
{
    sourceIsSet_ = false;
}

std::string GroupModel::getAddress() const
{
    return address_;
}

void GroupModel::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool GroupModel::addressIsSet() const
{
    return addressIsSet_;
}

void GroupModel::unsetaddress()
{
    addressIsSet_ = false;
}

std::string GroupModel::getMountPath() const
{
    return mountPath_;
}

void GroupModel::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool GroupModel::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void GroupModel::unsetmountPath()
{
    mountPathIsSet_ = false;
}

bool GroupModel::isHostCache() const
{
    return hostCache_;
}

void GroupModel::setHostCache(bool value)
{
    hostCache_ = value;
    hostCacheIsSet_ = true;
}

bool GroupModel::hostCacheIsSet() const
{
    return hostCacheIsSet_;
}

void GroupModel::unsethostCache()
{
    hostCacheIsSet_ = false;
}

std::string GroupModel::getEfsSubPath() const
{
    return efsSubPath_;
}

void GroupModel::setEfsSubPath(const std::string& value)
{
    efsSubPath_ = value;
    efsSubPathIsSet_ = true;
}

bool GroupModel::efsSubPathIsSet() const
{
    return efsSubPathIsSet_;
}

void GroupModel::unsetefsSubPath()
{
    efsSubPathIsSet_ = false;
}

bool GroupModel::isReadOnly() const
{
    return readOnly_;
}

void GroupModel::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool GroupModel::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void GroupModel::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

bool GroupModel::isOsWarmUp() const
{
    return osWarmUp_;
}

void GroupModel::setOsWarmUp(bool value)
{
    osWarmUp_ = value;
    osWarmUpIsSet_ = true;
}

bool GroupModel::osWarmUpIsSet() const
{
    return osWarmUpIsSet_;
}

void GroupModel::unsetosWarmUp()
{
    osWarmUpIsSet_ = false;
}

std::string GroupModel::getSourceName() const
{
    return sourceName_;
}

void GroupModel::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool GroupModel::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void GroupModel::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

std::string GroupModel::getAssetId() const
{
    return assetId_;
}

void GroupModel::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool GroupModel::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void GroupModel::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


