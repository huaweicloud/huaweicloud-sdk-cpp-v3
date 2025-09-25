

#include "huaweicloud/codehub/v4/model/ListMergeRequestChangesTreesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestChangesTreesResponse::ListMergeRequestChangesTreesResponse()
{
    bodyIsSet_ = false;
}

ListMergeRequestChangesTreesResponse::~ListMergeRequestChangesTreesResponse() = default;

void ListMergeRequestChangesTreesResponse::validate()
{
}

web::json::value ListMergeRequestChangesTreesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListMergeRequestChangesTreesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ChangesTreeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ChangesTreeDto>& ListMergeRequestChangesTreesResponse::getBody()
{
    return body_;
}

void ListMergeRequestChangesTreesResponse::setBody(const std::vector<ChangesTreeDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestChangesTreesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestChangesTreesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


