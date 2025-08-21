

#include "huaweicloud/cfw/v1/model/ListOrganizationTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListOrganizationTreeRequest::ListOrganizationTreeRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListOrganizationTreeRequest::~ListOrganizationTreeRequest() = default;

void ListOrganizationTreeRequest::validate()
{
}

web::json::value ListOrganizationTreeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListOrganizationTreeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
    return ok;
}


std::string ListOrganizationTreeRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListOrganizationTreeRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListOrganizationTreeRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListOrganizationTreeRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListOrganizationTreeRequest::getParentId() const
{
    return parentId_;
}

void ListOrganizationTreeRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ListOrganizationTreeRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ListOrganizationTreeRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t ListOrganizationTreeRequest::getLimit() const
{
    return limit_;
}

void ListOrganizationTreeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOrganizationTreeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOrganizationTreeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListOrganizationTreeRequest::getMarker() const
{
    return marker_;
}

void ListOrganizationTreeRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListOrganizationTreeRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListOrganizationTreeRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


