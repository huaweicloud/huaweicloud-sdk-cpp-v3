

#include "huaweicloud/identitycenter/v1/model/ListApplicationInstanceCertificatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationInstanceCertificatesRequest::ListApplicationInstanceCertificatesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
}

ListApplicationInstanceCertificatesRequest::~ListApplicationInstanceCertificatesRequest() = default;

void ListApplicationInstanceCertificatesRequest::validate()
{
}

web::json::value ListApplicationInstanceCertificatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(applicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("application_instance_id")] = ModelBase::toJson(applicationInstanceId_);
    }

    return val;
}
bool ListApplicationInstanceCertificatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListApplicationInstanceCertificatesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListApplicationInstanceCertificatesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListApplicationInstanceCertificatesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListApplicationInstanceCertificatesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

int32_t ListApplicationInstanceCertificatesRequest::getLimit() const
{
    return limit_;
}

void ListApplicationInstanceCertificatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicationInstanceCertificatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicationInstanceCertificatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListApplicationInstanceCertificatesRequest::getMarker() const
{
    return marker_;
}

void ListApplicationInstanceCertificatesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListApplicationInstanceCertificatesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListApplicationInstanceCertificatesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListApplicationInstanceCertificatesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListApplicationInstanceCertificatesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListApplicationInstanceCertificatesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListApplicationInstanceCertificatesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListApplicationInstanceCertificatesRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void ListApplicationInstanceCertificatesRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool ListApplicationInstanceCertificatesRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void ListApplicationInstanceCertificatesRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

}
}
}
}
}


