

#include "huaweicloud/cbr/v1/model/ExcludePath.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ExcludePath::ExcludePath()
{
    pathName_ = "";
    pathNameIsSet_ = false;
    excludePathNameIsSet_ = false;
}

ExcludePath::~ExcludePath() = default;

void ExcludePath::validate()
{
}

web::json::value ExcludePath::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathNameIsSet_) {
        val[utility::conversions::to_string_t("path_name")] = ModelBase::toJson(pathName_);
    }
    if(excludePathNameIsSet_) {
        val[utility::conversions::to_string_t("exclude_path_name")] = ModelBase::toJson(excludePathName_);
    }

    return val;
}
bool ExcludePath::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("path_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPathName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_path_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_path_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludePathName(refVal);
        }
    }
    return ok;
}


std::string ExcludePath::getPathName() const
{
    return pathName_;
}

void ExcludePath::setPathName(const std::string& value)
{
    pathName_ = value;
    pathNameIsSet_ = true;
}

bool ExcludePath::pathNameIsSet() const
{
    return pathNameIsSet_;
}

void ExcludePath::unsetpathName()
{
    pathNameIsSet_ = false;
}

std::vector<std::string>& ExcludePath::getExcludePathName()
{
    return excludePathName_;
}

void ExcludePath::setExcludePathName(const std::vector<std::string>& value)
{
    excludePathName_ = value;
    excludePathNameIsSet_ = true;
}

bool ExcludePath::excludePathNameIsSet() const
{
    return excludePathNameIsSet_;
}

void ExcludePath::unsetexcludePathName()
{
    excludePathNameIsSet_ = false;
}

}
}
}
}
}


