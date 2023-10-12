

#include "huaweicloud/tms/v1/model/ShowResourceTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ShowResourceTagResponse::ShowResourceTagResponse()
{
    tagsIsSet_ = false;
}

ShowResourceTagResponse::~ShowResourceTagResponse() = default;

void ShowResourceTagResponse::validate()
{
}

web::json::value ShowResourceTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowResourceTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TagVo>& ShowResourceTagResponse::getTags()
{
    return tags_;
}

void ShowResourceTagResponse::setTags(const std::vector<TagVo>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowResourceTagResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowResourceTagResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


