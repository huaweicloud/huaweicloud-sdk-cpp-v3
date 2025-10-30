

#include "huaweicloud/dds/v3/model/SwitchoverReplicaSetRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SwitchoverReplicaSetRequestBody::SwitchoverReplicaSetRequestBody()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

SwitchoverReplicaSetRequestBody::~SwitchoverReplicaSetRequestBody() = default;

void SwitchoverReplicaSetRequestBody::validate()
{
}

web::json::value SwitchoverReplicaSetRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool SwitchoverReplicaSetRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string SwitchoverReplicaSetRequestBody::getGroupId() const
{
    return groupId_;
}

void SwitchoverReplicaSetRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool SwitchoverReplicaSetRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void SwitchoverReplicaSetRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


