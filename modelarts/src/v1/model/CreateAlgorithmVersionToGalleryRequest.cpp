

#include "huaweicloud/modelarts/v1/model/CreateAlgorithmVersionToGalleryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAlgorithmVersionToGalleryRequest::CreateAlgorithmVersionToGalleryRequest()
{
    bodyIsSet_ = false;
}

CreateAlgorithmVersionToGalleryRequest::~CreateAlgorithmVersionToGalleryRequest() = default;

void CreateAlgorithmVersionToGalleryRequest::validate()
{
}

web::json::value CreateAlgorithmVersionToGalleryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAlgorithmVersionToGalleryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateAlgorithmVersionToGalleryBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateAlgorithmVersionToGalleryBody CreateAlgorithmVersionToGalleryRequest::getBody() const
{
    return body_;
}

void CreateAlgorithmVersionToGalleryRequest::setBody(const CreateAlgorithmVersionToGalleryBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAlgorithmVersionToGalleryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAlgorithmVersionToGalleryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


