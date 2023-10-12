

#include "huaweicloud/dds/v3/model/ListAz2MigrateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListAz2MigrateRequest::ListAz2MigrateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListAz2MigrateRequest::~ListAz2MigrateRequest() = default;

void ListAz2MigrateRequest::validate()
{
}

web::json::value ListAz2MigrateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListAz2MigrateRequest::fromJson(const web::json::value& val)
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


std::string ListAz2MigrateRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAz2MigrateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAz2MigrateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAz2MigrateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


