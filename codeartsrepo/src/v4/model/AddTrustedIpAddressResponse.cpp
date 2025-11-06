

#include "huaweicloud/codeartsrepo/v4/model/AddTrustedIpAddressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




AddTrustedIpAddressResponse::AddTrustedIpAddressResponse()
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

AddTrustedIpAddressResponse::~AddTrustedIpAddressResponse() = default;

void AddTrustedIpAddressResponse::validate()
{
}

web::json::value AddTrustedIpAddressResponse::toJson() const
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
bool AddTrustedIpAddressResponse::fromJson(const web::json::value& val)
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


std::string AddTrustedIpAddressResponse::getId() const
{
    return id_;
}

void AddTrustedIpAddressResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddTrustedIpAddressResponse::idIsSet() const
{
    return idIsSet_;
}

void AddTrustedIpAddressResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t AddTrustedIpAddressResponse::getRepositoryId() const
{
    return repositoryId_;
}

void AddTrustedIpAddressResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AddTrustedIpAddressResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AddTrustedIpAddressResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string AddTrustedIpAddressResponse::getIpRange() const
{
    return ipRange_;
}

void AddTrustedIpAddressResponse::setIpRange(const std::string& value)
{
    ipRange_ = value;
    ipRangeIsSet_ = true;
}

bool AddTrustedIpAddressResponse::ipRangeIsSet() const
{
    return ipRangeIsSet_;
}

void AddTrustedIpAddressResponse::unsetipRange()
{
    ipRangeIsSet_ = false;
}

int32_t AddTrustedIpAddressResponse::getIpType() const
{
    return ipType_;
}

void AddTrustedIpAddressResponse::setIpType(int32_t value)
{
    ipType_ = value;
    ipTypeIsSet_ = true;
}

bool AddTrustedIpAddressResponse::ipTypeIsSet() const
{
    return ipTypeIsSet_;
}

void AddTrustedIpAddressResponse::unsetipType()
{
    ipTypeIsSet_ = false;
}

std::string AddTrustedIpAddressResponse::getIpStart() const
{
    return ipStart_;
}

void AddTrustedIpAddressResponse::setIpStart(const std::string& value)
{
    ipStart_ = value;
    ipStartIsSet_ = true;
}

bool AddTrustedIpAddressResponse::ipStartIsSet() const
{
    return ipStartIsSet_;
}

void AddTrustedIpAddressResponse::unsetipStart()
{
    ipStartIsSet_ = false;
}

std::string AddTrustedIpAddressResponse::getIpEnd() const
{
    return ipEnd_;
}

void AddTrustedIpAddressResponse::setIpEnd(const std::string& value)
{
    ipEnd_ = value;
    ipEndIsSet_ = true;
}

bool AddTrustedIpAddressResponse::ipEndIsSet() const
{
    return ipEndIsSet_;
}

void AddTrustedIpAddressResponse::unsetipEnd()
{
    ipEndIsSet_ = false;
}

int32_t AddTrustedIpAddressResponse::getViewFlag() const
{
    return viewFlag_;
}

void AddTrustedIpAddressResponse::setViewFlag(int32_t value)
{
    viewFlag_ = value;
    viewFlagIsSet_ = true;
}

bool AddTrustedIpAddressResponse::viewFlagIsSet() const
{
    return viewFlagIsSet_;
}

void AddTrustedIpAddressResponse::unsetviewFlag()
{
    viewFlagIsSet_ = false;
}

int32_t AddTrustedIpAddressResponse::getDownloadFlag() const
{
    return downloadFlag_;
}

void AddTrustedIpAddressResponse::setDownloadFlag(int32_t value)
{
    downloadFlag_ = value;
    downloadFlagIsSet_ = true;
}

bool AddTrustedIpAddressResponse::downloadFlagIsSet() const
{
    return downloadFlagIsSet_;
}

void AddTrustedIpAddressResponse::unsetdownloadFlag()
{
    downloadFlagIsSet_ = false;
}

int32_t AddTrustedIpAddressResponse::getUploadFlag() const
{
    return uploadFlag_;
}

void AddTrustedIpAddressResponse::setUploadFlag(int32_t value)
{
    uploadFlag_ = value;
    uploadFlagIsSet_ = true;
}

bool AddTrustedIpAddressResponse::uploadFlagIsSet() const
{
    return uploadFlagIsSet_;
}

void AddTrustedIpAddressResponse::unsetuploadFlag()
{
    uploadFlagIsSet_ = false;
}

std::string AddTrustedIpAddressResponse::getRemark() const
{
    return remark_;
}

void AddTrustedIpAddressResponse::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool AddTrustedIpAddressResponse::remarkIsSet() const
{
    return remarkIsSet_;
}

void AddTrustedIpAddressResponse::unsetremark()
{
    remarkIsSet_ = false;
}

std::string AddTrustedIpAddressResponse::getCreatedAt() const
{
    return createdAt_;
}

void AddTrustedIpAddressResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool AddTrustedIpAddressResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void AddTrustedIpAddressResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string AddTrustedIpAddressResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void AddTrustedIpAddressResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool AddTrustedIpAddressResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void AddTrustedIpAddressResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t AddTrustedIpAddressResponse::getOrderFlag() const
{
    return orderFlag_;
}

void AddTrustedIpAddressResponse::setOrderFlag(int32_t value)
{
    orderFlag_ = value;
    orderFlagIsSet_ = true;
}

bool AddTrustedIpAddressResponse::orderFlagIsSet() const
{
    return orderFlagIsSet_;
}

void AddTrustedIpAddressResponse::unsetorderFlag()
{
    orderFlagIsSet_ = false;
}

}
}
}
}
}


