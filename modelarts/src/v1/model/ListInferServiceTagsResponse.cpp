

#include "huaweicloud/modelarts/v1/model/ListInferServiceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferServiceTagsResponse::ListInferServiceTagsResponse()
{
    tagsIsSet_ = false;
}

ListInferServiceTagsResponse::~ListInferServiceTagsResponse() = default;

void ListInferServiceTagsResponse::validate()
{
}

web::json::value ListInferServiceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListInferServiceTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CombineInferTmsTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<CombineInferTmsTags>& ListInferServiceTagsResponse::getTags()
{
    return tags_;
}

void ListInferServiceTagsResponse::setTags(const std::vector<CombineInferTmsTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInferServiceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInferServiceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


