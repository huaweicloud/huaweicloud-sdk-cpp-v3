

#include "huaweicloud/sdrs/v1/model/DeleteServerGroupFailureJobsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteServerGroupFailureJobsRequest::DeleteServerGroupFailureJobsRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
}

DeleteServerGroupFailureJobsRequest::~DeleteServerGroupFailureJobsRequest() = default;

void DeleteServerGroupFailureJobsRequest::validate()
{
}

web::json::value DeleteServerGroupFailureJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }

    return val;
}

bool DeleteServerGroupFailureJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    return ok;
}


std::string DeleteServerGroupFailureJobsRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void DeleteServerGroupFailureJobsRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool DeleteServerGroupFailureJobsRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void DeleteServerGroupFailureJobsRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

}
}
}
}
}


