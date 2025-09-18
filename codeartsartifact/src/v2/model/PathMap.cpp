

#include "huaweicloud/codeartsartifact/v2/model/PathMap.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




PathMap::PathMap()
{
    path_ = "";
    pathIsSet_ = false;
}

PathMap::~PathMap() = default;

void PathMap::validate()
{
}

web::json::value PathMap::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }

    return val;
}
bool PathMap::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    return ok;
}


std::string PathMap::getPath() const
{
    return path_;
}

void PathMap::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool PathMap::pathIsSet() const
{
    return pathIsSet_;
}

void PathMap::unsetpath()
{
    pathIsSet_ = false;
}

}
}
}
}
}


