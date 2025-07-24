

#include "huaweicloud/cloudtest/v1/model/ProjectFieldConfigVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ProjectFieldConfigVo::ProjectFieldConfigVo()
{
    uri_ = "";
    uriIsSet_ = false;
    updatorIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    customName_ = "";
    customNameIsSet_ = false;
    tableFieldName_ = "";
    tableFieldNameIsSet_ = false;
    valueType_ = "";
    valueTypeIsSet_ = false;
    valueTypeName_ = "";
    valueTypeNameIsSet_ = false;
    isSystem_ = 0;
    isSystemIsSet_ = false;
    isDisplay_ = 0;
    isDisplayIsSet_ = false;
    isRequired_ = 0;
    isRequiredIsSet_ = false;
    sortNumb_ = 0;
    sortNumbIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    customFieldUri_ = "";
    customFieldUriIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    creatorIsSet_ = false;
    createTimeStamp_ = 0L;
    createTimeStampIsSet_ = false;
    updateTimeStamp_ = 0L;
    updateTimeStampIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    optionVosIsSet_ = false;
    customFieldId_ = 0;
    customFieldIdIsSet_ = false;
    customFieldName_ = "";
    customFieldNameIsSet_ = false;
    customFieldParam_ = "";
    customFieldParamIsSet_ = false;
}

ProjectFieldConfigVo::~ProjectFieldConfigVo() = default;

void ProjectFieldConfigVo::validate()
{
}

