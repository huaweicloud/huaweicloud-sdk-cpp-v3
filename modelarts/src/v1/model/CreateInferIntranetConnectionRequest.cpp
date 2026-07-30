

#include "huaweicloud/modelarts/v1/model/CreateInferIntranetConnectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferIntranetConnectionRequest::CreateInferIntranetConnectionRequest()
{
    bodyIsSet_ = false;
}

CreateInferIntranetConnectionRequest::~CreateInferIntranetConnectionRequest() = default;

void CreateInferIntranetConnectionRequest::validate()
{
}

web::json::value CreateInferIntranetConnectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInferIntranetConnectionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IntranetConnectionRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IntranetConnectionRequest CreateInferIntranetConnectionRequest::getBody() const
{
    return body_;
}

void CreateInferIntranetConnectionRequest::setBody(const IntranetConnectionRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInferIntranetConnectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInferIntranetConnectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


