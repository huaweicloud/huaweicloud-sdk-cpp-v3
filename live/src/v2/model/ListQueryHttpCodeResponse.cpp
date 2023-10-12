

#include "huaweicloud/live/v2/model/ListQueryHttpCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListQueryHttpCodeResponse::ListQueryHttpCodeResponse()
{
    dataSeriesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListQueryHttpCodeResponse::~ListQueryHttpCodeResponse() = default;

void ListQueryHttpCodeResponse::validate()
{
}

web::json::value ListQueryHttpCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataSeriesIsSet_) {
        val[utility::conversions::to_string_t("data_series")] = ModelBase::toJson(dataSeries_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListQueryHttpCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_series"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_series"));
        if(!fieldValue.is_null())
        {
            std::vector<HttpCodeSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSeries(refVal);
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


std::vector<HttpCodeSummary>& ListQueryHttpCodeResponse::getDataSeries()
{
    return dataSeries_;
}

void ListQueryHttpCodeResponse::setDataSeries(const std::vector<HttpCodeSummary>& value)
{
    dataSeries_ = value;
    dataSeriesIsSet_ = true;
}

bool ListQueryHttpCodeResponse::dataSeriesIsSet() const
{
    return dataSeriesIsSet_;
}

void ListQueryHttpCodeResponse::unsetdataSeries()
{
    dataSeriesIsSet_ = false;
}

std::string ListQueryHttpCodeResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListQueryHttpCodeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListQueryHttpCodeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListQueryHttpCodeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


