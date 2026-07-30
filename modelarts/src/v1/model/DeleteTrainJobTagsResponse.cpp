

#include "huaweicloud/modelarts/v1/model/DeleteTrainJobTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteTrainJobTagsResponse::DeleteTrainJobTagsResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteTrainJobTagsResponse::~DeleteTrainJobTagsResponse() = default;

void DeleteTrainJobTagsResponse::validate()
{
}

web::json::value DeleteTrainJobTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteTrainJobTagsResponse::fromJson(const web::json::value& val)
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


std::string DeleteTrainJobTagsResponse::getBody() const
{
    return body_;
}

void DeleteTrainJobTagsResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTrainJobTagsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTrainJobTagsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


