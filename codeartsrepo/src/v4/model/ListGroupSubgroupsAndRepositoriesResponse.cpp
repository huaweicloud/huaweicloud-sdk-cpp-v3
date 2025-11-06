

#include "huaweicloud/codeartsrepo/v4/model/ListGroupSubgroupsAndRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupSubgroupsAndRepositoriesResponse::ListGroupSubgroupsAndRepositoriesResponse()
{
    bodyIsSet_ = false;
}

ListGroupSubgroupsAndRepositoriesResponse::~ListGroupSubgroupsAndRepositoriesResponse() = default;

void ListGroupSubgroupsAndRepositoriesResponse::validate()
{
}

web::json::value ListGroupSubgroupsAndRepositoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupSubgroupsAndRepositoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<SubgroupAndProjectBaseDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<SubgroupAndProjectBaseDto>& ListGroupSubgroupsAndRepositoriesResponse::getBody()
{
    return body_;
}

void ListGroupSubgroupsAndRepositoriesResponse::setBody(const std::vector<SubgroupAndProjectBaseDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupSubgroupsAndRepositoriesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupSubgroupsAndRepositoriesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


