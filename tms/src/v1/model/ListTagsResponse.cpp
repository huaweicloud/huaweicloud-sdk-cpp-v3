

#include "huaweicloud/tms/v1/model/ListTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListTagsResponse::ListTagsResponse()
{
    tagsIsSet_ = false;
    errorsIsSet_ = false;
}

ListTagsResponse::~ListTagsResponse() = default;

void ListTagsResponse::validate()
{
}

web::json::value ListTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }

    return val;
}
bool ListTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            std::vector<TagListErrorItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrors(refVal);
        }
    }
    return ok;
}


std::vector<TagResponse>& ListTagsResponse::getTags()
{
    return tags_;
}

void ListTagsResponse::setTags(const std::vector<TagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<TagListErrorItem>& ListTagsResponse::getErrors()
{
    return errors_;
}

void ListTagsResponse::setErrors(const std::vector<TagListErrorItem>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool ListTagsResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void ListTagsResponse::unseterrors()
{
    errorsIsSet_ = false;
}

}
}
}
}
}


