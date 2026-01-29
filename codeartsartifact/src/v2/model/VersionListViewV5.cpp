

#include "huaweicloud/codeartsartifact/v2/model/VersionListViewV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




VersionListViewV5::VersionListViewV5()
{
    category_ = "";
    categoryIsSet_ = false;
    buildVersion_ = "";
    buildVersionIsSet_ = false;
    filesCount_ = 0;
    filesCountIsSet_ = false;
}

VersionListViewV5::~VersionListViewV5() = default;

void VersionListViewV5::validate()
{
}

web::json::value VersionListViewV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(buildVersionIsSet_) {
        val[utility::conversions::to_string_t("build_version")] = ModelBase::toJson(buildVersion_);
    }
    if(filesCountIsSet_) {
        val[utility::conversions::to_string_t("files_count")] = ModelBase::toJson(filesCount_);
    }

    return val;
}
bool VersionListViewV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilesCount(refVal);
        }
    }
    return ok;
}


std::string VersionListViewV5::getCategory() const
{
    return category_;
}

void VersionListViewV5::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool VersionListViewV5::categoryIsSet() const
{
    return categoryIsSet_;
}

void VersionListViewV5::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string VersionListViewV5::getBuildVersion() const
{
    return buildVersion_;
}

void VersionListViewV5::setBuildVersion(const std::string& value)
{
    buildVersion_ = value;
    buildVersionIsSet_ = true;
}

bool VersionListViewV5::buildVersionIsSet() const
{
    return buildVersionIsSet_;
}

void VersionListViewV5::unsetbuildVersion()
{
    buildVersionIsSet_ = false;
}

int32_t VersionListViewV5::getFilesCount() const
{
    return filesCount_;
}

void VersionListViewV5::setFilesCount(int32_t value)
{
    filesCount_ = value;
    filesCountIsSet_ = true;
}

bool VersionListViewV5::filesCountIsSet() const
{
    return filesCountIsSet_;
}

void VersionListViewV5::unsetfilesCount()
{
    filesCountIsSet_ = false;
}

}
}
}
}
}


