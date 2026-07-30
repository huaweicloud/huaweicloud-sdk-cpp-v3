

#include "huaweicloud/modelarts/v1/model/FileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FileResponse::FileResponse()
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

FileResponse::~FileResponse() = default;

void FileResponse::validate()
{
}

web::json::value FileResponse::toJson() const
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
bool FileResponse::fromJson(const web::json::value& val)
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


std::string FileResponse::getSource() const
{
    return source_;
}

void FileResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool FileResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void FileResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string FileResponse::getAddress() const
{
    return address_;
}

void FileResponse::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool FileResponse::addressIsSet() const
{
    return addressIsSet_;
}

void FileResponse::unsetaddress()
{
    addressIsSet_ = false;
}

std::string FileResponse::getMountPath() const
{
    return mountPath_;
}

void FileResponse::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool FileResponse::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void FileResponse::unsetmountPath()
{
    mountPathIsSet_ = false;
}

bool FileResponse::isHostCache() const
{
    return hostCache_;
}

void FileResponse::setHostCache(bool value)
{
    hostCache_ = value;
    hostCacheIsSet_ = true;
}

bool FileResponse::hostCacheIsSet() const
{
    return hostCacheIsSet_;
}

void FileResponse::unsethostCache()
{
    hostCacheIsSet_ = false;
}

std::string FileResponse::getEfsSubPath() const
{
    return efsSubPath_;
}

void FileResponse::setEfsSubPath(const std::string& value)
{
    efsSubPath_ = value;
    efsSubPathIsSet_ = true;
}

bool FileResponse::efsSubPathIsSet() const
{
    return efsSubPathIsSet_;
}

void FileResponse::unsetefsSubPath()
{
    efsSubPathIsSet_ = false;
}

bool FileResponse::isReadOnly() const
{
    return readOnly_;
}

void FileResponse::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool FileResponse::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void FileResponse::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

bool FileResponse::isOsWarmUp() const
{
    return osWarmUp_;
}

void FileResponse::setOsWarmUp(bool value)
{
    osWarmUp_ = value;
    osWarmUpIsSet_ = true;
}

bool FileResponse::osWarmUpIsSet() const
{
    return osWarmUpIsSet_;
}

void FileResponse::unsetosWarmUp()
{
    osWarmUpIsSet_ = false;
}

std::string FileResponse::getSourceName() const
{
    return sourceName_;
}

void FileResponse::setSourceName(const std::string& value)
{
    sourceName_ = value;
    sourceNameIsSet_ = true;
}

bool FileResponse::sourceNameIsSet() const
{
    return sourceNameIsSet_;
}

void FileResponse::unsetsourceName()
{
    sourceNameIsSet_ = false;
}

}
}
}
}
}


