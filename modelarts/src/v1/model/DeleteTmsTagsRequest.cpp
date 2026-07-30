

#include "huaweicloud/modelarts/v1/model/DeleteTmsTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteTmsTagsRequest::DeleteTmsTagsRequest()
{
    tagsIsSet_ = false;
}

DeleteTmsTagsRequest::~DeleteTmsTagsRequest() = default;

void DeleteTmsTagsRequest::validate()
{
}

web::json::value DeleteTmsTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool DeleteTmsTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TmsTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TmsTag>& DeleteTmsTagsRequest::getTags()
{
    return tags_;
}

void DeleteTmsTagsRequest::setTags(const std::vector<TmsTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeleteTmsTagsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeleteTmsTagsRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


