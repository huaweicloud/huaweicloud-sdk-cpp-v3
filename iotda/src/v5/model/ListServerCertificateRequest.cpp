

#include "huaweicloud/iotda/v5/model/ListServerCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListServerCertificateRequest::ListServerCertificateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListServerCertificateRequest::~ListServerCertificateRequest() = default;

void ListServerCertificateRequest::validate()
{
}

web::json::value ListServerCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
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
bool ListServerCertificateRequest::fromJson(const web::json::value& val)
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


std::string ListServerCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void ListServerCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListServerCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListServerCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListServerCertificateRequest::getLimit() const
{
    return limit_;
}

void ListServerCertificateRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListServerCertificateRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListServerCertificateRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListServerCertificateRequest::getMarker() const
{
    return marker_;
}

void ListServerCertificateRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListServerCertificateRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListServerCertificateRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListServerCertificateRequest::getOffset() const
{
    return offset_;
}

void ListServerCertificateRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListServerCertificateRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListServerCertificateRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


