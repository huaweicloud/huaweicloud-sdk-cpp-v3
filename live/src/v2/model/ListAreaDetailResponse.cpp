

#include "huaweicloud/live/v2/model/ListAreaDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListAreaDetailResponse::ListAreaDetailResponse()
{
    dataListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListAreaDetailResponse::~ListAreaDetailResponse() = default;

void ListAreaDetailResponse::validate()
{
}

web::json::value ListAreaDetailResponse::toJson() const
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

bool ListAreaDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AreaDetail> refVal;
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


std::vector<AreaDetail>& ListAreaDetailResponse::getDataList()
{
    return dataList_;
}

void ListAreaDetailResponse::setDataList(const std::vector<AreaDetail>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ListAreaDetailResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ListAreaDetailResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

std::string ListAreaDetailResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListAreaDetailResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListAreaDetailResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListAreaDetailResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


