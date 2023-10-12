

#include "huaweicloud/live/v2/model/ListDomainTrafficDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListDomainTrafficDetailResponse::ListDomainTrafficDetailResponse()
{
    dataListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListDomainTrafficDetailResponse::~ListDomainTrafficDetailResponse() = default;

void ListDomainTrafficDetailResponse::validate()
{
}

web::json::value ListDomainTrafficDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListDomainTrafficDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TrafficData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<TrafficData>& ListDomainTrafficDetailResponse::getDataList()
{
    return dataList_;
}

void ListDomainTrafficDetailResponse::setDataList(const std::vector<TrafficData>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ListDomainTrafficDetailResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ListDomainTrafficDetailResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

std::string ListDomainTrafficDetailResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListDomainTrafficDetailResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListDomainTrafficDetailResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListDomainTrafficDetailResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


