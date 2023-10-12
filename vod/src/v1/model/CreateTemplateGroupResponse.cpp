

#include "huaweicloud/vod/v1/model/CreateTemplateGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTemplateGroupResponse::CreateTemplateGroupResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

CreateTemplateGroupResponse::~CreateTemplateGroupResponse() = default;

void CreateTemplateGroupResponse::validate()
{
}

web::json::value CreateTemplateGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool CreateTemplateGroupResponse::fromJson(const web::json::value& val)
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


std::string CreateTemplateGroupResponse::getGroupId() const
{
    return groupId_;
}

void CreateTemplateGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateTemplateGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateTemplateGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


