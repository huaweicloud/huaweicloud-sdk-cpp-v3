

#include "huaweicloud/dds/v3/model/ShowClientNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowClientNetworkRequest::ShowClientNetworkRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowClientNetworkRequest::~ShowClientNetworkRequest() = default;

void ShowClientNetworkRequest::validate()
{
}

web::json::value ShowClientNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowClientNetworkRequest::fromJson(const web::json::value& val)
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


std::string ShowClientNetworkRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowClientNetworkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowClientNetworkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowClientNetworkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


