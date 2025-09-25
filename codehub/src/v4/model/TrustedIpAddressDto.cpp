

#include "huaweicloud/codehub/v4/model/TrustedIpAddressDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




TrustedIpAddressDto::TrustedIpAddressDto()
{
    id_ = "";
    idIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    ipRange_ = "";
    ipRangeIsSet_ = false;
    ipType_ = 0;
    ipTypeIsSet_ = false;
    ipStart_ = "";
    ipStartIsSet_ = false;
    ipEnd_ = "";
    ipEndIsSet_ = false;
    viewFlag_ = 0;
    viewFlagIsSet_ = false;
    downloadFlag_ = 0;
    downloadFlagIsSet_ = false;
    uploadFlag_ = 0;
    uploadFlagIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    orderFlag_ = 0;
    orderFlagIsSet_ = false;
}

TrustedIpAddressDto::~TrustedIpAddressDto() = default;

void TrustedIpAddressDto::validate()
{
}

web::json::value TrustedIpAddressDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(ipRangeIsSet_) {
        val[utility::conversions::to_string_t("ip_range")] = ModelBase::toJson(ipRange_);
    }
    if(ipTypeIsSet_) {
        val[utility::conversions::to_string_t("ip_type")] = ModelBase::toJson(ipType_);
    }
    if(ipStartIsSet_) {
        val[utility::conversions::to_string_t("ip_start")] = ModelBase::toJson(ipStart_);
    }
    if(ipEndIsSet_) {
        val[utility::conversions::to_string_t("ip_end")] = ModelBase::toJson(ipEnd_);
    }
    if(viewFlagIsSet_) {
        val[utility::conversions::to_string_t("view_flag")] = ModelBase::toJson(viewFlag_);
    }
    if(downloadFlagIsSet_) {
        val[utility::conversions::to_string_t("download_flag")] = ModelBase::toJson(downloadFlag_);
    }
    if(uploadFlagIsSet_) {
        val[utility::conversions::to_string_t("upload_flag")] = ModelBase::toJson(uploadFlag_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(orderFlagIsSet_) {
        val[utility::conversions::to_string_t("order_flag")] = ModelBase::toJson(orderFlag_);
    }

    return val;
}
bool TrustedIpAddressDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_end"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upload_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderFlag(refVal);
        }
    }
    return ok;
}


std::string TrustedIpAddressDto::getId() const
{
    return id_;
}

void TrustedIpAddressDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TrustedIpAddressDto::idIsSet() const
{
    return idIsSet_;
}

void TrustedIpAddressDto::unsetid()
{
    idIsSet_ = false;
}

int32_t TrustedIpAddressDto::getRepositoryId() const
{
    return repositoryId_;
}

void TrustedIpAddressDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool TrustedIpAddressDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void TrustedIpAddressDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string TrustedIpAddressDto::getIpRange() const
{
    return ipRange_;
}

void TrustedIpAddressDto::setIpRange(const std::string& value)
{
    ipRange_ = value;
    ipRangeIsSet_ = true;
}

bool TrustedIpAddressDto::ipRangeIsSet() const
{
    return ipRangeIsSet_;
}

void TrustedIpAddressDto::unsetipRange()
{
    ipRangeIsSet_ = false;
}

int32_t TrustedIpAddressDto::getIpType() const
{
    return ipType_;
}

void TrustedIpAddressDto::setIpType(int32_t value)
{
    ipType_ = value;
    ipTypeIsSet_ = true;
}

bool TrustedIpAddressDto::ipTypeIsSet() const
{
    return ipTypeIsSet_;
}

void TrustedIpAddressDto::unsetipType()
{
    ipTypeIsSet_ = false;
}

std::string TrustedIpAddressDto::getIpStart() const
{
    return ipStart_;
}

void TrustedIpAddressDto::setIpStart(const std::string& value)
{
    ipStart_ = value;
    ipStartIsSet_ = true;
}

bool TrustedIpAddressDto::ipStartIsSet() const
{
    return ipStartIsSet_;
}

void TrustedIpAddressDto::unsetipStart()
{
    ipStartIsSet_ = false;
}

std::string TrustedIpAddressDto::getIpEnd() const
{
    return ipEnd_;
}

void TrustedIpAddressDto::setIpEnd(const std::string& value)
{
    ipEnd_ = value;
    ipEndIsSet_ = true;
}

bool TrustedIpAddressDto::ipEndIsSet() const
{
    return ipEndIsSet_;
}

void TrustedIpAddressDto::unsetipEnd()
{
    ipEndIsSet_ = false;
}

int32_t TrustedIpAddressDto::getViewFlag() const
{
    return viewFlag_;
}

void TrustedIpAddressDto::setViewFlag(int32_t value)
{
    viewFlag_ = value;
    viewFlagIsSet_ = true;
}

bool TrustedIpAddressDto::viewFlagIsSet() const
{
    return viewFlagIsSet_;
}

void TrustedIpAddressDto::unsetviewFlag()
{
    viewFlagIsSet_ = false;
}

int32_t TrustedIpAddressDto::getDownloadFlag() const
{
    return downloadFlag_;
}

void TrustedIpAddressDto::setDownloadFlag(int32_t value)
{
    downloadFlag_ = value;
    downloadFlagIsSet_ = true;
}

bool TrustedIpAddressDto::downloadFlagIsSet() const
{
    return downloadFlagIsSet_;
}

void TrustedIpAddressDto::unsetdownloadFlag()
{
    downloadFlagIsSet_ = false;
}

int32_t TrustedIpAddressDto::getUploadFlag() const
{
    return uploadFlag_;
}

void TrustedIpAddressDto::setUploadFlag(int32_t value)
{
    uploadFlag_ = value;
    uploadFlagIsSet_ = true;
}

bool TrustedIpAddressDto::uploadFlagIsSet() const
{
    return uploadFlagIsSet_;
}

void TrustedIpAddressDto::unsetuploadFlag()
{
    uploadFlagIsSet_ = false;
}

std::string TrustedIpAddressDto::getRemark() const
{
    return remark_;
}

void TrustedIpAddressDto::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool TrustedIpAddressDto::remarkIsSet() const
{
    return remarkIsSet_;
}

void TrustedIpAddressDto::unsetremark()
{
    remarkIsSet_ = false;
}

std::string TrustedIpAddressDto::getCreatedAt() const
{
    return createdAt_;
}

void TrustedIpAddressDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool TrustedIpAddressDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void TrustedIpAddressDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string TrustedIpAddressDto::getUpdatedAt() const
{
    return updatedAt_;
}

void TrustedIpAddressDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool TrustedIpAddressDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void TrustedIpAddressDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t TrustedIpAddressDto::getOrderFlag() const
{
    return orderFlag_;
}

void TrustedIpAddressDto::setOrderFlag(int32_t value)
{
    orderFlag_ = value;
    orderFlagIsSet_ = true;
}

bool TrustedIpAddressDto::orderFlagIsSet() const
{
    return orderFlagIsSet_;
}

void TrustedIpAddressDto::unsetorderFlag()
{
    orderFlagIsSet_ = false;
}

}
}
}
}
}


