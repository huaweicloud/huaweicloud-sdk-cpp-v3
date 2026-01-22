

#include "huaweicloud/cfw/v1/model/ListReportHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListReportHistoryResponse::ListReportHistoryResponse()
{
    dataIsSet_ = false;
}

ListReportHistoryResponse::~ListReportHistoryResponse() = default;

void ListReportHistoryResponse::validate()
{
}

web::json::value ListReportHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListReportHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ListReportHistoryResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ListReportHistoryResp_data ListReportHistoryResponse::getData() const
{
    return data_;
}

void ListReportHistoryResponse::setData(const ListReportHistoryResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListReportHistoryResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListReportHistoryResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


