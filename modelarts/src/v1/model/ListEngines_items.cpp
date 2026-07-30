

#include "huaweicloud/modelarts/v1/model/ListEngines_items.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListEngines_items::ListEngines_items()
{
    engineId_ = "";
    engineIdIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    v1Compatible_ = false;
    v1CompatibleIsSet_ = false;
    runUser_ = "";
    runUserIsSet_ = false;
    imageInfoIsSet_ = false;
}

ListEngines_items::~ListEngines_items() = default;

void ListEngines_items::validate()
{
}

web::json::value ListEngines_items::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIdIsSet_) {
        val[utility::conversions::to_string_t("engine_id")] = ModelBase::toJson(engineId_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(v1CompatibleIsSet_) {
        val[utility::conversions::to_string_t("v1_compatible")] = ModelBase::toJson(v1Compatible_);
    }
    if(runUserIsSet_) {
        val[utility::conversions::to_string_t("run_user")] = ModelBase::toJson(runUser_);
    }
    if(imageInfoIsSet_) {
        val[utility::conversions::to_string_t("image_info")] = ModelBase::toJson(imageInfo_);
    }

    return val;
}
bool ListEngines_items::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("v1_compatible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("v1_compatible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setV1Compatible(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_info"));
        if(!fieldValue.is_null())
        {
            ListEngines_image_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageInfo(refVal);
        }
    }
    return ok;
}


std::string ListEngines_items::getEngineId() const
{
    return engineId_;
}

void ListEngines_items::setEngineId(const std::string& value)
{
    engineId_ = value;
    engineIdIsSet_ = true;
}

bool ListEngines_items::engineIdIsSet() const
{
    return engineIdIsSet_;
}

void ListEngines_items::unsetengineId()
{
    engineIdIsSet_ = false;
}

std::string ListEngines_items::getEngineName() const
{
    return engineName_;
}

void ListEngines_items::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ListEngines_items::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ListEngines_items::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ListEngines_items::getEngineVersion() const
{
    return engineVersion_;
}

void ListEngines_items::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool ListEngines_items::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void ListEngines_items::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

bool ListEngines_items::isV1Compatible() const
{
    return v1Compatible_;
}

void ListEngines_items::setV1Compatible(bool value)
{
    v1Compatible_ = value;
    v1CompatibleIsSet_ = true;
}

bool ListEngines_items::v1CompatibleIsSet() const
{
    return v1CompatibleIsSet_;
}

void ListEngines_items::unsetv1Compatible()
{
    v1CompatibleIsSet_ = false;
}

std::string ListEngines_items::getRunUser() const
{
    return runUser_;
}

void ListEngines_items::setRunUser(const std::string& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool ListEngines_items::runUserIsSet() const
{
    return runUserIsSet_;
}

void ListEngines_items::unsetrunUser()
{
    runUserIsSet_ = false;
}

ListEngines_image_info ListEngines_items::getImageInfo() const
{
    return imageInfo_;
}

void ListEngines_items::setImageInfo(const ListEngines_image_info& value)
{
    imageInfo_ = value;
    imageInfoIsSet_ = true;
}

bool ListEngines_items::imageInfoIsSet() const
{
    return imageInfoIsSet_;
}

void ListEngines_items::unsetimageInfo()
{
    imageInfoIsSet_ = false;
}

}
}
}
}
}


