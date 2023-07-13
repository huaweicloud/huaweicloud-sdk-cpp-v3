

#include "huaweicloud/eps/v1/model/CreateEnterpriseProjectRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




CreateEnterpriseProjectRequest::CreateEnterpriseProjectRequest()
{
    bodyIsSet_ = false;
}

CreateEnterpriseProjectRequest::~CreateEnterpriseProjectRequest() = default;

void CreateEnterpriseProjectRequest::validate()
{
}

web::json::value CreateEnterpriseProjectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateEnterpriseProjectRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EnterpriseProject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

EnterpriseProject CreateEnterpriseProjectRequest::getBody() const
{
    return body_;
}

void CreateEnterpriseProjectRequest::setBody(const EnterpriseProject& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEnterpriseProjectRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEnterpriseProjectRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


