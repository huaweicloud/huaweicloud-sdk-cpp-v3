

#include "huaweicloud/vod/v1/model/ListCategoryInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListCategoryInfoResponse::ListCategoryInfoResponse()
{
    bodyIsSet_ = false;
}

ListCategoryInfoResponse::~ListCategoryInfoResponse() = default;

void ListCategoryInfoResponse::validate()
{
}

web::json::value ListCategoryInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListCategoryInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryCategoryInfoRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<QueryCategoryInfoRsp>& ListCategoryInfoResponse::getBody()
{
    return body_;
}

void ListCategoryInfoResponse::setBody(const std::vector<QueryCategoryInfoRsp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListCategoryInfoResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListCategoryInfoResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


