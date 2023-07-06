

#include "huaweicloud/live/v2/model/ListBandwidthDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListBandwidthDetailResponse::ListBandwidthDetailResponse()
{
    dataListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListBandwidthDetailResponse::~ListBandwidthDetailResponse() = default;

void ListBandwidthDetailResponse::validate()
{
}

web::json::value ListBandwidthDetailResponse::toJson() const
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

bool ListBandwidthDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<V2BandwidthData> refVal;
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

std::vector<V2BandwidthData>& ListBandwidthDetailResponse::getDataList()
{
    return dataList_;
}

void ListBandwidthDetailResponse::setDataList(const std::vector<V2BandwidthData>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ListBandwidthDetailResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ListBandwidthDetailResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

std::string ListBandwidthDetailResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListBandwidthDetailResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListBandwidthDetailResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListBandwidthDetailResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


