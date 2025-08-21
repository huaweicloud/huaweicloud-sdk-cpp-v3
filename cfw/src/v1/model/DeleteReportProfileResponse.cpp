

#include "huaweicloud/cfw/v1/model/DeleteReportProfileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteReportProfileResponse::DeleteReportProfileResponse()
{
    dataIsSet_ = false;
}

DeleteReportProfileResponse::~DeleteReportProfileResponse() = default;

void DeleteReportProfileResponse::validate()
{
}

web::json::value DeleteReportProfileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteReportProfileResponse::fromJson(const web::json::value& val)
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


ReportProfileResp_data DeleteReportProfileResponse::getData() const
{
    return data_;
}

void DeleteReportProfileResponse::setData(const ReportProfileResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteReportProfileResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteReportProfileResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


