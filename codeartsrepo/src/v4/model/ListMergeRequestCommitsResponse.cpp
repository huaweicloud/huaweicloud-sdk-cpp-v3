

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestCommitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestCommitsResponse::ListMergeRequestCommitsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
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
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
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
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
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

std::string ListMergeRequestCommitsResponse::getXTotal() const
{
    return xTotal_;
}

void ListMergeRequestCommitsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListMergeRequestCommitsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListMergeRequestCommitsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


