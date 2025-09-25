

#include "huaweicloud/codehub/v4/model/CreateRepositorySystemLabelsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateRepositorySystemLabelsResponse::CreateRepositorySystemLabelsResponse()
{
    bodyIsSet_ = false;
}

CreateRepositorySystemLabelsResponse::~CreateRepositorySystemLabelsResponse() = default;

void CreateRepositorySystemLabelsResponse::validate()
{
}

web::json::value CreateRepositorySystemLabelsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRepositorySystemLabelsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<LabelDetailDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<LabelDetailDto>& CreateRepositorySystemLabelsResponse::getBody()
{
    return body_;
}

void CreateRepositorySystemLabelsResponse::setBody(const std::vector<LabelDetailDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRepositorySystemLabelsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRepositorySystemLabelsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


