

#include "huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupMergeRequestTemplatesResponse::ListGroupMergeRequestTemplatesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListGroupMergeRequestTemplatesResponse::~ListGroupMergeRequestTemplatesResponse() = default;

void ListGroupMergeRequestTemplatesResponse::validate()
{
}

web::json::value ListGroupMergeRequestTemplatesResponse::toJson() const
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
bool ListGroupMergeRequestTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupMergeRequestTemplateDto> refVal;
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


std::vector<GroupMergeRequestTemplateDto>& ListGroupMergeRequestTemplatesResponse::getBody()
{
    return body_;
}

void ListGroupMergeRequestTemplatesResponse::setBody(const std::vector<GroupMergeRequestTemplateDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupMergeRequestTemplatesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupMergeRequestTemplatesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListGroupMergeRequestTemplatesResponse::getXTotal() const
{
    return xTotal_;
}

void ListGroupMergeRequestTemplatesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListGroupMergeRequestTemplatesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListGroupMergeRequestTemplatesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


