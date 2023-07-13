

#include "huaweicloud/vod/v1/model/CreateTranscodeTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTranscodeTemplateResponse::CreateTranscodeTemplateResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

CreateTranscodeTemplateResponse::~CreateTranscodeTemplateResponse() = default;

void CreateTranscodeTemplateResponse::validate()
{
}

web::json::value CreateTranscodeTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}

bool CreateTranscodeTemplateResponse::fromJson(const web::json::value& val)
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

std::string CreateTranscodeTemplateResponse::getGroupId() const
{
    return groupId_;
}

void CreateTranscodeTemplateResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateTranscodeTemplateResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateTranscodeTemplateResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


