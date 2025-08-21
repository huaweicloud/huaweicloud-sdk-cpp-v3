

#include "huaweicloud/cfw/v1/model/ListReportProfilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListReportProfilesResponse::ListReportProfilesResponse()
{
    dataIsSet_ = false;
}

ListReportProfilesResponse::~ListReportProfilesResponse() = default;

void ListReportProfilesResponse::validate()
{
}

web::json::value ListReportProfilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListReportProfilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ListReportProfilesResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ListReportProfilesResp_data ListReportProfilesResponse::getData() const
{
    return data_;
}

void ListReportProfilesResponse::setData(const ListReportProfilesResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListReportProfilesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListReportProfilesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


