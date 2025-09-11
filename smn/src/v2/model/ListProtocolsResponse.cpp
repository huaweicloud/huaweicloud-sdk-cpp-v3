

#include "huaweicloud/smn/v2/model/ListProtocolsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListProtocolsResponse::ListProtocolsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    protocolsIsSet_ = false;
}

ListProtocolsResponse::~ListProtocolsResponse() = default;

void ListProtocolsResponse::validate()
{
}

web::json::value ListProtocolsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(protocolsIsSet_) {
        val[utility::conversions::to_string_t("protocols")] = ModelBase::toJson(protocols_);
    }

    return val;
}
bool ListProtocolsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("protocols"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocols"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocols(refVal);
        }
    }
    return ok;
}


std::string ListProtocolsResponse::getRequestId() const
{
    return requestId_;
}

void ListProtocolsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListProtocolsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListProtocolsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<std::string>& ListProtocolsResponse::getProtocols()
{
    return protocols_;
}

void ListProtocolsResponse::setProtocols(const std::vector<std::string>& value)
{
    protocols_ = value;
    protocolsIsSet_ = true;
}

bool ListProtocolsResponse::protocolsIsSet() const
{
    return protocolsIsSet_;
}

void ListProtocolsResponse::unsetprotocols()
{
    protocolsIsSet_ = false;
}

}
}
}
}
}


