

#include "huaweicloud/modelarts/v1/model/DeleteTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteTagRequest::DeleteTagRequest()
{
    tagsIsSet_ = false;
}

DeleteTagRequest::~DeleteTagRequest() = default;

void DeleteTagRequest::validate()
{
}

web::json::value DeleteTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool DeleteTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteTagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<DeleteTagItem>& DeleteTagRequest::getTags()
{
    return tags_;
}

void DeleteTagRequest::setTags(const std::vector<DeleteTagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeleteTagRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeleteTagRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


