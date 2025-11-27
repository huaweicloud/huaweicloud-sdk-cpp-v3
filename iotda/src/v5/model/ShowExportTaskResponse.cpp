

#include "huaweicloud/iotda/v5/model/ShowExportTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowExportTaskResponse::ShowExportTaskResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ShowExportTaskResponse::~ShowExportTaskResponse() = default;

void ShowExportTaskResponse::validate()
{
}

web::json::value ShowExportTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowExportTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowExportTaskResponse::getBody() const
{
    return body_;
}

void ShowExportTaskResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowExportTaskResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowExportTaskResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


