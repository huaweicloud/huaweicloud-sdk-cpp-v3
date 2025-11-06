

#include "huaweicloud/codeartsrepo/v4/model/ListRefsListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRefsListResponse::ListRefsListResponse()
{
    bodyIsSet_ = false;
}

ListRefsListResponse::~ListRefsListResponse() = default;

void ListRefsListResponse::validate()
{
}

web::json::value ListRefsListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRefsListResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListRefsListResponse::getBody()
{
    return body_;
}

void ListRefsListResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRefsListResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRefsListResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


