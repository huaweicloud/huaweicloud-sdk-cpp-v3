

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlInstancesUnifyStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlInstancesUnifyStatusResponse::ListGaussMySqlInstancesUnifyStatusResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListGaussMySqlInstancesUnifyStatusResponse::~ListGaussMySqlInstancesUnifyStatusResponse() = default;

void ListGaussMySqlInstancesUnifyStatusResponse::validate()
{
}

web::json::value ListGaussMySqlInstancesUnifyStatusResponse::toJson() const
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
bool ListGaussMySqlInstancesUnifyStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlInstanceListInfoUnifyStatus> refVal;
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


std::vector<MysqlInstanceListInfoUnifyStatus>& ListGaussMySqlInstancesUnifyStatusResponse::getInstances()
{
    return instances_;
}

void ListGaussMySqlInstancesUnifyStatusResponse::setInstances(const std::vector<MysqlInstanceListInfoUnifyStatus>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListGaussMySqlInstancesUnifyStatusResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGaussMySqlInstancesUnifyStatusResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


