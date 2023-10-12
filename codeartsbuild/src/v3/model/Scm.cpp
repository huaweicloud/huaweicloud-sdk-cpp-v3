

#include "huaweicloud/codeartsbuild/v3/model/Scm.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




Scm::Scm()
{
    buildTag_ = "";
    buildTagIsSet_ = false;
    buildCommitId_ = "";
    buildCommitIdIsSet_ = false;
}

Scm::~Scm() = default;

void Scm::validate()
{
}

web::json::value Scm::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildTagIsSet_) {
        val[utility::conversions::to_string_t("build_tag")] = ModelBase::toJson(buildTag_);
    }
    if(buildCommitIdIsSet_) {
        val[utility::conversions::to_string_t("build_commit_id")] = ModelBase::toJson(buildCommitId_);
    }

    return val;
}
bool Scm::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildCommitId(refVal);
        }
    }
    return ok;
}


std::string Scm::getBuildTag() const
{
    return buildTag_;
}

void Scm::setBuildTag(const std::string& value)
{
    buildTag_ = value;
    buildTagIsSet_ = true;
}

bool Scm::buildTagIsSet() const
{
    return buildTagIsSet_;
}

void Scm::unsetbuildTag()
{
    buildTagIsSet_ = false;
}

std::string Scm::getBuildCommitId() const
{
    return buildCommitId_;
}

void Scm::setBuildCommitId(const std::string& value)
{
    buildCommitId_ = value;
    buildCommitIdIsSet_ = true;
}

bool Scm::buildCommitIdIsSet() const
{
    return buildCommitIdIsSet_;
}

void Scm::unsetbuildCommitId()
{
    buildCommitIdIsSet_ = false;
}

}
}
}
}
}


