

#include "huaweicloud/modelarts/v1/model/TagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TagRequest::TagRequest()
{
    tagsIsSet_ = false;
}

TagRequest::~TagRequest() = default;

void TagRequest::validate()
{
}

web::json::value TagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool TagRequest::fromJson(const web::json::value& val)
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


std::vector<TmsTag>& TagRequest::getTags()
{
    return tags_;
}

void TagRequest::setTags(const std::vector<TmsTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TagRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void TagRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


