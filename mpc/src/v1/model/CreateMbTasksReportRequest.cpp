

#include "huaweicloud/mpc/v1/model/CreateMbTasksReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateMbTasksReportRequest::CreateMbTasksReportRequest()
{
    bodyIsSet_ = false;
}

CreateMbTasksReportRequest::~CreateMbTasksReportRequest() = default;

void CreateMbTasksReportRequest::validate()
{
}

web::json::value CreateMbTasksReportRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateMbTasksReportRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MbTasksReportReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


MbTasksReportReq CreateMbTasksReportRequest::getBody() const
{
    return body_;
}

void CreateMbTasksReportRequest::setBody(const MbTasksReportReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMbTasksReportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMbTasksReportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


