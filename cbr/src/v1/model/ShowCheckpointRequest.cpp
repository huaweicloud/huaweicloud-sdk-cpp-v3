

#include "huaweicloud/cbr/v1/model/ShowCheckpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowCheckpointRequest::ShowCheckpointRequest()
{
    checkpointId_ = "";
    checkpointIdIsSet_ = false;
}

ShowCheckpointRequest::~ShowCheckpointRequest() = default;

void ShowCheckpointRequest::validate()
{
}

web::json::value ShowCheckpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIdIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_id")] = ModelBase::toJson(checkpointId_);
    }

    return val;
}
bool ShowCheckpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checkpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpointId(refVal);
        }
    }
    return ok;
}


std::string ShowCheckpointRequest::getCheckpointId() const
{
    return checkpointId_;
}

void ShowCheckpointRequest::setCheckpointId(const std::string& value)
{
    checkpointId_ = value;
    checkpointIdIsSet_ = true;
}

bool ShowCheckpointRequest::checkpointIdIsSet() const
{
    return checkpointIdIsSet_;
}

void ShowCheckpointRequest::unsetcheckpointId()
{
    checkpointIdIsSet_ = false;
}

}
}
}
}
}


