

#include "huaweicloud/cfw/v1/model/CreateReportProfileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateReportProfileResponse::CreateReportProfileResponse()
{
    dataIsSet_ = false;
}

CreateReportProfileResponse::~CreateReportProfileResponse() = default;

void CreateReportProfileResponse::validate()
{
}

web::json::value CreateReportProfileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CreateReportProfileResponse::fromJson(const web::json::value& val)
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


ReportProfileResp_data CreateReportProfileResponse::getData() const
{
    return data_;
}

void CreateReportProfileResponse::setData(const ReportProfileResp_data& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateReportProfileResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateReportProfileResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


