

#include "huaweicloud/rds/v3/model/ListDrInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDrInfosResponse::ListDrInfosResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    instanceDrInfosIsSet_ = false;
}

ListDrInfosResponse::~ListDrInfosResponse() = default;

void ListDrInfosResponse::validate()
{
}

web::json::value ListDrInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(instanceDrInfosIsSet_) {
        val[utility::conversions::to_string_t("instance_dr_infos")] = ModelBase::toJson(instanceDrInfos_);
    }

    return val;
}
bool ListDrInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_dr_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_dr_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceDrInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceDrInfos(refVal);
        }
    }
    return ok;
}


int32_t ListDrInfosResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDrInfosResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDrInfosResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDrInfosResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<InstanceDrInfo>& ListDrInfosResponse::getInstanceDrInfos()
{
    return instanceDrInfos_;
}

void ListDrInfosResponse::setInstanceDrInfos(const std::vector<InstanceDrInfo>& value)
{
    instanceDrInfos_ = value;
    instanceDrInfosIsSet_ = true;
}

bool ListDrInfosResponse::instanceDrInfosIsSet() const
{
    return instanceDrInfosIsSet_;
}

void ListDrInfosResponse::unsetinstanceDrInfos()
{
    instanceDrInfosIsSet_ = false;
}

}
}
}
}
}


