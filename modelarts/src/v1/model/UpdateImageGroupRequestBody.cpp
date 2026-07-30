

#include "huaweicloud/modelarts/v1/model/UpdateImageGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateImageGroupRequestBody::UpdateImageGroupRequestBody()
{
    readMe_ = "";
    readMeIsSet_ = false;
    tagsIsSet_ = false;
}

UpdateImageGroupRequestBody::~UpdateImageGroupRequestBody() = default;

void UpdateImageGroupRequestBody::validate()
{
}

web::json::value UpdateImageGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(readMeIsSet_) {
        val[utility::conversions::to_string_t("read_me")] = ModelBase::toJson(readMe_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool UpdateImageGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("read_me"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_me"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadMe(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateImageGroupRequestBody_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string UpdateImageGroupRequestBody::getReadMe() const
{
    return readMe_;
}

void UpdateImageGroupRequestBody::setReadMe(const std::string& value)
{
    readMe_ = value;
    readMeIsSet_ = true;
}

bool UpdateImageGroupRequestBody::readMeIsSet() const
{
    return readMeIsSet_;
}

void UpdateImageGroupRequestBody::unsetreadMe()
{
    readMeIsSet_ = false;
}

std::vector<UpdateImageGroupRequestBody_tags>& UpdateImageGroupRequestBody::getTags()
{
    return tags_;
}

void UpdateImageGroupRequestBody::setTags(const std::vector<UpdateImageGroupRequestBody_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateImageGroupRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateImageGroupRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


