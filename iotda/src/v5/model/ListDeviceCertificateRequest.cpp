

#include "huaweicloud/iotda/v5/model/ListDeviceCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceCertificateRequest::ListDeviceCertificateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    commonName_ = "";
    commonNameIsSet_ = false;
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDeviceCertificateRequest::~ListDeviceCertificateRequest() = default;

void ListDeviceCertificateRequest::validate()
{
}

web::json::value ListDeviceCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(commonNameIsSet_) {
        val[utility::conversions::to_string_t("common_name")] = ModelBase::toJson(commonName_);
    }
    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDeviceCertificateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("common_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommonName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListDeviceCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDeviceCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDeviceCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDeviceCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDeviceCertificateRequest::getCommonName() const
{
    return commonName_;
}

void ListDeviceCertificateRequest::setCommonName(const std::string& value)
{
    commonName_ = value;
    commonNameIsSet_ = true;
}

bool ListDeviceCertificateRequest::commonNameIsSet() const
{
    return commonNameIsSet_;
}

void ListDeviceCertificateRequest::unsetcommonName()
{
    commonNameIsSet_ = false;
}

std::string ListDeviceCertificateRequest::getFingerprint() const
{
    return fingerprint_;
}

void ListDeviceCertificateRequest::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool ListDeviceCertificateRequest::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void ListDeviceCertificateRequest::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

int32_t ListDeviceCertificateRequest::getLimit() const
{
    return limit_;
}

void ListDeviceCertificateRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDeviceCertificateRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDeviceCertificateRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDeviceCertificateRequest::getMarker() const
{
    return marker_;
}

void ListDeviceCertificateRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDeviceCertificateRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDeviceCertificateRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListDeviceCertificateRequest::getOffset() const
{
    return offset_;
}

void ListDeviceCertificateRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDeviceCertificateRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDeviceCertificateRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


