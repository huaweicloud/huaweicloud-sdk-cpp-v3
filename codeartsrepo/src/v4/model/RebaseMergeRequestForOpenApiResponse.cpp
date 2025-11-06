

#include "huaweicloud/codeartsrepo/v4/model/RebaseMergeRequestForOpenApiResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RebaseMergeRequestForOpenApiResponse::RebaseMergeRequestForOpenApiResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

RebaseMergeRequestForOpenApiResponse::~RebaseMergeRequestForOpenApiResponse() = default;

void RebaseMergeRequestForOpenApiResponse::validate()
{
}

web::json::value RebaseMergeRequestForOpenApiResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RebaseMergeRequestForOpenApiResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RebaseMergeRequestForOpenApiResponse::getBody() const
{
    return body_;
}

void RebaseMergeRequestForOpenApiResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RebaseMergeRequestForOpenApiResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void RebaseMergeRequestForOpenApiResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


