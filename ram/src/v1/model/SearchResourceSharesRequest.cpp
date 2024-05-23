

#include "huaweicloud/ram/v1/model/SearchResourceSharesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceSharesRequest::SearchResourceSharesRequest()
{
    bodyIsSet_ = false;
}

SearchResourceSharesRequest::~SearchResourceSharesRequest() = default;

void SearchResourceSharesRequest::validate()
{
}

web::json::value SearchResourceSharesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchResourceSharesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SearchResourceSharesReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SearchResourceSharesReqBody SearchResourceSharesRequest::getBody() const
{
    return body_;
}

void SearchResourceSharesRequest::setBody(const SearchResourceSharesReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchResourceSharesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchResourceSharesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


