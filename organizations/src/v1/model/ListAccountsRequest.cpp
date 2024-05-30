

#include "huaweicloud/organizations/v1/model/ListAccountsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListAccountsRequest::ListAccountsRequest()
{
    parentId_ = "";
    parentIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListAccountsRequest::~ListAccountsRequest() = default;

void ListAccountsRequest::validate()
{
}

web::json::value ListAccountsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ListAccountsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ListAccountsRequest::getParentId() const
{
    return parentId_;
}

void ListAccountsRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ListAccountsRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ListAccountsRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t ListAccountsRequest::getLimit() const
{
    return limit_;
}

void ListAccountsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccountsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccountsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAccountsRequest::getMarker() const
{
    return marker_;
}

void ListAccountsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAccountsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAccountsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


