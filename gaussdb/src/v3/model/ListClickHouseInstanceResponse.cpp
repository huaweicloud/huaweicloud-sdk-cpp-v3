

#include "huaweicloud/gaussdb/v3/model/ListClickHouseInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseInstanceResponse::ListClickHouseInstanceResponse()
{
    instanceIsSet_ = false;
}

ListClickHouseInstanceResponse::~ListClickHouseInstanceResponse() = default;

void ListClickHouseInstanceResponse::validate()
{
}

web::json::value ListClickHouseInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }

    return val;
}
bool ListClickHouseInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            ChInstancesInfoRsponse_instance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    return ok;
}


ChInstancesInfoRsponse_instance ListClickHouseInstanceResponse::getInstance() const
{
    return instance_;
}

void ListClickHouseInstanceResponse::setInstance(const ChInstancesInfoRsponse_instance& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool ListClickHouseInstanceResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void ListClickHouseInstanceResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

}
}
}
}
}


