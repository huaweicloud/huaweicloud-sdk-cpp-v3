

#include "huaweicloud/lts/v2/model/CreateAgencyAccessResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateAgencyAccessResponse::CreateAgencyAccessResponse()
{
    bodyIsSet_ = false;
}

CreateAgencyAccessResponse::~CreateAgencyAccessResponse() = default;

void CreateAgencyAccessResponse::validate()
{
}

web::json::value CreateAgencyAccessResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAgencyAccessResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<LTSAccessConfigInfoRespon200> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<LTSAccessConfigInfoRespon200>& CreateAgencyAccessResponse::getBody()
{
    return body_;
}

void CreateAgencyAccessResponse::setBody(const std::vector<LTSAccessConfigInfoRespon200>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAgencyAccessResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAgencyAccessResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


