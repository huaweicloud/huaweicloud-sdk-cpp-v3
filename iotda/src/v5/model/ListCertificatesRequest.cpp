

#include "huaweicloud/iotda/v5/model/ListCertificatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListCertificatesRequest::ListCertificatesRequest()
{
    spAuthToken_ = "";
    spAuthTokenIsSet_ = false;
    stageAuthToken_ = "";
    stageAuthTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListCertificatesRequest::~ListCertificatesRequest() = default;

void ListCertificatesRequest::validate()
{
}

web::json::value ListCertificatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(spAuthTokenIsSet_) {
        val[utility::conversions::to_string_t("Sp-Auth-Token")] = ModelBase::toJson(spAuthToken_);
    }
    if(stageAuthTokenIsSet_) {
        val[utility::conversions::to_string_t("Stage-Auth-Token")] = ModelBase::toJson(stageAuthToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
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
bool ListCertificatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Sp-Auth-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Sp-Auth-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpAuthToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Stage-Auth-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Stage-Auth-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageAuthToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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


std::string ListCertificatesRequest::getSpAuthToken() const
{
    return spAuthToken_;
}

void ListCertificatesRequest::setSpAuthToken(const std::string& value)
{
    spAuthToken_ = value;
    spAuthTokenIsSet_ = true;
}

bool ListCertificatesRequest::spAuthTokenIsSet() const
{
    return spAuthTokenIsSet_;
}

void ListCertificatesRequest::unsetspAuthToken()
{
    spAuthTokenIsSet_ = false;
}

std::string ListCertificatesRequest::getStageAuthToken() const
{
    return stageAuthToken_;
}

void ListCertificatesRequest::setStageAuthToken(const std::string& value)
{
    stageAuthToken_ = value;
    stageAuthTokenIsSet_ = true;
}

bool ListCertificatesRequest::stageAuthTokenIsSet() const
{
    return stageAuthTokenIsSet_;
}

void ListCertificatesRequest::unsetstageAuthToken()
{
    stageAuthTokenIsSet_ = false;
}

std::string ListCertificatesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListCertificatesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListCertificatesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListCertificatesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListCertificatesRequest::getAppId() const
{
    return appId_;
}

void ListCertificatesRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListCertificatesRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListCertificatesRequest::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t ListCertificatesRequest::getLimit() const
{
    return limit_;
}

void ListCertificatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCertificatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCertificatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListCertificatesRequest::getMarker() const
{
    return marker_;
}

void ListCertificatesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListCertificatesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListCertificatesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListCertificatesRequest::getOffset() const
{
    return offset_;
}

void ListCertificatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListCertificatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListCertificatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


