

#include "huaweicloud/cdn/v2/model/CreateExportTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateExportTaskRequest::CreateExportTaskRequest()
{
    bodyIsSet_ = false;
}

CreateExportTaskRequest::~CreateExportTaskRequest() = default;

void CreateExportTaskRequest::validate()
{
}

web::json::value CreateExportTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateExportTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExportTaskVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ExportTaskVo CreateExportTaskRequest::getBody() const
{
    return body_;
}

void CreateExportTaskRequest::setBody(const ExportTaskVo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateExportTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateExportTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


