

#include "huaweicloud/lts/v2/model/DeleteDashboardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteDashboardRequest::DeleteDashboardRequest()
{
    id_ = "";
    idIsSet_ = false;
    isDeleteCharts_ = false;
    isDeleteChartsIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteDashboardRequest::~DeleteDashboardRequest() = default;

void DeleteDashboardRequest::validate()
{
}

web::json::value DeleteDashboardRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isDeleteChartsIsSet_) {
        val[utility::conversions::to_string_t("is_delete_charts")] = ModelBase::toJson(isDeleteCharts_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool DeleteDashboardRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_delete_charts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete_charts"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDeleteCharts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}

std::string DeleteDashboardRequest::getId() const
{
    return id_;
}

void DeleteDashboardRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteDashboardRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteDashboardRequest::unsetid()
{
    idIsSet_ = false;
}

bool DeleteDashboardRequest::isIsDeleteCharts() const
{
    return isDeleteCharts_;
}

void DeleteDashboardRequest::setIsDeleteCharts(bool value)
{
    isDeleteCharts_ = value;
    isDeleteChartsIsSet_ = true;
}

bool DeleteDashboardRequest::isDeleteChartsIsSet() const
{
    return isDeleteChartsIsSet_;
}

void DeleteDashboardRequest::unsetisDeleteCharts()
{
    isDeleteChartsIsSet_ = false;
}

std::string DeleteDashboardRequest::getContentType() const
{
    return contentType_;
}

void DeleteDashboardRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteDashboardRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteDashboardRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


