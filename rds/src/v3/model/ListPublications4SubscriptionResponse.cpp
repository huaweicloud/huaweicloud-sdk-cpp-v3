

#include "huaweicloud/rds/v3/model/ListPublications4SubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPublications4SubscriptionResponse::ListPublications4SubscriptionResponse()
{
    instancePublicationsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListPublications4SubscriptionResponse::~ListPublications4SubscriptionResponse() = default;

void ListPublications4SubscriptionResponse::validate()
{
}

web::json::value ListPublications4SubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancePublicationsIsSet_) {
        val[utility::conversions::to_string_t("instance_publications")] = ModelBase::toJson(instancePublications_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListPublications4SubscriptionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_publications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_publications"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancePublicatiosInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstancePublications(refVal);
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


std::vector<InstancePublicatiosInfo>& ListPublications4SubscriptionResponse::getInstancePublications()
{
    return instancePublications_;
}

void ListPublications4SubscriptionResponse::setInstancePublications(const std::vector<InstancePublicatiosInfo>& value)
{
    instancePublications_ = value;
    instancePublicationsIsSet_ = true;
}

bool ListPublications4SubscriptionResponse::instancePublicationsIsSet() const
{
    return instancePublicationsIsSet_;
}

void ListPublications4SubscriptionResponse::unsetinstancePublications()
{
    instancePublicationsIsSet_ = false;
}

int32_t ListPublications4SubscriptionResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPublications4SubscriptionResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPublications4SubscriptionResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPublications4SubscriptionResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


