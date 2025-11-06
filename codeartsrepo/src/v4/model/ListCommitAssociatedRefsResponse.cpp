

#include "huaweicloud/codeartsrepo/v4/model/ListCommitAssociatedRefsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListCommitAssociatedRefsResponse::ListCommitAssociatedRefsResponse()
{
    bodyIsSet_ = false;
}

ListCommitAssociatedRefsResponse::~ListCommitAssociatedRefsResponse() = default;

void ListCommitAssociatedRefsResponse::validate()
{
}

web::json::value ListCommitAssociatedRefsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListCommitAssociatedRefsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListCommitAssociatedRefsResponse::getBody()
{
    return body_;
}

void ListCommitAssociatedRefsResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListCommitAssociatedRefsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListCommitAssociatedRefsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


