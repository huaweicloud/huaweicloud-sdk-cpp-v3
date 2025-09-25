

#include "huaweicloud/codeartspipeline/v2/model/StagePluginsQueryDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StagePluginsQueryDTO::StagePluginsQueryDTO()
{
    useCondition_ = "";
    useConditionIsSet_ = false;
    compId_ = "";
    compIdIsSet_ = false;
    compName_ = "";
    compNameIsSet_ = false;
    cloudId_ = "";
    cloudIdIsSet_ = false;
    strategyId_ = "";
    strategyIdIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    publishTab_ = "";
    publishTabIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
    compExtendType_ = "";
    compExtendTypeIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
}

StagePluginsQueryDTO::~StagePluginsQueryDTO() = default;

void StagePluginsQueryDTO::validate()
{
}

web::json::value StagePluginsQueryDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(useConditionIsSet_) {
        val[utility::conversions::to_string_t("use_condition")] = ModelBase::toJson(useCondition_);
    }
    if(compIdIsSet_) {
        val[utility::conversions::to_string_t("comp_id")] = ModelBase::toJson(compId_);
    }
    if(compNameIsSet_) {
        val[utility::conversions::to_string_t("comp_name")] = ModelBase::toJson(compName_);
    }
    if(cloudIdIsSet_) {
        val[utility::conversions::to_string_t("cloud_id")] = ModelBase::toJson(cloudId_);
    }
    if(strategyIdIsSet_) {
        val[utility::conversions::to_string_t("strategy_id")] = ModelBase::toJson(strategyId_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(publishTabIsSet_) {
        val[utility::conversions::to_string_t("publish_tab")] = ModelBase::toJson(publishTab_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }
    if(compExtendTypeIsSet_) {
        val[utility::conversions::to_string_t("comp_extend_type")] = ModelBase::toJson(compExtendType_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }

    return val;
}
bool StagePluginsQueryDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("use_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comp_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comp_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strategy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publish_tab"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_tab"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishTab(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comp_extend_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comp_extend_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompExtendType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployType(refVal);
        }
    }
    return ok;
}


std::string StagePluginsQueryDTO::getUseCondition() const
{
    return useCondition_;
}

void StagePluginsQueryDTO::setUseCondition(const std::string& value)
{
    useCondition_ = value;
    useConditionIsSet_ = true;
}

bool StagePluginsQueryDTO::useConditionIsSet() const
{
    return useConditionIsSet_;
}

void StagePluginsQueryDTO::unsetuseCondition()
{
    useConditionIsSet_ = false;
}

std::string StagePluginsQueryDTO::getCompId() const
{
    return compId_;
}

void StagePluginsQueryDTO::setCompId(const std::string& value)
{
    compId_ = value;
    compIdIsSet_ = true;
}

bool StagePluginsQueryDTO::compIdIsSet() const
{
    return compIdIsSet_;
}

void StagePluginsQueryDTO::unsetcompId()
{
    compIdIsSet_ = false;
}

std::string StagePluginsQueryDTO::getCompName() const
{
    return compName_;
}

void StagePluginsQueryDTO::setCompName(const std::string& value)
{
    compName_ = value;
    compNameIsSet_ = true;
}

bool StagePluginsQueryDTO::compNameIsSet() const
{
    return compNameIsSet_;
}

void StagePluginsQueryDTO::unsetcompName()
{
    compNameIsSet_ = false;
}

std::string StagePluginsQueryDTO::getCloudId() const
{
    return cloudId_;
}

void StagePluginsQueryDTO::setCloudId(const std::string& value)
{
    cloudId_ = value;
    cloudIdIsSet_ = true;
}

bool StagePluginsQueryDTO::cloudIdIsSet() const
{
    return cloudIdIsSet_;
}

void StagePluginsQueryDTO::unsetcloudId()
{
    cloudIdIsSet_ = false;
}

std::string StagePluginsQueryDTO::getStrategyId() const
{
    return strategyId_;
}

void StagePluginsQueryDTO::setStrategyId(const std::string& value)
{
    strategyId_ = value;
    strategyIdIsSet_ = true;
}

bool StagePluginsQueryDTO::strategyIdIsSet() const
{
    return strategyIdIsSet_;
}

void StagePluginsQueryDTO::unsetstrategyId()
{
    strategyIdIsSet_ = false;
}

std::string StagePluginsQueryDTO::getCategory() const
{
    return category_;
}

void StagePluginsQueryDTO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool StagePluginsQueryDTO::categoryIsSet() const
{
    return categoryIsSet_;
}

void StagePluginsQueryDTO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string StagePluginsQueryDTO::getPublishTab() const
{
    return publishTab_;
}

void StagePluginsQueryDTO::setPublishTab(const std::string& value)
{
    publishTab_ = value;
    publishTabIsSet_ = true;
}

bool StagePluginsQueryDTO::publishTabIsSet() const
{
    return publishTabIsSet_;
}

void StagePluginsQueryDTO::unsetpublishTab()
{
    publishTabIsSet_ = false;
}

std::string StagePluginsQueryDTO::getPlatform() const
{
    return platform_;
}

void StagePluginsQueryDTO::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool StagePluginsQueryDTO::platformIsSet() const
{
    return platformIsSet_;
}

void StagePluginsQueryDTO::unsetplatform()
{
    platformIsSet_ = false;
}

std::string StagePluginsQueryDTO::getCompExtendType() const
{
    return compExtendType_;
}

void StagePluginsQueryDTO::setCompExtendType(const std::string& value)
{
    compExtendType_ = value;
    compExtendTypeIsSet_ = true;
}

bool StagePluginsQueryDTO::compExtendTypeIsSet() const
{
    return compExtendTypeIsSet_;
}

void StagePluginsQueryDTO::unsetcompExtendType()
{
    compExtendTypeIsSet_ = false;
}

std::string StagePluginsQueryDTO::getDeployType() const
{
    return deployType_;
}

void StagePluginsQueryDTO::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool StagePluginsQueryDTO::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void StagePluginsQueryDTO::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

}
}
}
}
}


