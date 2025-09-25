

#include "huaweicloud/codehub/v4/model/AddTenantTrustedIpAddressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AddTenantTrustedIpAddressResponse::AddTenantTrustedIpAddressResponse()
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

AddTenantTrustedIpAddressResponse::~AddTenantTrustedIpAddressResponse() = default;

void AddTenantTrustedIpAddressResponse::validate()
{
}

web::json::value AddTenantTrustedIpAddressResponse::toJson() const
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
bool AddTenantTrustedIpAddressResponse::fromJson(const web::json::value& val)
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


std::string AddTenantTrustedIpAddressResponse::getId() const
{
    return id_;
}

void AddTenantTrustedIpAddressResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::idIsSet() const
{
    return idIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t AddTenantTrustedIpAddressResponse::getUserId() const
{
    return userId_;
}

void AddTenantTrustedIpAddressResponse::setUserId(int32_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string AddTenantTrustedIpAddressResponse::getDomainId() const
{
    return domainId_;
}

void AddTenantTrustedIpAddressResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AddTenantTrustedIpAddressResponse::getIpRange() const
{
    return ipRange_;
}

void AddTenantTrustedIpAddressResponse::setIpRange(const std::string& value)
{
    ipRange_ = value;
    ipRangeIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::ipRangeIsSet() const
{
    return ipRangeIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetipRange()
{
    ipRangeIsSet_ = false;
}

int32_t AddTenantTrustedIpAddressResponse::getIpType() const
{
    return ipType_;
}

void AddTenantTrustedIpAddressResponse::setIpType(int32_t value)
{
    ipType_ = value;
    ipTypeIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::ipTypeIsSet() const
{
    return ipTypeIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetipType()
{
    ipTypeIsSet_ = false;
}

std::string AddTenantTrustedIpAddressResponse::getIpStart() const
{
    return ipStart_;
}

void AddTenantTrustedIpAddressResponse::setIpStart(const std::string& value)
{
    ipStart_ = value;
    ipStartIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::ipStartIsSet() const
{
    return ipStartIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetipStart()
{
    ipStartIsSet_ = false;
}

std::string AddTenantTrustedIpAddressResponse::getIpEnd() const
{
    return ipEnd_;
}

void AddTenantTrustedIpAddressResponse::setIpEnd(const std::string& value)
{
    ipEnd_ = value;
    ipEndIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::ipEndIsSet() const
{
    return ipEndIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetipEnd()
{
    ipEndIsSet_ = false;
}

int32_t AddTenantTrustedIpAddressResponse::getViewFlag() const
{
    return viewFlag_;
}

void AddTenantTrustedIpAddressResponse::setViewFlag(int32_t value)
{
    viewFlag_ = value;
    viewFlagIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::viewFlagIsSet() const
{
    return viewFlagIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetviewFlag()
{
    viewFlagIsSet_ = false;
}

int32_t AddTenantTrustedIpAddressResponse::getDownloadFlag() const
{
    return downloadFlag_;
}

void AddTenantTrustedIpAddressResponse::setDownloadFlag(int32_t value)
{
    downloadFlag_ = value;
    downloadFlagIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::downloadFlagIsSet() const
{
    return downloadFlagIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetdownloadFlag()
{
    downloadFlagIsSet_ = false;
}

int32_t AddTenantTrustedIpAddressResponse::getUploadFlag() const
{
    return uploadFlag_;
}

void AddTenantTrustedIpAddressResponse::setUploadFlag(int32_t value)
{
    uploadFlag_ = value;
    uploadFlagIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::uploadFlagIsSet() const
{
    return uploadFlagIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetuploadFlag()
{
    uploadFlagIsSet_ = false;
}

std::string AddTenantTrustedIpAddressResponse::getRemark() const
{
    return remark_;
}

void AddTenantTrustedIpAddressResponse::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::remarkIsSet() const
{
    return remarkIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetremark()
{
    remarkIsSet_ = false;
}

std::string AddTenantTrustedIpAddressResponse::getCreatedAt() const
{
    return createdAt_;
}

void AddTenantTrustedIpAddressResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string AddTenantTrustedIpAddressResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void AddTenantTrustedIpAddressResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t AddTenantTrustedIpAddressResponse::getOrderFlag() const
{
    return orderFlag_;
}

void AddTenantTrustedIpAddressResponse::setOrderFlag(int32_t value)
{
    orderFlag_ = value;
    orderFlagIsSet_ = true;
}

bool AddTenantTrustedIpAddressResponse::orderFlagIsSet() const
{
    return orderFlagIsSet_;
}

void AddTenantTrustedIpAddressResponse::unsetorderFlag()
{
    orderFlagIsSet_ = false;
}

}
}
}
}
}


