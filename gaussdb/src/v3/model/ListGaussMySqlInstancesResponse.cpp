

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlInstancesResponse::ListGaussMySqlInstancesResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListGaussMySqlInstancesResponse::~ListGaussMySqlInstancesResponse() = default;

void ListGaussMySqlInstancesResponse::validate()
{
}

web::json::value ListGaussMySqlInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListGaussMySqlInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlInstanceListInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
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


std::vector<MysqlInstanceListInfo>& ListGaussMySqlInstancesResponse::getInstances()
{
    return instances_;
}

void ListGaussMySqlInstancesResponse::setInstances(const std::vector<MysqlInstanceListInfo>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListGaussMySqlInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListGaussMySqlInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListGaussMySqlInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGaussMySqlInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGaussMySqlInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGaussMySqlInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


