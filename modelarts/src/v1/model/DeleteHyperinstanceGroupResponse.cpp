

#include "huaweicloud/modelarts/v1/model/DeleteHyperinstanceGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteHyperinstanceGroupResponse::DeleteHyperinstanceGroupResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteHyperinstanceGroupResponse::~DeleteHyperinstanceGroupResponse() = default;

void DeleteHyperinstanceGroupResponse::validate()
{
}

web::json::value DeleteHyperinstanceGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteHyperinstanceGroupResponse::fromJson(const web::json::value& val)
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


std::string DeleteHyperinstanceGroupResponse::getBody() const
{
    return body_;
}

void DeleteHyperinstanceGroupResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteHyperinstanceGroupResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteHyperinstanceGroupResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


