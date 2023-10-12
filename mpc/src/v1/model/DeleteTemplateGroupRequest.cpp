

#include "huaweicloud/mpc/v1/model/DeleteTemplateGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteTemplateGroupRequest::DeleteTemplateGroupRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

DeleteTemplateGroupRequest::~DeleteTemplateGroupRequest() = default;

void DeleteTemplateGroupRequest::validate()
{
}

web::json::value DeleteTemplateGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool DeleteTemplateGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteTemplateGroupRequest::getGroupId() const
{
    return groupId_;
}

void DeleteTemplateGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteTemplateGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteTemplateGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


