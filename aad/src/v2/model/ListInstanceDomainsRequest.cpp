

#include "huaweicloud/aad/v2/model/ListInstanceDomainsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListInstanceDomainsRequest::ListInstanceDomainsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListInstanceDomainsRequest::~ListInstanceDomainsRequest() = default;

void ListInstanceDomainsRequest::validate()
{
}

web::json::value ListInstanceDomainsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListInstanceDomainsRequest::fromJson(const web::json::value& val)
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


std::string ListInstanceDomainsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceDomainsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceDomainsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceDomainsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


