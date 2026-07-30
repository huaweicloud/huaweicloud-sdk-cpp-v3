

#include "huaweicloud/modelarts/v1/model/ListDynamicStoragesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDynamicStoragesRequest::ListDynamicStoragesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListDynamicStoragesRequest::~ListDynamicStoragesRequest() = default;

void ListDynamicStoragesRequest::validate()
{
}

web::json::value ListDynamicStoragesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListDynamicStoragesRequest::fromJson(const web::json::value& val)
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


std::string ListDynamicStoragesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDynamicStoragesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDynamicStoragesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDynamicStoragesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


