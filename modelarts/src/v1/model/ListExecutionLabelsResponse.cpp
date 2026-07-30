

#include "huaweicloud/modelarts/v1/model/ListExecutionLabelsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListExecutionLabelsResponse::ListExecutionLabelsResponse()
{
    bodyIsSet_ = false;
}

ListExecutionLabelsResponse::~ListExecutionLabelsResponse() = default;

void ListExecutionLabelsResponse::validate()
{
}

web::json::value ListExecutionLabelsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListExecutionLabelsResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListExecutionLabelsResponse::getBody()
{
    return body_;
}

void ListExecutionLabelsResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListExecutionLabelsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListExecutionLabelsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


