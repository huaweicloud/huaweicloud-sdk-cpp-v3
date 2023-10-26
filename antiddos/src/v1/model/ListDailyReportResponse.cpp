

#include "huaweicloud/antiddos/v1/model/ListDailyReportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ListDailyReportResponse::ListDailyReportResponse()
{
    dataIsSet_ = false;
}

ListDailyReportResponse::~ListDailyReportResponse() = default;

void ListDailyReportResponse::validate()
{
}

web::json::value ListDailyReportResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListDailyReportResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<DailyData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<DailyData>& ListDailyReportResponse::getData()
{
    return data_;
}

void ListDailyReportResponse::setData(const std::vector<DailyData>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDailyReportResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDailyReportResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


