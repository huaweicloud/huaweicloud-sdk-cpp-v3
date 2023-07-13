

#include "huaweicloud/ims/v2/model/BatchAddMembersRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchAddMembersRequestBody::BatchAddMembersRequestBody()
{
    imagesIsSet_ = false;
    projectsIsSet_ = false;
}

BatchAddMembersRequestBody::~BatchAddMembersRequestBody() = default;

void BatchAddMembersRequestBody::validate()
{
}

web::json::value BatchAddMembersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imagesIsSet_) {
        val[utility::conversions::to_string_t("images")] = ModelBase::toJson(images_);
    }
    if(projectsIsSet_) {
        val[utility::conversions::to_string_t("projects")] = ModelBase::toJson(projects_);
    }

    return val;
}

bool BatchAddMembersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("images"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("images"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projects"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjects(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& BatchAddMembersRequestBody::getImages()
{
    return images_;
}

void BatchAddMembersRequestBody::setImages(const std::vector<std::string>& value)
{
    images_ = value;
    imagesIsSet_ = true;
}

bool BatchAddMembersRequestBody::imagesIsSet() const
{
    return imagesIsSet_;
}

void BatchAddMembersRequestBody::unsetimages()
{
    imagesIsSet_ = false;
}

std::vector<std::string>& BatchAddMembersRequestBody::getProjects()
{
    return projects_;
}

void BatchAddMembersRequestBody::setProjects(const std::vector<std::string>& value)
{
    projects_ = value;
    projectsIsSet_ = true;
}

bool BatchAddMembersRequestBody::projectsIsSet() const
{
    return projectsIsSet_;
}

void BatchAddMembersRequestBody::unsetprojects()
{
    projectsIsSet_ = false;
}

}
}
}
}
}


