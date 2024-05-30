

#include "huaweicloud/organizations/v1/model/ListHandshakesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListHandshakesResponse::ListHandshakesResponse()
{
    handshakesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListHandshakesResponse::~ListHandshakesResponse() = default;

void ListHandshakesResponse::validate()
{
}

web::json::value ListHandshakesResponse::toJson() const
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
bool ListHandshakesResponse::fromJson(const web::json::value& val)
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


std::vector<HandshakeDto>& ListHandshakesResponse::getHandshakes()
{
    return handshakes_;
}

void ListHandshakesResponse::setHandshakes(const std::vector<HandshakeDto>& value)
{
    handshakes_ = value;
    handshakesIsSet_ = true;
}

bool ListHandshakesResponse::handshakesIsSet() const
{
    return handshakesIsSet_;
}

void ListHandshakesResponse::unsethandshakes()
{
    handshakesIsSet_ = false;
}

PageInfoDto ListHandshakesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListHandshakesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListHandshakesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListHandshakesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


