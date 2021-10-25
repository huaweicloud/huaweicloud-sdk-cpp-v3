

#include "huaweicloud/sdrs/v1/model/ShowReplicationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowReplicationRequest::ShowReplicationRequest()
{
    replicationId_ = "";
    replicationIdIsSet_ = false;
}

ShowReplicationRequest::~ShowReplicationRequest() = default;

void ShowReplicationRequest::validate()
{
}

web::json::value ShowReplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationIdIsSet_) {
        val[utility::conversions::to_string_t("replication_id")] = ModelBase::toJson(replicationId_);
    }

    return val;
}

bool ShowReplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationId(refVal);
        }
    }
    return ok;
}


std::string ShowReplicationRequest::getReplicationId() const
{
    return replicationId_;
}

void ShowReplicationRequest::setReplicationId(const std::string& value)
{
    replicationId_ = value;
    replicationIdIsSet_ = true;
}

bool ShowReplicationRequest::replicationIdIsSet() const
{
    return replicationIdIsSet_;
}

void ShowReplicationRequest::unsetreplicationId()
{
    replicationIdIsSet_ = false;
}

}
}
}
}
}


