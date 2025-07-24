

#include "huaweicloud/cloudtest/v1/model/ProjectTestCaseFieldVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ProjectTestCaseFieldVo::ProjectTestCaseFieldVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    options_ = "";
    optionsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    updater_ = "";
    updaterIsSet_ = false;
    customFieldId_ = 0;
    customFieldIdIsSet_ = false;
    customFieldName_ = "";
    customFieldNameIsSet_ = false;
    customFieldParam_ = "";
    customFieldParamIsSet_ = false;
    typeName_ = "";
    typeNameIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    createTimeTimestamp_ = 0L;
    createTimeTimestampIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updateTimeTimestamp_ = 0L;
    updateTimeTimestampIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
}

ProjectTestCaseFieldVo::~ProjectTestCaseFieldVo() = default;

void ProjectTestCaseFieldVo::validate()
{
}

web::json::value ProjectTestCaseFieldVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(updaterIsSet_) {
        val[utility::conversions::to_string_t("updater")] = ModelBase::toJson(updater_);
    }
    if(customFieldIdIsSet_) {
        val[utility::conversions::to_string_t("custom_field_id")] = ModelBase::toJson(customFieldId_);
    }
    if(customFieldNameIsSet_) {
        val[utility::conversions::to_string_t("custom_field_name")] = ModelBase::toJson(customFieldName_);
    }
    if(customFieldParamIsSet_) {
        val[utility::conversions::to_string_t("custom_field_param")] = ModelBase::toJson(customFieldParam_);
    }
    if(typeNameIsSet_) {
        val[utility::conversions::to_string_t("type_name")] = ModelBase::toJson(typeName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("create_time_timestamp")] = ModelBase::toJson(createTimeTimestamp_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimeTimestampIsSet_) {
        val[utility::conversions::to_string_t("update_time_timestamp")] = ModelBase::toJson(updateTimeTimestamp_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }

    return val;
}
bool ProjectTestCaseFieldVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdater(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFieldId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFieldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFieldParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    return ok;
}


std::string ProjectTestCaseFieldVo::getUri() const
{
    return uri_;
}

void ProjectTestCaseFieldVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool ProjectTestCaseFieldVo::uriIsSet() const
{
    return uriIsSet_;
}

void ProjectTestCaseFieldVo::unseturi()
{
    uriIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getName() const
{
    return name_;
}

void ProjectTestCaseFieldVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectTestCaseFieldVo::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectTestCaseFieldVo::unsetname()
{
    nameIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getType() const
{
    return type_;
}

void ProjectTestCaseFieldVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ProjectTestCaseFieldVo::typeIsSet() const
{
    return typeIsSet_;
}

void ProjectTestCaseFieldVo::unsettype()
{
    typeIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getOptions() const
{
    return options_;
}

void ProjectTestCaseFieldVo::setOptions(const std::string& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool ProjectTestCaseFieldVo::optionsIsSet() const
{
    return optionsIsSet_;
}

void ProjectTestCaseFieldVo::unsetoptions()
{
    optionsIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getDescription() const
{
    return description_;
}

void ProjectTestCaseFieldVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProjectTestCaseFieldVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProjectTestCaseFieldVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getCreator() const
{
    return creator_;
}

void ProjectTestCaseFieldVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ProjectTestCaseFieldVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void ProjectTestCaseFieldVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getUpdater() const
{
    return updater_;
}

void ProjectTestCaseFieldVo::setUpdater(const std::string& value)
{
    updater_ = value;
    updaterIsSet_ = true;
}

bool ProjectTestCaseFieldVo::updaterIsSet() const
{
    return updaterIsSet_;
}

void ProjectTestCaseFieldVo::unsetupdater()
{
    updaterIsSet_ = false;
}

int32_t ProjectTestCaseFieldVo::getCustomFieldId() const
{
    return customFieldId_;
}

void ProjectTestCaseFieldVo::setCustomFieldId(int32_t value)
{
    customFieldId_ = value;
    customFieldIdIsSet_ = true;
}

bool ProjectTestCaseFieldVo::customFieldIdIsSet() const
{
    return customFieldIdIsSet_;
}

void ProjectTestCaseFieldVo::unsetcustomFieldId()
{
    customFieldIdIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getCustomFieldName() const
{
    return customFieldName_;
}

void ProjectTestCaseFieldVo::setCustomFieldName(const std::string& value)
{
    customFieldName_ = value;
    customFieldNameIsSet_ = true;
}

bool ProjectTestCaseFieldVo::customFieldNameIsSet() const
{
    return customFieldNameIsSet_;
}

void ProjectTestCaseFieldVo::unsetcustomFieldName()
{
    customFieldNameIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getCustomFieldParam() const
{
    return customFieldParam_;
}

void ProjectTestCaseFieldVo::setCustomFieldParam(const std::string& value)
{
    customFieldParam_ = value;
    customFieldParamIsSet_ = true;
}

bool ProjectTestCaseFieldVo::customFieldParamIsSet() const
{
    return customFieldParamIsSet_;
}

void ProjectTestCaseFieldVo::unsetcustomFieldParam()
{
    customFieldParamIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getTypeName() const
{
    return typeName_;
}

void ProjectTestCaseFieldVo::setTypeName(const std::string& value)
{
    typeName_ = value;
    typeNameIsSet_ = true;
}

bool ProjectTestCaseFieldVo::typeNameIsSet() const
{
    return typeNameIsSet_;
}

void ProjectTestCaseFieldVo::unsettypeName()
{
    typeNameIsSet_ = false;
}

utility::datetime ProjectTestCaseFieldVo::getCreateTime() const
{
    return createTime_;
}

void ProjectTestCaseFieldVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ProjectTestCaseFieldVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ProjectTestCaseFieldVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ProjectTestCaseFieldVo::getCreateTimeTimestamp() const
{
    return createTimeTimestamp_;
}

void ProjectTestCaseFieldVo::setCreateTimeTimestamp(int64_t value)
{
    createTimeTimestamp_ = value;
    createTimeTimestampIsSet_ = true;
}

bool ProjectTestCaseFieldVo::createTimeTimestampIsSet() const
{
    return createTimeTimestampIsSet_;
}

void ProjectTestCaseFieldVo::unsetcreateTimeTimestamp()
{
    createTimeTimestampIsSet_ = false;
}

utility::datetime ProjectTestCaseFieldVo::getUpdateTime() const
{
    return updateTime_;
}

void ProjectTestCaseFieldVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ProjectTestCaseFieldVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ProjectTestCaseFieldVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t ProjectTestCaseFieldVo::getUpdateTimeTimestamp() const
{
    return updateTimeTimestamp_;
}

void ProjectTestCaseFieldVo::setUpdateTimeTimestamp(int64_t value)
{
    updateTimeTimestamp_ = value;
    updateTimeTimestampIsSet_ = true;
}

bool ProjectTestCaseFieldVo::updateTimeTimestampIsSet() const
{
    return updateTimeTimestampIsSet_;
}

void ProjectTestCaseFieldVo::unsetupdateTimeTimestamp()
{
    updateTimeTimestampIsSet_ = false;
}

std::string ProjectTestCaseFieldVo::getProjectUuid() const
{
    return projectUuid_;
}

void ProjectTestCaseFieldVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ProjectTestCaseFieldVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ProjectTestCaseFieldVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

}
}
}
}
}


