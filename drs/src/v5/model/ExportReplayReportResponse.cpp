

#include "huaweicloud/drs/v5/model/ExportReplayReportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportReplayReportResponse::ExportReplayReportResponse()
{
    bodyIsSet_ = false;
}

ExportReplayReportResponse::~ExportReplayReportResponse() = default;

void ExportReplayReportResponse::validate()
{
}

web::json::value ExportReplayReportResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExportReplayReportResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object ExportReplayReportResponse::getBody() const
{
    return body_;
}

void ExportReplayReportResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportReplayReportResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportReplayReportResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


