

#include "huaweicloud/dbss/v1/model/DownloadAuditReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DownloadAuditReportRequest::DownloadAuditReportRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    local_ = "";
    localIsSet_ = false;
}

DownloadAuditReportRequest::~DownloadAuditReportRequest() = default;

void DownloadAuditReportRequest::validate()
{
}

web::json::value DownloadAuditReportRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(localIsSet_) {
        val[utility::conversions::to_string_t("local")] = ModelBase::toJson(local_);
    }

    return val;
}
bool DownloadAuditReportRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocal(refVal);
        }
    }
    return ok;
}


std::string DownloadAuditReportRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadAuditReportRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadAuditReportRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadAuditReportRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DownloadAuditReportRequest::getId() const
{
    return id_;
}

void DownloadAuditReportRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DownloadAuditReportRequest::idIsSet() const
{
    return idIsSet_;
}

void DownloadAuditReportRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DownloadAuditReportRequest::getLocal() const
{
    return local_;
}

void DownloadAuditReportRequest::setLocal(const std::string& value)
{
    local_ = value;
    localIsSet_ = true;
}

bool DownloadAuditReportRequest::localIsSet() const
{
    return localIsSet_;
}

void DownloadAuditReportRequest::unsetlocal()
{
    localIsSet_ = false;
}

}
}
}
}
}


