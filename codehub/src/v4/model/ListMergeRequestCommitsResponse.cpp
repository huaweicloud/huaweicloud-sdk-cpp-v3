

#include "huaweicloud/codehub/v4/model/ListMergeRequestCommitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestCommitsResponse::ListMergeRequestCommitsResponse()
{
    bodyIsSet_ = false;
}

ListMergeRequestCommitsResponse::~ListMergeRequestCommitsResponse() = default;

void ListMergeRequestCommitsResponse::validate()
{
}

web::json::value ListMergeRequestCommitsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListMergeRequestCommitsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestCommitDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<MergeRequestCommitDto>& ListMergeRequestCommitsResponse::getBody()
{
    return body_;
}

void ListMergeRequestCommitsResponse::setBody(const std::vector<MergeRequestCommitDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestCommitsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestCommitsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