web::json::value ProjectFieldConfigVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(updatorIsSet_) {
        val[utility::conversions::to_string_t("updator")] = ModelBase::toJson(updator_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(customNameIsSet_) {
        val[utility::conversions::to_string_t("customName")] = ModelBase::toJson(customName_);
    }
    if(tableFieldNameIsSet_) {
        val[utility::conversions::to_string_t("table_field_name")] = ModelBase::toJson(tableFieldName_);
    }
    if(valueTypeIsSet_) {
        val[utility::conversions::to_string_t("value_type")] = ModelBase::toJson(valueType_);
    }
    if(valueTypeNameIsSet_) {
        val[utility::conversions::to_string_t("value_type_name")] = ModelBase::toJson(valueTypeName_);
    }
    if(isSystemIsSet_) {
        val[utility::conversions::to_string_t("is_system")] = ModelBase::toJson(isSystem_);
    }
    if(isDisplayIsSet_) {
        val[utility::conversions::to_string_t("is_display")] = ModelBase::toJson(isDisplay_);
    }
    if(isRequiredIsSet_) {
        val[utility::conversions::to_string_t("is_required")] = ModelBase::toJson(isRequired_);
    }
    if(sortNumbIsSet_) {
        val[utility::conversions::to_string_t("sort_numb")] = ModelBase::toJson(sortNumb_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(customFieldUriIsSet_) {
        val[utility::conversions::to_string_t("custom_field_uri")] = ModelBase::toJson(customFieldUri_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("create_time_stamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(updateTimeStampIsSet_) {
        val[utility::conversions::to_string_t("update_time_stamp")] = ModelBase::toJson(updateTimeStamp_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(optionVosIsSet_) {
        val[utility::conversions::to_string_t("option_vos")] = ModelBase::toJson(optionVos_);
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

    return val;
}
bool ProjectFieldConfigVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("updator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdator(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("customName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_field_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_field_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableFieldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_type_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_type_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueTypeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_system"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_display"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_display"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDisplay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_required"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_numb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_numb"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortNumb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFieldUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeStamp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("option_vos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option_vos"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectFieldConfigOptionVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionVos(refVal);
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
    return ok;
}


std::string ProjectFieldConfigVo::getUri() const
{
    return uri_;
}

void ProjectFieldConfigVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool ProjectFieldConfigVo::uriIsSet() const
{
    return uriIsSet_;
}

void ProjectFieldConfigVo::unseturi()
{
    uriIsSet_ = false;
}

NameAndIdVo ProjectFieldConfigVo::getUpdator() const
{
    return updator_;
}

void ProjectFieldConfigVo::setUpdator(const NameAndIdVo& value)
{
    updator_ = value;
    updatorIsSet_ = true;
}

bool ProjectFieldConfigVo::updatorIsSet() const
{
    return updatorIsSet_;
}

void ProjectFieldConfigVo::unsetupdator()
{
    updatorIsSet_ = false;
}

std::string ProjectFieldConfigVo::getDescription() const
{
    return description_;
}

void ProjectFieldConfigVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProjectFieldConfigVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProjectFieldConfigVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProjectFieldConfigVo::getCustomName() const
{
    return customName_;
}

void ProjectFieldConfigVo::setCustomName(const std::string& value)
{
    customName_ = value;
    customNameIsSet_ = true;
}

bool ProjectFieldConfigVo::customNameIsSet() const
{
    return customNameIsSet_;
}

void ProjectFieldConfigVo::unsetcustomName()
{
    customNameIsSet_ = false;
}

std::string ProjectFieldConfigVo::getTableFieldName() const
{
    return tableFieldName_;
}

void ProjectFieldConfigVo::setTableFieldName(const std::string& value)
{
    tableFieldName_ = value;
    tableFieldNameIsSet_ = true;
}

bool ProjectFieldConfigVo::tableFieldNameIsSet() const
{
    return tableFieldNameIsSet_;
}

void ProjectFieldConfigVo::unsettableFieldName()
{
    tableFieldNameIsSet_ = false;
}

std::string ProjectFieldConfigVo::getValueType() const
{
    return valueType_;
}

void ProjectFieldConfigVo::setValueType(const std::string& value)
{
    valueType_ = value;
    valueTypeIsSet_ = true;
}

bool ProjectFieldConfigVo::valueTypeIsSet() const
{
    return valueTypeIsSet_;
}

void ProjectFieldConfigVo::unsetvalueType()
{
    valueTypeIsSet_ = false;
}

std::string ProjectFieldConfigVo::getValueTypeName() const
{
    return valueTypeName_;
}

void ProjectFieldConfigVo::setValueTypeName(const std::string& value)
{
    valueTypeName_ = value;
    valueTypeNameIsSet_ = true;
}

bool ProjectFieldConfigVo::valueTypeNameIsSet() const
{
    return valueTypeNameIsSet_;
}

void ProjectFieldConfigVo::unsetvalueTypeName()
{
    valueTypeNameIsSet_ = false;
}

int32_t ProjectFieldConfigVo::getIsSystem() const
{
    return isSystem_;
}

void ProjectFieldConfigVo::setIsSystem(int32_t value)
{
    isSystem_ = value;
    isSystemIsSet_ = true;
}

bool ProjectFieldConfigVo::isSystemIsSet() const
{
    return isSystemIsSet_;
}

void ProjectFieldConfigVo::unsetisSystem()
{
    isSystemIsSet_ = false;
}

int32_t ProjectFieldConfigVo::getIsDisplay() const
{
    return isDisplay_;
}

void ProjectFieldConfigVo::setIsDisplay(int32_t value)
{
    isDisplay_ = value;
    isDisplayIsSet_ = true;
}

bool ProjectFieldConfigVo::isDisplayIsSet() const
{
    return isDisplayIsSet_;
}

void ProjectFieldConfigVo::unsetisDisplay()
{
    isDisplayIsSet_ = false;
}

int32_t ProjectFieldConfigVo::getIsRequired() const
{
    return isRequired_;
}

void ProjectFieldConfigVo::setIsRequired(int32_t value)
{
    isRequired_ = value;
    isRequiredIsSet_ = true;
}

bool ProjectFieldConfigVo::isRequiredIsSet() const
{
    return isRequiredIsSet_;
}

void ProjectFieldConfigVo::unsetisRequired()
{
    isRequiredIsSet_ = false;
}

int32_t ProjectFieldConfigVo::getSortNumb() const
{
    return sortNumb_;
}

void ProjectFieldConfigVo::setSortNumb(int32_t value)
{
    sortNumb_ = value;
    sortNumbIsSet_ = true;
}

bool ProjectFieldConfigVo::sortNumbIsSet() const
{
    return sortNumbIsSet_;
}

void ProjectFieldConfigVo::unsetsortNumb()
{
    sortNumbIsSet_ = false;
}

std::string ProjectFieldConfigVo::getDefaultValue() const
{
    return defaultValue_;
}

void ProjectFieldConfigVo::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool ProjectFieldConfigVo::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void ProjectFieldConfigVo::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string ProjectFieldConfigVo::getCustomFieldUri() const
{
    return customFieldUri_;
}

void ProjectFieldConfigVo::setCustomFieldUri(const std::string& value)
{
    customFieldUri_ = value;
    customFieldUriIsSet_ = true;
}

bool ProjectFieldConfigVo::customFieldUriIsSet() const
{
    return customFieldUriIsSet_;
}

void ProjectFieldConfigVo::unsetcustomFieldUri()
{
    customFieldUriIsSet_ = false;
}

std::string ProjectFieldConfigVo::getResourceType() const
{
    return resourceType_;
}

void ProjectFieldConfigVo::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ProjectFieldConfigVo::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ProjectFieldConfigVo::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

NameAndIdVo ProjectFieldConfigVo::getCreator() const
{
    return creator_;
}

void ProjectFieldConfigVo::setCreator(const NameAndIdVo& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ProjectFieldConfigVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void ProjectFieldConfigVo::unsetcreator()
{
    creatorIsSet_ = false;
}

int64_t ProjectFieldConfigVo::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void ProjectFieldConfigVo::setCreateTimeStamp(int64_t value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool ProjectFieldConfigVo::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void ProjectFieldConfigVo::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

int64_t ProjectFieldConfigVo::getUpdateTimeStamp() const
{
    return updateTimeStamp_;
}

void ProjectFieldConfigVo::setUpdateTimeStamp(int64_t value)
{
    updateTimeStamp_ = value;
    updateTimeStampIsSet_ = true;
}

bool ProjectFieldConfigVo::updateTimeStampIsSet() const
{
    return updateTimeStampIsSet_;
}

void ProjectFieldConfigVo::unsetupdateTimeStamp()
{
    updateTimeStampIsSet_ = false;
}

std::string ProjectFieldConfigVo::getProjectUuid() const
{
    return projectUuid_;
}

void ProjectFieldConfigVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ProjectFieldConfigVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ProjectFieldConfigVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::vector<ProjectFieldConfigOptionVo>& ProjectFieldConfigVo::getOptionVos()
{
    return optionVos_;
}

void ProjectFieldConfigVo::setOptionVos(const std::vector<ProjectFieldConfigOptionVo>& value)
{
    optionVos_ = value;
    optionVosIsSet_ = true;
}

bool ProjectFieldConfigVo::optionVosIsSet() const
{
    return optionVosIsSet_;
}

void ProjectFieldConfigVo::unsetoptionVos()
{
    optionVosIsSet_ = false;
}

int32_t ProjectFieldConfigVo::getCustomFieldId() const
{
    return customFieldId_;
}

void ProjectFieldConfigVo::setCustomFieldId(int32_t value)
{
    customFieldId_ = value;
    customFieldIdIsSet_ = true;
}

bool ProjectFieldConfigVo::customFieldIdIsSet() const
{
    return customFieldIdIsSet_;
}

void ProjectFieldConfigVo::unsetcustomFieldId()
{
    customFieldIdIsSet_ = false;
}

std::string ProjectFieldConfigVo::getCustomFieldName() const
{
    return customFieldName_;
}

void ProjectFieldConfigVo::setCustomFieldName(const std::string& value)
{
    customFieldName_ = value;
    customFieldNameIsSet_ = true;
}

bool ProjectFieldConfigVo::customFieldNameIsSet() const
{
    return customFieldNameIsSet_;
}

void ProjectFieldConfigVo::unsetcustomFieldName()
{
    customFieldNameIsSet_ = false;
}

std::string ProjectFieldConfigVo::getCustomFieldParam() const
{
    return customFieldParam_;
}

void ProjectFieldConfigVo::setCustomFieldParam(const std::string& value)
{
    customFieldParam_ = value;
    customFieldParamIsSet_ = true;
}

bool ProjectFieldConfigVo::customFieldParamIsSet() const
{
    return customFieldParamIsSet_;
}

void ProjectFieldConfigVo::unsetcustomFieldParam()
{
    customFieldParamIsSet_ = false;
}

}
}
}
}
}


