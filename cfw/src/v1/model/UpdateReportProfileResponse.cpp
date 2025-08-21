

#include "huaweicloud/cfw/v1/model/UpdateReportProfileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateReportProfileResponse::UpdateReportProfileResponse()
{
    dataIsSet_ = false;
}

UpdateReportProfileResponse::~UpdateReportProfileResponse() = default;

void UpdateReportProfileResponse::validate()
{
}

web::json::value UpdateReportProfileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateReportProfileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ReportProfileResp_data refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ReportProfileResp_data UpdateReportProfileResponse::getData() const
{
    return data_;
}

void UpdateReportProfileResponse::setData(const ReportProfileResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateReportProfileResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateReportProfileResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


