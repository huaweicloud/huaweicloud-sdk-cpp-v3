

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlInstanceDetailInfoUnifyStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlInstanceDetailInfoUnifyStatusResponse::ListGaussMySqlInstanceDetailInfoUnifyStatusResponse()
{
    instancesIsSet_ = false;
}

ListGaussMySqlInstanceDetailInfoUnifyStatusResponse::~ListGaussMySqlInstanceDetailInfoUnifyStatusResponse() = default;

void ListGaussMySqlInstanceDetailInfoUnifyStatusResponse::validate()
{
}

web::json::value ListGaussMySqlInstanceDetailInfoUnifyStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListGaussMySqlInstanceDetailInfoUnifyStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlInstanceInfoDetailUnifyStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::vector<MysqlInstanceInfoDetailUnifyStatus>& ListGaussMySqlInstanceDetailInfoUnifyStatusResponse::getInstances()
{
    return instances_;
}

void ListGaussMySqlInstanceDetailInfoUnifyStatusResponse::setInstances(const std::vector<MysqlInstanceInfoDetailUnifyStatus>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListGaussMySqlInstanceDetailInfoUnifyStatusResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListGaussMySqlInstanceDetailInfoUnifyStatusResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


