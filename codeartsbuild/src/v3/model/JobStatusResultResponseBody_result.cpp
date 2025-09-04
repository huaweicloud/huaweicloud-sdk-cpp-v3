

#include "huaweicloud/codeartsbuild/v3/model/JobStatusResultResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobStatusResultResponseBody_result::JobStatusResultResponseBody_result()
{
    building_ = false;
    buildingIsSet_ = false;
    buildResult_ = "";
    buildResultIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
}

JobStatusResultResponseBody_result::~JobStatusResultResponseBody_result() = default;

void JobStatusResultResponseBody_result::validate()
{
}

web::json::value JobStatusResultResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildingIsSet_) {
        val[utility::conversions::to_string_t("building")] = ModelBase::toJson(building_);
    }
    if(buildResultIsSet_) {
        val[utility::conversions::to_string_t("build_result")] = ModelBase::toJson(buildResult_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool JobStatusResultResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("building"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("building"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuilding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    return ok;
}


bool JobStatusResultResponseBody_result::isBuilding() const
{
    return building_;
}

void JobStatusResultResponseBody_result::setBuilding(bool value)
{
    building_ = value;
    buildingIsSet_ = true;
}

bool JobStatusResultResponseBody_result::buildingIsSet() const
{
    return buildingIsSet_;
}

void JobStatusResultResponseBody_result::unsetbuilding()
{
    buildingIsSet_ = false;
}

std::string JobStatusResultResponseBody_result::getBuildResult() const
{
    return buildResult_;
}

void JobStatusResultResponseBody_result::setBuildResult(const std::string& value)
{
    buildResult_ = value;
    buildResultIsSet_ = true;
}

bool JobStatusResultResponseBody_result::buildResultIsSet() const
{
    return buildResultIsSet_;
}

void JobStatusResultResponseBody_result::unsetbuildResult()
{
    buildResultIsSet_ = false;
}

std::string JobStatusResultResponseBody_result::getRegion() const
{
    return region_;
}

void JobStatusResultResponseBody_result::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool JobStatusResultResponseBody_result::regionIsSet() const
{
    return regionIsSet_;
}

void JobStatusResultResponseBody_result::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


