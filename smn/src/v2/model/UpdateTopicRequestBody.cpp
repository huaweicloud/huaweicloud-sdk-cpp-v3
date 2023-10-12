

#include "huaweicloud/smn/v2/model/UpdateTopicRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateTopicRequestBody::UpdateTopicRequestBody()
{
    displayName_ = "";
    displayNameIsSet_ = false;
}

UpdateTopicRequestBody::~UpdateTopicRequestBody() = default;

void UpdateTopicRequestBody::validate()
{
}

web::json::value UpdateTopicRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}
bool UpdateTopicRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}


std::string UpdateTopicRequestBody::getDisplayName() const
{
    return displayName_;
}

void UpdateTopicRequestBody::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool UpdateTopicRequestBody::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void UpdateTopicRequestBody::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


