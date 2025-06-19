

#include "huaweicloud/codeartsbuild/v3/model/ListRecommendOfficialTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRecommendOfficialTemplateRequest::ListRecommendOfficialTemplateRequest()
{
    bodyIsSet_ = false;
}

ListRecommendOfficialTemplateRequest::~ListRecommendOfficialTemplateRequest() = default;

void ListRecommendOfficialTemplateRequest::validate()
{
}

web::json::value ListRecommendOfficialTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRecommendOfficialTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListRecommendOfficialTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListRecommendOfficialTemplateRequestBody ListRecommendOfficialTemplateRequest::getBody() const
{
    return body_;
}

void ListRecommendOfficialTemplateRequest::setBody(const ListRecommendOfficialTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRecommendOfficialTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRecommendOfficialTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


