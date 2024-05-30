

#include "huaweicloud/organizations/v1/model/ListReceivedHandshakesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListReceivedHandshakesResponse::ListReceivedHandshakesResponse()
{
    handshakesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListReceivedHandshakesResponse::~ListReceivedHandshakesResponse() = default;

void ListReceivedHandshakesResponse::validate()
{
}

web::json::value ListReceivedHandshakesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handshakesIsSet_) {
        val[utility::conversions::to_string_t("handshakes")] = ModelBase::toJson(handshakes_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListReceivedHandshakesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("handshakes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("handshakes"));
        if(!fieldValue.is_null())
        {
            std::vector<HandshakeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHandshakes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<HandshakeDto>& ListReceivedHandshakesResponse::getHandshakes()
{
    return handshakes_;
}

void ListReceivedHandshakesResponse::setHandshakes(const std::vector<HandshakeDto>& value)
{
    handshakes_ = value;
    handshakesIsSet_ = true;
}

bool ListReceivedHandshakesResponse::handshakesIsSet() const
{
    return handshakesIsSet_;
}

void ListReceivedHandshakesResponse::unsethandshakes()
{
    handshakesIsSet_ = false;
}

PageInfoDto ListReceivedHandshakesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListReceivedHandshakesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListReceivedHandshakesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListReceivedHandshakesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


