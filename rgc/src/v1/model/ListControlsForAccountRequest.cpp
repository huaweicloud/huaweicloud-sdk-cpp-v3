

#include "huaweicloud/rgc/v1/model/ListControlsForAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListControlsForAccountRequest::ListControlsForAccountRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListControlsForAccountRequest::~ListControlsForAccountRequest() = default;

void ListControlsForAccountRequest::validate()
{
}

web::json::value ListControlsForAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountIdIsSet_) {
        val[utility::conversions::to_string_t("managed_account_id")] = ModelBase::toJson(managedAccountId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListControlsForAccountRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedAccountId(refVal);
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


std::string ListControlsForAccountRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void ListControlsForAccountRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool ListControlsForAccountRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void ListControlsForAccountRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

int32_t ListControlsForAccountRequest::getLimit() const
{
    return limit_;
}

void ListControlsForAccountRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListControlsForAccountRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListControlsForAccountRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListControlsForAccountRequest::getMarker() const
{
    return marker_;
}

void ListControlsForAccountRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListControlsForAccountRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListControlsForAccountRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


