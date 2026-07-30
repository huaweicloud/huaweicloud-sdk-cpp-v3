

#include "huaweicloud/modelarts/v1/model/CreateTmsTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTmsTagsRequest::CreateTmsTagsRequest()
{
    tagsIsSet_ = false;
}

CreateTmsTagsRequest::~CreateTmsTagsRequest() = default;

void CreateTmsTagsRequest::validate()
{
}

web::json::value CreateTmsTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateTmsTagsRequest::fromJson(const web::json::value& val)
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


std::vector<TmsTag>& CreateTmsTagsRequest::getTags()
{
    return tags_;
}

void CreateTmsTagsRequest::setTags(const std::vector<TmsTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateTmsTagsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateTmsTagsRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


