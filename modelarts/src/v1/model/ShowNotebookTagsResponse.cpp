

#include "huaweicloud/modelarts/v1/model/ShowNotebookTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNotebookTagsResponse::ShowNotebookTagsResponse()
{
    tagsIsSet_ = false;
}

ShowNotebookTagsResponse::~ShowNotebookTagsResponse() = default;

void ShowNotebookTagsResponse::validate()
{
}

web::json::value ShowNotebookTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowNotebookTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CombineTmsTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<CombineTmsTags>& ShowNotebookTagsResponse::getTags()
{
    return tags_;
}

void ShowNotebookTagsResponse::setTags(const std::vector<CombineTmsTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowNotebookTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowNotebookTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


