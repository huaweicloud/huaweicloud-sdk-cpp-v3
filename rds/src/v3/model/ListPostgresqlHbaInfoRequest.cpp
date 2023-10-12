

#include "huaweicloud/rds/v3/model/ListPostgresqlHbaInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlHbaInfoRequest::ListPostgresqlHbaInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListPostgresqlHbaInfoRequest::~ListPostgresqlHbaInfoRequest() = default;

void ListPostgresqlHbaInfoRequest::validate()
{
}

web::json::value ListPostgresqlHbaInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListPostgresqlHbaInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListPostgresqlHbaInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPostgresqlHbaInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPostgresqlHbaInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPostgresqlHbaInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


