

#include "huaweicloud/codehub/v4/model/ListRepositoryCommitRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryCommitRulesResponse::ListRepositoryCommitRulesResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryCommitRulesResponse::~ListRepositoryCommitRulesResponse() = default;

void ListRepositoryCommitRulesResponse::validate()
{
}

web::json::value ListRepositoryCommitRulesResponse::toJson() const
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
bool ListRepositoryCommitRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitRuleDto> refVal;
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


std::vector<CommitRuleDto>& ListRepositoryCommitRulesResponse::getBody()
{
    return body_;
}

void ListRepositoryCommitRulesResponse::setBody(const std::vector<CommitRuleDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryCommitRulesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryCommitRulesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryCommitRulesResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryCommitRulesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryCommitRulesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryCommitRulesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


