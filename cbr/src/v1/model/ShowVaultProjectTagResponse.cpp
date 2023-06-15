

#include "huaweicloud/cbr/v1/model/ShowVaultProjectTagResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowVaultProjectTagResponse::ShowVaultProjectTagResponse()
{
    tagsIsSet_ = false;
}

ShowVaultProjectTagResponse::~ShowVaultProjectTagResponse() = default;

void ShowVaultProjectTagResponse::validate()
{
}

web::json::value ShowVaultProjectTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ShowVaultProjectTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TagsResp>& ShowVaultProjectTagResponse::getTags()
{
    return tags_;
}

void ShowVaultProjectTagResponse::setTags(const std::vector<TagsResp>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowVaultProjectTagResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowVaultProjectTagResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


