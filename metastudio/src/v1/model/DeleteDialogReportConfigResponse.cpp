

#include "huaweicloud/metastudio/v1/model/DeleteDialogReportConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteDialogReportConfigResponse::DeleteDialogReportConfigResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteDialogReportConfigResponse::~DeleteDialogReportConfigResponse() = default;

void DeleteDialogReportConfigResponse::validate()
{
}

web::json::value DeleteDialogReportConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteDialogReportConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string DeleteDialogReportConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteDialogReportConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteDialogReportConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteDialogReportConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


