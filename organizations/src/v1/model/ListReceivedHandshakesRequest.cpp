

#include "huaweicloud/organizations/v1/model/ListReceivedHandshakesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListReceivedHandshakesRequest::ListReceivedHandshakesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListReceivedHandshakesRequest::~ListReceivedHandshakesRequest() = default;

void ListReceivedHandshakesRequest::validate()
{
}

web::json::value ListReceivedHandshakesRequest::toJson() const
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

    return val;
}
bool ListReceivedHandshakesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListReceivedHandshakesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListReceivedHandshakesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListReceivedHandshakesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListReceivedHandshakesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

int32_t ListReceivedHandshakesRequest::getLimit() const
{
    return limit_;
}

void ListReceivedHandshakesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReceivedHandshakesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListReceivedHandshakesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListReceivedHandshakesRequest::getMarker() const
{
    return marker_;
}

void ListReceivedHandshakesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListReceivedHandshakesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListReceivedHandshakesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


