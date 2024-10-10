

#include "huaweicloud/aad/v2/model/ShowFlowBlockRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowFlowBlockRequest::ShowFlowBlockRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowFlowBlockRequest::~ShowFlowBlockRequest() = default;

void ShowFlowBlockRequest::validate()
{
}

web::json::value ShowFlowBlockRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowFlowBlockRequest::fromJson(const web::json::value& val)
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


std::string ShowFlowBlockRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowFlowBlockRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowFlowBlockRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowFlowBlockRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


