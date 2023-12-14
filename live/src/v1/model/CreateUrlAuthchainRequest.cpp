

#include "huaweicloud/live/v1/model/CreateUrlAuthchainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateUrlAuthchainRequest::CreateUrlAuthchainRequest()
{
    bodyIsSet_ = false;
}

CreateUrlAuthchainRequest::~CreateUrlAuthchainRequest() = default;

void CreateUrlAuthchainRequest::validate()
{
}

web::json::value CreateUrlAuthchainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateUrlAuthchainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateUrlAuthchainReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateUrlAuthchainReq CreateUrlAuthchainRequest::getBody() const
{
    return body_;
}

void CreateUrlAuthchainRequest::setBody(const CreateUrlAuthchainReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateUrlAuthchainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateUrlAuthchainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


