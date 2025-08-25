

#include "huaweicloud/cce/v3/model/ListClustersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListClustersRequest::ListClustersRequest()
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

ListClustersRequest::~ListClustersRequest() = default;

void ListClustersRequest::validate()
{
}

web::json::value ListClustersRequest::toJson() const
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
bool ListClustersRequest::fromJson(const web::json::value& val)
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


std::string ListClustersRequest::getErrorStatus() const
{
    return errorStatus_;
}

void ListClustersRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool ListClustersRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void ListClustersRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

std::string ListClustersRequest::getDetail() const
{
    return detail_;
}

void ListClustersRequest::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool ListClustersRequest::detailIsSet() const
{
    return detailIsSet_;
}

void ListClustersRequest::unsetdetail()
{
    detailIsSet_ = false;
}

std::string ListClustersRequest::getStatus() const
{
    return status_;
}

void ListClustersRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListClustersRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListClustersRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListClustersRequest::getType() const
{
    return type_;
}

void ListClustersRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListClustersRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListClustersRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListClustersRequest::getVersion() const
{
    return version_;
}

void ListClustersRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListClustersRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListClustersRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


