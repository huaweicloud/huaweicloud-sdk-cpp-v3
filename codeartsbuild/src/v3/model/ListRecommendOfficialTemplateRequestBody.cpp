

#include "huaweicloud/codeartsbuild/v3/model/ListRecommendOfficialTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRecommendOfficialTemplateRequestBody::ListRecommendOfficialTemplateRequestBody()
{
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
}

ListRecommendOfficialTemplateRequestBody::~ListRecommendOfficialTemplateRequestBody() = default;

void ListRecommendOfficialTemplateRequestBody::validate()
{
}

web::json::value ListRecommendOfficialTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListRecommendOfficialTemplateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ListRecommendOfficialTemplateRequestBody::getGitUrl() const
{
    return gitUrl_;
}

void ListRecommendOfficialTemplateRequestBody::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool ListRecommendOfficialTemplateRequestBody::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void ListRecommendOfficialTemplateRequestBody::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string ListRecommendOfficialTemplateRequestBody::getBranch() const
{
    return branch_;
}

void ListRecommendOfficialTemplateRequestBody::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool ListRecommendOfficialTemplateRequestBody::branchIsSet() const
{
    return branchIsSet_;
}

void ListRecommendOfficialTemplateRequestBody::unsetbranch()
{
    branchIsSet_ = false;
}

std::string ListRecommendOfficialTemplateRequestBody::getTags() const
{
    return tags_;
}

void ListRecommendOfficialTemplateRequestBody::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListRecommendOfficialTemplateRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListRecommendOfficialTemplateRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


