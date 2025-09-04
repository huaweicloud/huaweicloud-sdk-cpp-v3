

#include "huaweicloud/codeartsbuild/v3/model/ShowDomainsStatusesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDomainsStatusesRequest::ShowDomainsStatusesRequest()
{
    bodyIsSet_ = false;
}

ShowDomainsStatusesRequest::~ShowDomainsStatusesRequest() = default;

void ShowDomainsStatusesRequest::validate()
{
}

web::json::value ShowDomainsStatusesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowDomainsStatusesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DomainsStatusesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DomainsStatusesRequestBody ShowDomainsStatusesRequest::getBody() const
{
    return body_;
}

void ShowDomainsStatusesRequest::setBody(const DomainsStatusesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowDomainsStatusesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowDomainsStatusesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


