

#include "huaweicloud/kms/v2/model/CreateRsaDatakeyPairRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateRsaDatakeyPairRequest::CreateRsaDatakeyPairRequest()
{
    bodyIsSet_ = false;
}

CreateRsaDatakeyPairRequest::~CreateRsaDatakeyPairRequest() = default;

void CreateRsaDatakeyPairRequest::validate()
{
}

web::json::value CreateRsaDatakeyPairRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRsaDatakeyPairRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateRsaDatakeyPairRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateRsaDatakeyPairRequestBody CreateRsaDatakeyPairRequest::getBody() const
{
    return body_;
}

void CreateRsaDatakeyPairRequest::setBody(const CreateRsaDatakeyPairRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRsaDatakeyPairRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRsaDatakeyPairRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


