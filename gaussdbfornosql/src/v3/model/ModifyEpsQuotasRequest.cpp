

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyEpsQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyEpsQuotasRequest::ModifyEpsQuotasRequest()
{
    bodyIsSet_ = false;
}

ModifyEpsQuotasRequest::~ModifyEpsQuotasRequest() = default;

void ModifyEpsQuotasRequest::validate()
{
}

web::json::value ModifyEpsQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyEpsQuotasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NoSqlModiflyEpsQuotasRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


NoSqlModiflyEpsQuotasRequestBody ModifyEpsQuotasRequest::getBody() const
{
    return body_;
}

void ModifyEpsQuotasRequest::setBody(const NoSqlModiflyEpsQuotasRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyEpsQuotasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyEpsQuotasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


