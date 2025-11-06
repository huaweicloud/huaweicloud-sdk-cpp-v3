

#include "huaweicloud/codeartsrepo/v4/model/ListFileUpperTreeEntriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListFileUpperTreeEntriesResponse::ListFileUpperTreeEntriesResponse()
{
    bodyIsSet_ = false;
}

ListFileUpperTreeEntriesResponse::~ListFileUpperTreeEntriesResponse() = default;

void ListFileUpperTreeEntriesResponse::validate()
{
}

web::json::value ListFileUpperTreeEntriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListFileUpperTreeEntriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TreeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TreeDto>& ListFileUpperTreeEntriesResponse::getBody()
{
    return body_;
}

void ListFileUpperTreeEntriesResponse::setBody(const std::vector<TreeDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListFileUpperTreeEntriesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListFileUpperTreeEntriesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


