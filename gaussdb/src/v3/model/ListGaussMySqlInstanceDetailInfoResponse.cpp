

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlInstanceDetailInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlInstanceDetailInfoResponse::ListGaussMySqlInstanceDetailInfoResponse()
{
    instancesIsSet_ = false;
}

ListGaussMySqlInstanceDetailInfoResponse::~ListGaussMySqlInstanceDetailInfoResponse() = default;

void ListGaussMySqlInstanceDetailInfoResponse::validate()
{
}

web::json::value ListGaussMySqlInstanceDetailInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListGaussMySqlInstanceDetailInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlInstanceInfoDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::vector<MysqlInstanceInfoDetail>& ListGaussMySqlInstanceDetailInfoResponse::getInstances()
{
    return instances_;
}

void ListGaussMySqlInstanceDetailInfoResponse::setInstances(const std::vector<MysqlInstanceInfoDetail>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListGaussMySqlInstanceDetailInfoResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListGaussMySqlInstanceDetailInfoResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


