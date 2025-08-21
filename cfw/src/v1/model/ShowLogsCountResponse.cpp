

#include "huaweicloud/cfw/v1/model/ShowLogsCountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowLogsCountResponse::ShowLogsCountResponse()
{
    dataIsSet_ = false;
}

ShowLogsCountResponse::~ShowLogsCountResponse() = default;

void ShowLogsCountResponse::validate()
{
}

web::json::value ShowLogsCountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowLogsCountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ShowLogsCountResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ShowLogsCountResp_data ShowLogsCountResponse::getData() const
{
    return data_;
}

void ShowLogsCountResponse::setData(const ShowLogsCountResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowLogsCountResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowLogsCountResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


