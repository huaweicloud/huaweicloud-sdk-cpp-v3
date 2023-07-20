

#include "huaweicloud/dds/v3/model/ListInstanceTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListInstanceTagsRequest::ListInstanceTagsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListInstanceTagsRequest::~ListInstanceTagsRequest() = default;

void ListInstanceTagsRequest::validate()
{
}

web::json::value ListInstanceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool ListInstanceTagsRequest::fromJson(const web::json::value& val)
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

std::string ListInstanceTagsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceTagsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceTagsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceTagsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


