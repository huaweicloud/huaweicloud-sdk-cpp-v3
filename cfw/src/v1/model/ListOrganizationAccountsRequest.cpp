

#include "huaweicloud/cfw/v1/model/ListOrganizationAccountsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListOrganizationAccountsRequest::ListOrganizationAccountsRequest()
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

ListOrganizationAccountsRequest::~ListOrganizationAccountsRequest() = default;

void ListOrganizationAccountsRequest::validate()
{
}

web::json::value ListOrganizationAccountsRequest::toJson() const
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
bool ListOrganizationAccountsRequest::fromJson(const web::json::value& val)
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


std::string ListOrganizationAccountsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListOrganizationAccountsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListOrganizationAccountsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListOrganizationAccountsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListOrganizationAccountsRequest::getParentId() const
{
    return parentId_;
}

void ListOrganizationAccountsRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ListOrganizationAccountsRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ListOrganizationAccountsRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t ListOrganizationAccountsRequest::getLimit() const
{
    return limit_;
}

void ListOrganizationAccountsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOrganizationAccountsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOrganizationAccountsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListOrganizationAccountsRequest::getMarker() const
{
    return marker_;
}

void ListOrganizationAccountsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListOrganizationAccountsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListOrganizationAccountsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


