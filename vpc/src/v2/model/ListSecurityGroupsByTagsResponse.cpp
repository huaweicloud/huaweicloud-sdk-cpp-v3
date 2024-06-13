

#include "huaweicloud/vpc/v2/model/ListSecurityGroupsByTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSecurityGroupsByTagsResponse::ListSecurityGroupsByTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSecurityGroupsByTagsResponse::~ListSecurityGroupsByTagsResponse() = default;

void ListSecurityGroupsByTagsResponse::validate()
{
}

web::json::value ListSecurityGroupsByTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListSecurityGroupsByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ListResourceResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ListResourceResp>& ListSecurityGroupsByTagsResponse::getResources()
{
    return resources_;
}

void ListSecurityGroupsByTagsResponse::setResources(const std::vector<ListResourceResp>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListSecurityGroupsByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListSecurityGroupsByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListSecurityGroupsByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSecurityGroupsByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSecurityGroupsByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSecurityGroupsByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


