

#include "huaweicloud/smn/v2/model/ListApplicationEndpointsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationEndpointsResponse::ListApplicationEndpointsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    nextPageFlag_ = false;
    nextPageFlagIsSet_ = false;
    endpointsIsSet_ = false;
}

ListApplicationEndpointsResponse::~ListApplicationEndpointsResponse() = default;

void ListApplicationEndpointsResponse::validate()
{
}

web::json::value ListApplicationEndpointsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(nextPageFlagIsSet_) {
        val[utility::conversions::to_string_t("next_page_flag")] = ModelBase::toJson(nextPageFlag_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }

    return val;
}
bool ListApplicationEndpointsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_page_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_page_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextPageFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationEndpoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    return ok;
}


std::string ListApplicationEndpointsResponse::getRequestId() const
{
    return requestId_;
}

void ListApplicationEndpointsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListApplicationEndpointsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListApplicationEndpointsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

bool ListApplicationEndpointsResponse::isNextPageFlag() const
{
    return nextPageFlag_;
}

void ListApplicationEndpointsResponse::setNextPageFlag(bool value)
{
    nextPageFlag_ = value;
    nextPageFlagIsSet_ = true;
}

bool ListApplicationEndpointsResponse::nextPageFlagIsSet() const
{
    return nextPageFlagIsSet_;
}

void ListApplicationEndpointsResponse::unsetnextPageFlag()
{
    nextPageFlagIsSet_ = false;
}

std::vector<ApplicationEndpoint>& ListApplicationEndpointsResponse::getEndpoints()
{
    return endpoints_;
}

void ListApplicationEndpointsResponse::setEndpoints(const std::vector<ApplicationEndpoint>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool ListApplicationEndpointsResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void ListApplicationEndpointsResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

}
}
}
}
}


