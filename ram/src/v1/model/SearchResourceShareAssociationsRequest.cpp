

#include "huaweicloud/ram/v1/model/SearchResourceShareAssociationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceShareAssociationsRequest::SearchResourceShareAssociationsRequest()
{
    bodyIsSet_ = false;
}

SearchResourceShareAssociationsRequest::~SearchResourceShareAssociationsRequest() = default;

void SearchResourceShareAssociationsRequest::validate()
{
}

web::json::value SearchResourceShareAssociationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchResourceShareAssociationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SearchResourceShareAssociationsReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SearchResourceShareAssociationsReqBody SearchResourceShareAssociationsRequest::getBody() const
{
    return body_;
}

void SearchResourceShareAssociationsRequest::setBody(const SearchResourceShareAssociationsReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchResourceShareAssociationsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchResourceShareAssociationsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


