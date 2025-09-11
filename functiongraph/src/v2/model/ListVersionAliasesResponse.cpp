

#include "huaweicloud/functiongraph/v2/model/ListVersionAliasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListVersionAliasesResponse::ListVersionAliasesResponse()
{
    bodyIsSet_ = false;
}

ListVersionAliasesResponse::~ListVersionAliasesResponse() = default;

void ListVersionAliasesResponse::validate()
{
}

web::json::value ListVersionAliasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListVersionAliasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ListVersionAliasResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ListVersionAliasResult>& ListVersionAliasesResponse::getBody()
{
    return body_;
}

void ListVersionAliasesResponse::setBody(const std::vector<ListVersionAliasResult>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListVersionAliasesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListVersionAliasesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


