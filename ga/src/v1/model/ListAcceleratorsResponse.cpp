

#include "huaweicloud/ga/v1/model/ListAcceleratorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListAcceleratorsResponse::ListAcceleratorsResponse()
{
    acceleratorsIsSet_ = false;
    pageInfoIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListAcceleratorsResponse::~ListAcceleratorsResponse() = default;

void ListAcceleratorsResponse::validate()
{
}

web::json::value ListAcceleratorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acceleratorsIsSet_) {
        val[utility::conversions::to_string_t("accelerators")] = ModelBase::toJson(accelerators_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListAcceleratorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accelerators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accelerators"));
        if(!fieldValue.is_null())
        {
            std::vector<AcceleratorDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccelerators(refVal);
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


std::vector<AcceleratorDetail>& ListAcceleratorsResponse::getAccelerators()
{
    return accelerators_;
}

void ListAcceleratorsResponse::setAccelerators(const std::vector<AcceleratorDetail>& value)
{
    accelerators_ = value;
    acceleratorsIsSet_ = true;
}

bool ListAcceleratorsResponse::acceleratorsIsSet() const
{
    return acceleratorsIsSet_;
}

void ListAcceleratorsResponse::unsetaccelerators()
{
    acceleratorsIsSet_ = false;
}

PageInfo ListAcceleratorsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAcceleratorsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAcceleratorsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAcceleratorsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListAcceleratorsResponse::getRequestId() const
{
    return requestId_;
}

void ListAcceleratorsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListAcceleratorsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListAcceleratorsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


