

#include "huaweicloud/modelarts/v1/model/Code.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Code::Code()
{
    source_ = "";
    sourceIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    sourceId_ = "";
    sourceIdIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
    efsSubPath_ = "";
    efsSubPathIsSet_ = false;
    readOnly_ = false;
    readOnlyIsSet_ = false;
}

Code::~Code() = default;

void Code::validate()
{
}

web::json::value Code::toJson() const
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
    if(efsSubPathIsSet_) {
        val[utility::conversions::to_string_t("efs_sub_path")] = ModelBase::toJson(efsSubPath_);
    }
    if(readOnlyIsSet_) {
        val[utility::conversions::to_string_t("read_only")] = ModelBase::toJson(readOnly_);
    }

    return val;
}
bool Code::fromJson(const web::json::value& val)
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
    return ok;
}


std::string Code::getSource() const
{
    return source_;
}

void Code::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool Code::sourceIsSet() const
{
    return sourceIsSet_;
}

void Code::unsetsource()
{
    sourceIsSet_ = false;
}

std::string Code::getAddress() const
{
    return address_;
}

void Code::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool Code::addressIsSet() const
{
    return addressIsSet_;
}

void Code::unsetaddress()
{
    addressIsSet_ = false;
}

std::string Code::getSourceId() const
{
    return sourceId_;
}

void Code::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool Code::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void Code::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string Code::getMountPath() const
{
    return mountPath_;
}

void Code::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool Code::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void Code::unsetmountPath()
{
    mountPathIsSet_ = false;
}

std::string Code::getEfsSubPath() const
{
    return efsSubPath_;
}

void Code::setEfsSubPath(const std::string& value)
{
    efsSubPath_ = value;
    efsSubPathIsSet_ = true;
}

bool Code::efsSubPathIsSet() const
{
    return efsSubPathIsSet_;
}

void Code::unsetefsSubPath()
{
    efsSubPathIsSet_ = false;
}

bool Code::isReadOnly() const
{
    return readOnly_;
}

void Code::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool Code::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void Code::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

}
}
}
}
}


