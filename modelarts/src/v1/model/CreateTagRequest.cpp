

#include "huaweicloud/modelarts/v1/model/CreateTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTagRequest::CreateTagRequest()
{
    tagsIsSet_ = false;
}

CreateTagRequest::~CreateTagRequest() = default;

void CreateTagRequest::validate()
{
}

web::json::value CreateTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<Tag>& CreateTagRequest::getTags()
{
    return tags_;
}

void CreateTagRequest::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateTagRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateTagRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


