

#include "huaweicloud/kms/v2/model/ListAliasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListAliasesResponse::ListAliasesResponse()
{
    bodyIsSet_ = false;
}

ListAliasesResponse::~ListAliasesResponse() = default;

void ListAliasesResponse::validate()
{
}

web::json::value ListAliasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAliasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ListAliasResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ListAliasResponseBody>& ListAliasesResponse::getBody()
{
    return body_;
}

void ListAliasesResponse::setBody(const std::vector<ListAliasResponseBody>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAliasesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAliasesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


