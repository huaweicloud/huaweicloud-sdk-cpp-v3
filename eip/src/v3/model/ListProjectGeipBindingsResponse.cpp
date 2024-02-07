

#include "huaweicloud/eip/v3/model/ListProjectGeipBindingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListProjectGeipBindingsResponse::ListProjectGeipBindingsResponse()
{
    geipBindingsIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListProjectGeipBindingsResponse::~ListProjectGeipBindingsResponse() = default;

void ListProjectGeipBindingsResponse::validate()
{
}

web::json::value ListProjectGeipBindingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(geipBindingsIsSet_) {
        val[utility::conversions::to_string_t("geip_bindings")] = ModelBase::toJson(geipBindings_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListProjectGeipBindingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("geip_bindings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_bindings"));
        if(!fieldValue.is_null())
        {
            std::vector<GeipBindingsInternalResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipBindings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::vector<GeipBindingsInternalResp>& ListProjectGeipBindingsResponse::getGeipBindings()
{
    return geipBindings_;
}

void ListProjectGeipBindingsResponse::setGeipBindings(const std::vector<GeipBindingsInternalResp>& value)
{
    geipBindings_ = value;
    geipBindingsIsSet_ = true;
}

bool ListProjectGeipBindingsResponse::geipBindingsIsSet() const
{
    return geipBindingsIsSet_;
}

void ListProjectGeipBindingsResponse::unsetgeipBindings()
{
    geipBindingsIsSet_ = false;
}

std::string ListProjectGeipBindingsResponse::getRequestId() const
{
    return requestId_;
}

void ListProjectGeipBindingsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListProjectGeipBindingsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListProjectGeipBindingsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


