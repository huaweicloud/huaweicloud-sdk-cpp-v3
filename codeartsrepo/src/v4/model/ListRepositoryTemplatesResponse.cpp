

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryTemplatesResponse::ListRepositoryTemplatesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryTemplatesResponse::~ListRepositoryTemplatesResponse() = default;

void ListRepositoryTemplatesResponse::validate()
{
}

web::json::value ListRepositoryTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListRepositoryTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryTemplateDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<RepositoryTemplateDto>& ListRepositoryTemplatesResponse::getBody()
{
    return body_;
}

void ListRepositoryTemplatesResponse::setBody(const std::vector<RepositoryTemplateDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryTemplatesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryTemplatesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryTemplatesResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryTemplatesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryTemplatesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryTemplatesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


