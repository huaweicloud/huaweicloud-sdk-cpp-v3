

#include "huaweicloud/sdrs/v1/model/DeleteReplicationRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteReplicationRequestParams::DeleteReplicationRequestParams()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    deleteTargetVolume_ = false;
    deleteTargetVolumeIsSet_ = false;
}

DeleteReplicationRequestParams::~DeleteReplicationRequestParams() = default;

void DeleteReplicationRequestParams::validate()
{
}

web::json::value DeleteReplicationRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(deleteTargetVolumeIsSet_) {
        val[utility::conversions::to_string_t("delete_target_volume")] = ModelBase::toJson(deleteTargetVolume_);
    }

    return val;
}

bool DeleteReplicationRequestParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("delete_target_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_target_volume"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTargetVolume(refVal);
        }
    }
    return ok;
}

std::string DeleteReplicationRequestParams::getServerGroupId() const
{
    return serverGroupId_;
}

void DeleteReplicationRequestParams::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool DeleteReplicationRequestParams::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void DeleteReplicationRequestParams::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

bool DeleteReplicationRequestParams::isDeleteTargetVolume() const
{
    return deleteTargetVolume_;
}

void DeleteReplicationRequestParams::setDeleteTargetVolume(bool value)
{
    deleteTargetVolume_ = value;
    deleteTargetVolumeIsSet_ = true;
}

bool DeleteReplicationRequestParams::deleteTargetVolumeIsSet() const
{
    return deleteTargetVolumeIsSet_;
}

void DeleteReplicationRequestParams::unsetdeleteTargetVolume()
{
    deleteTargetVolumeIsSet_ = false;
}

}
}
}
}
}


