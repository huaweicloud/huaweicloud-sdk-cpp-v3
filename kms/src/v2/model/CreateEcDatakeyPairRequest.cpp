

#include "huaweicloud/kms/v2/model/CreateEcDatakeyPairRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateEcDatakeyPairRequest::CreateEcDatakeyPairRequest()
{
    bodyIsSet_ = false;
}

CreateEcDatakeyPairRequest::~CreateEcDatakeyPairRequest() = default;

void CreateEcDatakeyPairRequest::validate()
{
}

web::json::value CreateEcDatakeyPairRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateEcDatakeyPairRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateEcDatakeyPairRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateEcDatakeyPairRequestBody CreateEcDatakeyPairRequest::getBody() const
{
    return body_;
}

void CreateEcDatakeyPairRequest::setBody(const CreateEcDatakeyPairRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEcDatakeyPairRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEcDatakeyPairRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


