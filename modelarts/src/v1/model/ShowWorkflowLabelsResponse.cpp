

#include "huaweicloud/modelarts/v1/model/ShowWorkflowLabelsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowLabelsResponse::ShowWorkflowLabelsResponse()
{
    bodyIsSet_ = false;
}

ShowWorkflowLabelsResponse::~ShowWorkflowLabelsResponse() = default;

void ShowWorkflowLabelsResponse::validate()
{
}

web::json::value ShowWorkflowLabelsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowWorkflowLabelsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowWorkflowLabelsResponse::getBody()
{
    return body_;
}

void ShowWorkflowLabelsResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowWorkflowLabelsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowWorkflowLabelsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


