

#include "huaweicloud/codehub/v4/model/ListMergeRequestChangesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestChangesResponse::ListMergeRequestChangesResponse()
{
    bodyIsSet_ = false;
}

ListMergeRequestChangesResponse::~ListMergeRequestChangesResponse() = default;

void ListMergeRequestChangesResponse::validate()
{
}

web::json::value ListMergeRequestChangesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListMergeRequestChangesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<SimpleMergeRequestChangesDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<SimpleMergeRequestChangesDto>& ListMergeRequestChangesResponse::getBody()
{
    return body_;
}

void ListMergeRequestChangesResponse::setBody(const std::vector<SimpleMergeRequestChangesDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestChangesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestChangesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


