

#include "huaweicloud/rgc/v1/model/ListManagedAccountsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListManagedAccountsRequest::ListManagedAccountsRequest()
{
    controlId_ = "";
    controlIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListManagedAccountsRequest::~ListManagedAccountsRequest() = default;

void ListManagedAccountsRequest::validate()
{
}

web::json::value ListManagedAccountsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(controlIdIsSet_) {
        val[utility::conversions::to_string_t("control_id")] = ModelBase::toJson(controlId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListManagedAccountsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("control_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlId(refVal);
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


std::string ListManagedAccountsRequest::getControlId() const
{
    return controlId_;
}

void ListManagedAccountsRequest::setControlId(const std::string& value)
{
    controlId_ = value;
    controlIdIsSet_ = true;
}

bool ListManagedAccountsRequest::controlIdIsSet() const
{
    return controlIdIsSet_;
}

void ListManagedAccountsRequest::unsetcontrolId()
{
    controlIdIsSet_ = false;
}

int32_t ListManagedAccountsRequest::getLimit() const
{
    return limit_;
}

void ListManagedAccountsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListManagedAccountsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListManagedAccountsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListManagedAccountsRequest::getMarker() const
{
    return marker_;
}

void ListManagedAccountsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListManagedAccountsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListManagedAccountsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


