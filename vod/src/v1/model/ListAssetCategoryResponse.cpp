

#include "huaweicloud/vod/v1/model/ListAssetCategoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetCategoryResponse::ListAssetCategoryResponse()
{
    bodyIsSet_ = false;
}

ListAssetCategoryResponse::~ListAssetCategoryResponse() = default;

void ListAssetCategoryResponse::validate()
{
}

web::json::value ListAssetCategoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAssetCategoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryCategoryRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<QueryCategoryRsp>& ListAssetCategoryResponse::getBody()
{
    return body_;
}

void ListAssetCategoryResponse::setBody(const std::vector<QueryCategoryRsp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAssetCategoryResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAssetCategoryResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


