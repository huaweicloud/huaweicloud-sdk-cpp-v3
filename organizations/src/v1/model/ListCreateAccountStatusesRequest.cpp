

#include "huaweicloud/organizations/v1/model/ListCreateAccountStatusesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListCreateAccountStatusesRequest::ListCreateAccountStatusesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    statesIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListCreateAccountStatusesRequest::~ListCreateAccountStatusesRequest() = default;

void ListCreateAccountStatusesRequest::validate()
{
}

web::json::value ListCreateAccountStatusesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(statesIsSet_) {
        val[utility::conversions::to_string_t("states")] = ModelBase::toJson(states_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListCreateAccountStatusesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("states"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("states"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStates(refVal);
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


std::string ListCreateAccountStatusesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListCreateAccountStatusesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListCreateAccountStatusesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListCreateAccountStatusesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::vector<std::string>& ListCreateAccountStatusesRequest::getStates()
{
    return states_;
}

void ListCreateAccountStatusesRequest::setStates(const std::vector<std::string>& value)
{
    states_ = value;
    statesIsSet_ = true;
}

bool ListCreateAccountStatusesRequest::statesIsSet() const
{
    return statesIsSet_;
}

void ListCreateAccountStatusesRequest::unsetstates()
{
    statesIsSet_ = false;
}

int32_t ListCreateAccountStatusesRequest::getLimit() const
{
    return limit_;
}

void ListCreateAccountStatusesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCreateAccountStatusesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCreateAccountStatusesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListCreateAccountStatusesRequest::getMarker() const
{
    return marker_;
}

void ListCreateAccountStatusesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListCreateAccountStatusesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListCreateAccountStatusesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


