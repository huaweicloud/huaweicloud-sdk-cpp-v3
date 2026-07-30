

#include "huaweicloud/modelarts/v1/model/CodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CodeResponse::CodeResponse()
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

CodeResponse::~CodeResponse() = default;

void CodeResponse::validate()
{
}

web::json::value CodeResponse::toJson() const
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
bool CodeResponse::fromJson(const web::json::value& val)
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


std::string CodeResponse::getSource() const
{
    return source_;
}

void CodeResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool CodeResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void CodeResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string CodeResponse::getAddress() const
{
    return address_;
}

void CodeResponse::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool CodeResponse::addressIsSet() const
{
    return addressIsSet_;
}

void CodeResponse::unsetaddress()
{
    addressIsSet_ = false;
}

std::string CodeResponse::getSourceId() const
{
    return sourceId_;
}

void CodeResponse::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool CodeResponse::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void CodeResponse::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string CodeResponse::getMountPath() const
{
    return mountPath_;
}

void CodeResponse::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool CodeResponse::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void CodeResponse::unsetmountPath()
{
    mountPathIsSet_ = false;
}

std::string CodeResponse::getEfsSubPath() const
{
    return efsSubPath_;
}

void CodeResponse::setEfsSubPath(const std::string& value)
{
    efsSubPath_ = value;
    efsSubPathIsSet_ = true;
}

bool CodeResponse::efsSubPathIsSet() const
{
    return efsSubPathIsSet_;
}

void CodeResponse::unsetefsSubPath()
{
    efsSubPathIsSet_ = false;
}

bool CodeResponse::isReadOnly() const
{
    return readOnly_;
}

void CodeResponse::setReadOnly(bool value)
{
    readOnly_ = value;
    readOnlyIsSet_ = true;
}

bool CodeResponse::readOnlyIsSet() const
{
    return readOnlyIsSet_;
}

void CodeResponse::unsetreadOnly()
{
    readOnlyIsSet_ = false;
}

}
}
}
}
}


