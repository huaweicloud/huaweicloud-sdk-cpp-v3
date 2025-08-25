

#include "huaweicloud/cce/v3/model/ListAutopilotClustersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotClustersRequest::ListAutopilotClustersRequest()
{
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ListAutopilotClustersRequest::~ListAutopilotClustersRequest() = default;

void ListAutopilotClustersRequest::validate()
{
}

web::json::value ListAutopilotClustersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ListAutopilotClustersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("errorStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string ListAutopilotClustersRequest::getErrorStatus() const
{
    return errorStatus_;
}

void ListAutopilotClustersRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool ListAutopilotClustersRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void ListAutopilotClustersRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

std::string ListAutopilotClustersRequest::getDetail() const
{
    return detail_;
}

void ListAutopilotClustersRequest::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool ListAutopilotClustersRequest::detailIsSet() const
{
    return detailIsSet_;
}

void ListAutopilotClustersRequest::unsetdetail()
{
    detailIsSet_ = false;
}

std::string ListAutopilotClustersRequest::getStatus() const
{
    return status_;
}

void ListAutopilotClustersRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAutopilotClustersRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAutopilotClustersRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAutopilotClustersRequest::getType() const
{
    return type_;
}

void ListAutopilotClustersRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListAutopilotClustersRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListAutopilotClustersRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListAutopilotClustersRequest::getVersion() const
{
    return version_;
}

void ListAutopilotClustersRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListAutopilotClustersRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListAutopilotClustersRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


