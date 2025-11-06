

#include "huaweicloud/codeartsrepo/v4/model/ListProjectSubgroupsAndRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectSubgroupsAndRepositoriesResponse::ListProjectSubgroupsAndRepositoriesResponse()
{
    bodyIsSet_ = false;
}

ListProjectSubgroupsAndRepositoriesResponse::~ListProjectSubgroupsAndRepositoriesResponse() = default;

void ListProjectSubgroupsAndRepositoriesResponse::validate()
{
}

web::json::value ListProjectSubgroupsAndRepositoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProjectSubgroupsAndRepositoriesResponse::fromJson(const web::json::value& val)
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


std::vector<SubgroupAndProjectBaseDto>& ListProjectSubgroupsAndRepositoriesResponse::getBody()
{
    return body_;
}

void ListProjectSubgroupsAndRepositoriesResponse::setBody(const std::vector<SubgroupAndProjectBaseDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectSubgroupsAndRepositoriesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectSubgroupsAndRepositoriesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


