

#include "huaweicloud/cdn/v2/model/Compress.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Compress::Compress()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    compressMinLength_ = 0L;
    compressMinLengthIsSet_ = false;
    compressMaxLength_ = 0L;
    compressMaxLengthIsSet_ = false;
}

Compress::~Compress() = default;

void Compress::validate()
{
}

web::json::value Compress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(compressMinLengthIsSet_) {
        val[utility::conversions::to_string_t("compress_min_length")] = ModelBase::toJson(compressMinLength_);
    }
    if(compressMaxLengthIsSet_) {
        val[utility::conversions::to_string_t("compress_max_length")] = ModelBase::toJson(compressMaxLength_);
    }

    return val;
}
bool Compress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compress_min_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress_min_length"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompressMinLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compress_max_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress_max_length"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompressMaxLength(refVal);
        }
    }
    return ok;
}


std::string Compress::getStatus() const
{
    return status_;
}

void Compress::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Compress::statusIsSet() const
{
    return statusIsSet_;
}

void Compress::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Compress::getType() const
{
    return type_;
}

void Compress::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Compress::typeIsSet() const
{
    return typeIsSet_;
}

void Compress::unsettype()
{
    typeIsSet_ = false;
}

std::string Compress::getFileType() const
{
    return fileType_;
}

void Compress::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool Compress::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void Compress::unsetfileType()
{
    fileTypeIsSet_ = false;
}

int64_t Compress::getCompressMinLength() const
{
    return compressMinLength_;
}

void Compress::setCompressMinLength(int64_t value)
{
    compressMinLength_ = value;
    compressMinLengthIsSet_ = true;
}

bool Compress::compressMinLengthIsSet() const
{
    return compressMinLengthIsSet_;
}

void Compress::unsetcompressMinLength()
{
    compressMinLengthIsSet_ = false;
}

int64_t Compress::getCompressMaxLength() const
{
    return compressMaxLength_;
}

void Compress::setCompressMaxLength(int64_t value)
{
    compressMaxLength_ = value;
    compressMaxLengthIsSet_ = true;
}

bool Compress::compressMaxLengthIsSet() const
{
    return compressMaxLengthIsSet_;
}

void Compress::unsetcompressMaxLength()
{
    compressMaxLengthIsSet_ = false;
}

}
}
}
}
}


