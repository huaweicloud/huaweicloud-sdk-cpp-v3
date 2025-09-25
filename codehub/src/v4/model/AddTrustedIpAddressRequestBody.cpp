

#include "huaweicloud/codehub/v4/model/AddTrustedIpAddressRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AddTrustedIpAddressRequestBody::AddTrustedIpAddressRequestBody()
{
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
}

AddTrustedIpAddressRequestBody::~AddTrustedIpAddressRequestBody() = default;

void AddTrustedIpAddressRequestBody::validate()
{
}

web::json::value AddTrustedIpAddressRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool AddTrustedIpAddressRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


int32_t AddTrustedIpAddressRequestBody::getIpType() const
{
    return ipType_;
}

void AddTrustedIpAddressRequestBody::setIpType(int32_t value)
{
    ipType_ = value;
    ipTypeIsSet_ = true;
}

bool AddTrustedIpAddressRequestBody::ipTypeIsSet() const
{
    return ipTypeIsSet_;
}

void AddTrustedIpAddressRequestBody::unsetipType()
{
    ipTypeIsSet_ = false;
}

std::string AddTrustedIpAddressRequestBody::getIpStart() const
{
    return ipStart_;
}

void AddTrustedIpAddressRequestBody::setIpStart(const std::string& value)
{
    ipStart_ = value;
    ipStartIsSet_ = true;
}

bool AddTrustedIpAddressRequestBody::ipStartIsSet() const
{
    return ipStartIsSet_;
}

void AddTrustedIpAddressRequestBody::unsetipStart()
{
    ipStartIsSet_ = false;
}

std::string AddTrustedIpAddressRequestBody::getIpEnd() const
{
    return ipEnd_;
}

void AddTrustedIpAddressRequestBody::setIpEnd(const std::string& value)
{
    ipEnd_ = value;
    ipEndIsSet_ = true;
}

bool AddTrustedIpAddressRequestBody::ipEndIsSet() const
{
    return ipEndIsSet_;
}

void AddTrustedIpAddressRequestBody::unsetipEnd()
{
    ipEndIsSet_ = false;
}

int32_t AddTrustedIpAddressRequestBody::getViewFlag() const
{
    return viewFlag_;
}

void AddTrustedIpAddressRequestBody::setViewFlag(int32_t value)
{
    viewFlag_ = value;
    viewFlagIsSet_ = true;
}

bool AddTrustedIpAddressRequestBody::viewFlagIsSet() const
{
    return viewFlagIsSet_;
}

void AddTrustedIpAddressRequestBody::unsetviewFlag()
{
    viewFlagIsSet_ = false;
}

int32_t AddTrustedIpAddressRequestBody::getDownloadFlag() const
{
    return downloadFlag_;
}

void AddTrustedIpAddressRequestBody::setDownloadFlag(int32_t value)
{
    downloadFlag_ = value;
    downloadFlagIsSet_ = true;
}

bool AddTrustedIpAddressRequestBody::downloadFlagIsSet() const
{
    return downloadFlagIsSet_;
}

void AddTrustedIpAddressRequestBody::unsetdownloadFlag()
{
    downloadFlagIsSet_ = false;
}

int32_t AddTrustedIpAddressRequestBody::getUploadFlag() const
{
    return uploadFlag_;
}

void AddTrustedIpAddressRequestBody::setUploadFlag(int32_t value)
{
    uploadFlag_ = value;
    uploadFlagIsSet_ = true;
}

bool AddTrustedIpAddressRequestBody::uploadFlagIsSet() const
{
    return uploadFlagIsSet_;
}

void AddTrustedIpAddressRequestBody::unsetuploadFlag()
{
    uploadFlagIsSet_ = false;
}

std::string AddTrustedIpAddressRequestBody::getRemark() const
{
    return remark_;
}

void AddTrustedIpAddressRequestBody::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool AddTrustedIpAddressRequestBody::remarkIsSet() const
{
    return remarkIsSet_;
}

void AddTrustedIpAddressRequestBody::unsetremark()
{
    remarkIsSet_ = false;
}

}
}
}
}
}


