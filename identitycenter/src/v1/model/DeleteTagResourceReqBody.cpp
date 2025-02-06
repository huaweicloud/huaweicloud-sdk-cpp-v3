

#include "huaweicloud/identitycenter/v1/model/DeleteTagResourceReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteTagResourceReqBody::DeleteTagResourceReqBody()
{
    tagsIsSet_ = false;
}

DeleteTagResourceReqBody::~DeleteTagResourceReqBody() = default;

void DeleteTagResourceReqBody::validate()
{
}

web::json::value DeleteTagResourceReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool DeleteTagResourceReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteTagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<DeleteTagDto>& DeleteTagResourceReqBody::getTags()
{
    return tags_;
}

void DeleteTagResourceReqBody::setTags(const std::vector<DeleteTagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeleteTagResourceReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeleteTagResourceReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


