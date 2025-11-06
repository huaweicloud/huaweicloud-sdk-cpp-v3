

#include "huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectMergeRequestTemplatesResponse::ListProjectMergeRequestTemplatesResponse()
{
    bodyIsSet_ = false;
}

ListProjectMergeRequestTemplatesResponse::~ListProjectMergeRequestTemplatesResponse() = default;

void ListProjectMergeRequestTemplatesResponse::validate()
{
}

web::json::value ListProjectMergeRequestTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProjectMergeRequestTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectMergeRequestTemplateDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ProjectMergeRequestTemplateDto>& ListProjectMergeRequestTemplatesResponse::getBody()
{
    return body_;
}

void ListProjectMergeRequestTemplatesResponse::setBody(const std::vector<ProjectMergeRequestTemplateDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectMergeRequestTemplatesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectMergeRequestTemplatesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


