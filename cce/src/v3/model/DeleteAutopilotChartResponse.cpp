

#include "huaweicloud/cce/v3/model/DeleteAutopilotChartResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAutopilotChartResponse::DeleteAutopilotChartResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteAutopilotChartResponse::~DeleteAutopilotChartResponse() = default;

void DeleteAutopilotChartResponse::validate()
{
}

web::json::value DeleteAutopilotChartResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAutopilotChartResponse::fromJson(const web::json::value& val)
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


std::string DeleteAutopilotChartResponse::getBody() const
{
    return body_;
}

void DeleteAutopilotChartResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAutopilotChartResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAutopilotChartResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


