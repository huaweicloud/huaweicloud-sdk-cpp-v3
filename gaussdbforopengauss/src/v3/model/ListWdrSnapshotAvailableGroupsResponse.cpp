

#include "huaweicloud/gaussdbforopengauss/v3/model/ListWdrSnapshotAvailableGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListWdrSnapshotAvailableGroupsResponse::ListWdrSnapshotAvailableGroupsResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    groupsIsSet_ = false;
}

ListWdrSnapshotAvailableGroupsResponse::~ListWdrSnapshotAvailableGroupsResponse() = default;

void ListWdrSnapshotAvailableGroupsResponse::validate()
{
}

web::json::value ListWdrSnapshotAvailableGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(groupsIsSet_) {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(groups_);
    }

    return val;
}
bool ListWdrSnapshotAvailableGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            std::vector<WdrSnapshotGroupResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
        }
    }
    return ok;
}


int64_t ListWdrSnapshotAvailableGroupsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListWdrSnapshotAvailableGroupsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListWdrSnapshotAvailableGroupsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListWdrSnapshotAvailableGroupsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<WdrSnapshotGroupResult>& ListWdrSnapshotAvailableGroupsResponse::getGroups()
{
    return groups_;
}

void ListWdrSnapshotAvailableGroupsResponse::setGroups(const std::vector<WdrSnapshotGroupResult>& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool ListWdrSnapshotAvailableGroupsResponse::groupsIsSet() const
{
    return groupsIsSet_;
}

void ListWdrSnapshotAvailableGroupsResponse::unsetgroups()
{
    groupsIsSet_ = false;
}

}
}
}
}
}


