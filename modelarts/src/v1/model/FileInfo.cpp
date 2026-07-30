

#include "huaweicloud/modelarts/v1/model/FileInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FileInfo::FileInfo()
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
}

FileInfo::~FileInfo() = default;

void FileInfo::validate()
{
}

web::json::value FileInfo::toJson() const
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

    return val;
}
bool FileInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string FileInfo::getSource() const
{
    return source_;
}

void FileInfo::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool FileInfo::sourceIsSet() const
{
    return sourceIsSet_;
}

void FileInfo::unsetsource()
{
    sourceIsSet_ = false;
}

std::string FileInfo::getAddress() const
{
    return address_;
}

void FileInfo::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool FileInfo::addressIsSet() const
{
    return addressIsSet_;
}

void FileInfo::unsetaddress()
{
    addressIsSet_ = false;
}

std::string FileInfo::getMountPath() const
{
    return mountPath_;
}

void FileInfo::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool FileInfo::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void FileInfo::unsetmountPath()
{
    mountPathIsSet_ = false;
}

bool FileInfo::isHostCache() const
{
    return hostCache_;
}

void FileInfo::setHostCache(bool value)
{
    hostCache_ = value;
    hostCacheIsSet_ = true;
}

bool FileInfo::hostCacheIsSet() const
{
    return hostCacheIsSet_;
}

void FileInfo::unsethostCache()
{
    hostCacheIsSet_ = false;
}

std::string FileInfo::getEfsSubPath() const
{
    return efsSubPath_;
}

void FileInfo::setEfsSubPath(const std::string& value)
{
    efsSubPath_ = value;
    efsSubPathIsSet_ = true;
}

bool FileInfo::efsSubPathIsSet() const
{
    return efsSubPathIsSet_;
}

void FileInfo::unsetefsSubPath()
{
    efsSubPathIsSet_ = false;
}

bool FileInfo::isReadOnly() const
{
    return readOnly_;
}

void FileInfo::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool FileInfo::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void FileInfo::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

bool FileInfo::isOsWarmUp() const
{
    return osWarmUp_;
}

void FileInfo::setOsWarmUp(bool value)
{
    osWarmUp_ = value;
    osWarmUpIsSet_ = true;
}

bool FileInfo::osWarmUpIsSet() const
{
    return osWarmUpIsSet_;
}

void FileInfo::unsetosWarmUp()
{
    osWarmUpIsSet_ = false;
}

std::string FileInfo::getSourceName() const
{
    return sourceName_;
}

void FileInfo::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool FileInfo::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void FileInfo::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

}
}
}
}
}


