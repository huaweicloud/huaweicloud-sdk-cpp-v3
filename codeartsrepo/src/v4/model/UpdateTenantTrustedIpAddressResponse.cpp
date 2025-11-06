

#include "huaweicloud/codeartsrepo/v4/model/UpdateTenantTrustedIpAddressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateTenantTrustedIpAddressResponse::UpdateTenantTrustedIpAddressResponse()
{
    id_ = "";
    idIsSet_ = false;
    userId_ = 0;
    userIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
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

UpdateTenantTrustedIpAddressResponse::~UpdateTenantTrustedIpAddressResponse() = default;

void UpdateTenantTrustedIpAddressResponse::validate()
{
}

web::json::value UpdateTenantTrustedIpAddressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
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
bool UpdateTenantTrustedIpAddressResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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


std::string UpdateTenantTrustedIpAddressResponse::getId() const
{
    return id_;
}

void UpdateTenantTrustedIpAddressResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateTenantTrustedIpAddressResponse::getUserId() const
{
    return userId_;
}

void UpdateTenantTrustedIpAddressResponse::setUserId(int32_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string UpdateTenantTrustedIpAddressResponse::getDomainId() const
{
    return domainId_;
}

void UpdateTenantTrustedIpAddressResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateTenantTrustedIpAddressResponse::getIpRange() const
{
    return ipRange_;
}

void UpdateTenantTrustedIpAddressResponse::setIpRange(const std::string& value)
{
    ipRange_ = value;
    ipRangeIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::ipRangeIsSet() const
{
    return ipRangeIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetipRange()
{
    ipRangeIsSet_ = false;
}

int32_t UpdateTenantTrustedIpAddressResponse::getIpType() const
{
    return ipType_;
}

void UpdateTenantTrustedIpAddressResponse::setIpType(int32_t value)
{
    ipType_ = value;
    ipTypeIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::ipTypeIsSet() const
{
    return ipTypeIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetipType()
{
    ipTypeIsSet_ = false;
}

std::string UpdateTenantTrustedIpAddressResponse::getIpStart() const
{
    return ipStart_;
}

void UpdateTenantTrustedIpAddressResponse::setIpStart(const std::string& value)
{
    ipStart_ = value;
    ipStartIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::ipStartIsSet() const
{
    return ipStartIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetipStart()
{
    ipStartIsSet_ = false;
}

std::string UpdateTenantTrustedIpAddressResponse::getIpEnd() const
{
    return ipEnd_;
}

void UpdateTenantTrustedIpAddressResponse::setIpEnd(const std::string& value)
{
    ipEnd_ = value;
    ipEndIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::ipEndIsSet() const
{
    return ipEndIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetipEnd()
{
    ipEndIsSet_ = false;
}

int32_t UpdateTenantTrustedIpAddressResponse::getViewFlag() const
{
    return viewFlag_;
}

void UpdateTenantTrustedIpAddressResponse::setViewFlag(int32_t value)
{
    viewFlag_ = value;
    viewFlagIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::viewFlagIsSet() const
{
    return viewFlagIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetviewFlag()
{
    viewFlagIsSet_ = false;
}

int32_t UpdateTenantTrustedIpAddressResponse::getDownloadFlag() const
{
    return downloadFlag_;
}

void UpdateTenantTrustedIpAddressResponse::setDownloadFlag(int32_t value)
{
    downloadFlag_ = value;
    downloadFlagIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::downloadFlagIsSet() const
{
    return downloadFlagIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetdownloadFlag()
{
    downloadFlagIsSet_ = false;
}

int32_t UpdateTenantTrustedIpAddressResponse::getUploadFlag() const
{
    return uploadFlag_;
}

void UpdateTenantTrustedIpAddressResponse::setUploadFlag(int32_t value)
{
    uploadFlag_ = value;
    uploadFlagIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::uploadFlagIsSet() const
{
    return uploadFlagIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetuploadFlag()
{
    uploadFlagIsSet_ = false;
}

std::string UpdateTenantTrustedIpAddressResponse::getRemark() const
{
    return remark_;
}

void UpdateTenantTrustedIpAddressResponse::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::remarkIsSet() const
{
    return remarkIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetremark()
{
    remarkIsSet_ = false;
}

std::string UpdateTenantTrustedIpAddressResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateTenantTrustedIpAddressResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateTenantTrustedIpAddressResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateTenantTrustedIpAddressResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t UpdateTenantTrustedIpAddressResponse::getOrderFlag() const
{
    return orderFlag_;
}

void UpdateTenantTrustedIpAddressResponse::setOrderFlag(int32_t value)
{
    orderFlag_ = value;
    orderFlagIsSet_ = true;
}

bool UpdateTenantTrustedIpAddressResponse::orderFlagIsSet() const
{
    return orderFlagIsSet_;
}

void UpdateTenantTrustedIpAddressResponse::unsetorderFlag()
{
    orderFlagIsSet_ = false;
}

}
}
}
}
}


