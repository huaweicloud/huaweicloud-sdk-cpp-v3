

#include "huaweicloud/ga/v1/model/ListListenersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListListenersResponse::ListListenersResponse()
{
    listenersIsSet_ = false;
    pageInfoIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListListenersResponse::~ListListenersResponse() = default;

void ListListenersResponse::validate()
{
}

web::json::value ListListenersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listenersIsSet_) {
        val[utility::conversions::to_string_t("listeners")] = ModelBase::toJson(listeners_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListListenersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("listeners"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listeners"));
        if(!fieldValue.is_null())
        {
            std::vector<ListenerDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListeners(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
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


std::vector<ListenerDetail>& ListListenersResponse::getListeners()
{
    return listeners_;
}

void ListListenersResponse::setListeners(const std::vector<ListenerDetail>& value)
{
    listeners_ = value;
    listenersIsSet_ = true;
}

bool ListListenersResponse::listenersIsSet() const
{
    return listenersIsSet_;
}

void ListListenersResponse::unsetlisteners()
{
    listenersIsSet_ = false;
}

PageInfo ListListenersResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListListenersResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListListenersResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListListenersResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListListenersResponse::getRequestId() const
{
    return requestId_;
}

void ListListenersResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListListenersResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListListenersResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


