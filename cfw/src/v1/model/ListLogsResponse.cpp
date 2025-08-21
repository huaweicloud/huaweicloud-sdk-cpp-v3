

#include "huaweicloud/cfw/v1/model/ListLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListLogsResponse::ListLogsResponse()
{
    dataIsSet_ = false;
}

ListLogsResponse::~ListLogsResponse() = default;

void ListLogsResponse::validate()
{
}

web::json::value ListLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ListLogsResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ListLogsResp_data ListLogsResponse::getData() const
{
    return data_;
}

void ListLogsResponse::setData(const ListLogsResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListLogsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListLogsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


