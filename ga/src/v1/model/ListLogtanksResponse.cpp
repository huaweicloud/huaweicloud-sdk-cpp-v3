

#include "huaweicloud/ga/v1/model/ListLogtanksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListLogtanksResponse::ListLogtanksResponse()
{
    logtanksIsSet_ = false;
    pageInfoIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListLogtanksResponse::~ListLogtanksResponse() = default;

void ListLogtanksResponse::validate()
{
}

web::json::value ListLogtanksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logtanksIsSet_) {
        val[utility::conversions::to_string_t("logtanks")] = ModelBase::toJson(logtanks_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListLogtanksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logtanks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtanks"));
        if(!fieldValue.is_null())
        {
            std::vector<LogtankDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtanks(refVal);
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


std::vector<LogtankDetail>& ListLogtanksResponse::getLogtanks()
{
    return logtanks_;
}

void ListLogtanksResponse::setLogtanks(const std::vector<LogtankDetail>& value)
{
    logtanks_ = value;
    logtanksIsSet_ = true;
}

bool ListLogtanksResponse::logtanksIsSet() const
{
    return logtanksIsSet_;
}

void ListLogtanksResponse::unsetlogtanks()
{
    logtanksIsSet_ = false;
}

PageInfo ListLogtanksResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListLogtanksResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListLogtanksResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListLogtanksResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListLogtanksResponse::getRequestId() const
{
    return requestId_;
}

void ListLogtanksResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListLogtanksResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListLogtanksResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


