

#include "huaweicloud/codeartscheck/v2/model/CriterionSetListV2Body.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CriterionSetListV2Body::CriterionSetListV2Body()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    comments_ = "";
    commentsIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastReviser_ = "";
    lastReviserIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    numCriterion_ = 0;
    numCriterionIsSet_ = false;
    canEdit_ = false;
    canEditIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    managers_ = "";
    managersIsSet_ = false;
    parentSetNames_ = "";
    parentSetNamesIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    inheritMode_ = "";
    inheritModeIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    isSystemDefault_ = "";
    isSystemDefaultIsSet_ = false;
    isProjectDefault_ = "";
    isProjectDefaultIsSet_ = false;
    isSystemSet_ = "";
    isSystemSetIsSet_ = false;
    ruleIds_ = "";
    ruleIdsIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    canSetDefault_ = false;
    canSetDefaultIsSet_ = false;
    isUsed_ = false;
    isUsedIsSet_ = false;
    childSetsIsSet_ = false;
    isReliable_ = false;
    isReliableIsSet_ = false;
    isRecommand_ = "";
    isRecommandIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    defaultSet_ = "";
    defaultSetIsSet_ = false;
    deptId_ = "";
    deptIdIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    reliableTag_ = "";
    reliableTagIsSet_ = false;
    recommandType_ = "";
    recommandTypeIsSet_ = false;
}

CriterionSetListV2Body::~CriterionSetListV2Body() = default;

void CriterionSetListV2Body::validate()
{
}

web::json::value CriterionSetListV2Body::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(commentsIsSet_) {
        val[utility::conversions::to_string_t("comments")] = ModelBase::toJson(comments_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(lastReviserIsSet_) {
        val[utility::conversions::to_string_t("lastReviser")] = ModelBase::toJson(lastReviser_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastUpdateTime")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parentId")] = ModelBase::toJson(parentId_);
    }
    if(numCriterionIsSet_) {
        val[utility::conversions::to_string_t("numCriterion")] = ModelBase::toJson(numCriterion_);
    }
    if(canEditIsSet_) {
        val[utility::conversions::to_string_t("canEdit")] = ModelBase::toJson(canEdit_);
    }
    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("canDelete")] = ModelBase::toJson(canDelete_);
    }
    if(managersIsSet_) {
        val[utility::conversions::to_string_t("managers")] = ModelBase::toJson(managers_);
    }
    if(parentSetNamesIsSet_) {
        val[utility::conversions::to_string_t("parentSetNames")] = ModelBase::toJson(parentSetNames_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domainId")] = ModelBase::toJson(domainId_);
    }
    if(inheritModeIsSet_) {
        val[utility::conversions::to_string_t("inheritMode")] = ModelBase::toJson(inheritMode_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creatorId")] = ModelBase::toJson(creatorId_);
    }
    if(isSystemDefaultIsSet_) {
        val[utility::conversions::to_string_t("isSystemDefault")] = ModelBase::toJson(isSystemDefault_);
    }
    if(isProjectDefaultIsSet_) {
        val[utility::conversions::to_string_t("isProjectDefault")] = ModelBase::toJson(isProjectDefault_);
    }
    if(isSystemSetIsSet_) {
        val[utility::conversions::to_string_t("isSystemSet")] = ModelBase::toJson(isSystemSet_);
    }
    if(ruleIdsIsSet_) {
        val[utility::conversions::to_string_t("ruleIds")] = ModelBase::toJson(ruleIds_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(canSetDefaultIsSet_) {
        val[utility::conversions::to_string_t("canSetDefault")] = ModelBase::toJson(canSetDefault_);
    }
    if(isUsedIsSet_) {
        val[utility::conversions::to_string_t("isUsed")] = ModelBase::toJson(isUsed_);
    }
    if(childSetsIsSet_) {
        val[utility::conversions::to_string_t("childSets")] = ModelBase::toJson(childSets_);
    }
    if(isReliableIsSet_) {
        val[utility::conversions::to_string_t("isReliable")] = ModelBase::toJson(isReliable_);
    }
    if(isRecommandIsSet_) {
        val[utility::conversions::to_string_t("isRecommand")] = ModelBase::toJson(isRecommand_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("isDefault")] = ModelBase::toJson(isDefault_);
    }
    if(defaultSetIsSet_) {
        val[utility::conversions::to_string_t("defaultSet")] = ModelBase::toJson(defaultSet_);
    }
    if(deptIdIsSet_) {
        val[utility::conversions::to_string_t("deptId")] = ModelBase::toJson(deptId_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(reliableTagIsSet_) {
        val[utility::conversions::to_string_t("reliableTag")] = ModelBase::toJson(reliableTag_);
    }
    if(recommandTypeIsSet_) {
        val[utility::conversions::to_string_t("recommandType")] = ModelBase::toJson(recommandType_);
    }

    return val;
}
bool CriterionSetListV2Body::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comments"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComments(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastReviser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastReviser"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastReviser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastUpdateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastUpdateTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("numCriterion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("numCriterion"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumCriterion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canEdit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canEdit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanEdit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canDelete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canDelete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("managers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentSetNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentSetNames"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentSetNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domainId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domainId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inheritMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inheritMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creatorId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatorId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSystemDefault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSystemDefault"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSystemDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isProjectDefault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isProjectDefault"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProjectDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSystemSet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSystemSet"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSystemSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ruleIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleIds"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("canSetDefault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canSetDefault"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanSetDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isUsed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("childSets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("childSets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildSets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isReliable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isReliable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReliable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isRecommand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isRecommand"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRecommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isDefault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isDefault"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultSet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultSet"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reliableTag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reliableTag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReliableTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recommandType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recommandType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecommandType(refVal);
        }
    }
    return ok;
}


std::string CriterionSetListV2Body::getId() const
{
    return id_;
}

void CriterionSetListV2Body::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CriterionSetListV2Body::idIsSet() const
{
    return idIsSet_;
}

void CriterionSetListV2Body::unsetid()
{
    idIsSet_ = false;
}

std::string CriterionSetListV2Body::getName() const
{
    return name_;
}

void CriterionSetListV2Body::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CriterionSetListV2Body::nameIsSet() const
{
    return nameIsSet_;
}

void CriterionSetListV2Body::unsetname()
{
    nameIsSet_ = false;
}

std::string CriterionSetListV2Body::getComments() const
{
    return comments_;
}

void CriterionSetListV2Body::setComments(const std::string& value)
{
    comments_ = value;
    commentsIsSet_ = true;
}

bool CriterionSetListV2Body::commentsIsSet() const
{
    return commentsIsSet_;
}

void CriterionSetListV2Body::unsetcomments()
{
    commentsIsSet_ = false;
}

std::string CriterionSetListV2Body::getType() const
{
    return type_;
}

void CriterionSetListV2Body::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CriterionSetListV2Body::typeIsSet() const
{
    return typeIsSet_;
}

void CriterionSetListV2Body::unsettype()
{
    typeIsSet_ = false;
}

std::string CriterionSetListV2Body::getCreator() const
{
    return creator_;
}

void CriterionSetListV2Body::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool CriterionSetListV2Body::creatorIsSet() const
{
    return creatorIsSet_;
}

void CriterionSetListV2Body::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string CriterionSetListV2Body::getCreateTime() const
{
    return createTime_;
}

void CriterionSetListV2Body::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CriterionSetListV2Body::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CriterionSetListV2Body::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CriterionSetListV2Body::getLastReviser() const
{
    return lastReviser_;
}

void CriterionSetListV2Body::setLastReviser(const std::string& value)
{
    lastReviser_ = value;
    lastReviserIsSet_ = true;
}

bool CriterionSetListV2Body::lastReviserIsSet() const
{
    return lastReviserIsSet_;
}

void CriterionSetListV2Body::unsetlastReviser()
{
    lastReviserIsSet_ = false;
}

std::string CriterionSetListV2Body::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void CriterionSetListV2Body::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool CriterionSetListV2Body::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void CriterionSetListV2Body::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string CriterionSetListV2Body::getLanguage() const
{
    return language_;
}

void CriterionSetListV2Body::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CriterionSetListV2Body::languageIsSet() const
{
    return languageIsSet_;
}

void CriterionSetListV2Body::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string CriterionSetListV2Body::getParentId() const
{
    return parentId_;
}

void CriterionSetListV2Body::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CriterionSetListV2Body::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CriterionSetListV2Body::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t CriterionSetListV2Body::getNumCriterion() const
{
    return numCriterion_;
}

void CriterionSetListV2Body::setNumCriterion(int32_t value)
{
    numCriterion_ = value;
    numCriterionIsSet_ = true;
}

bool CriterionSetListV2Body::numCriterionIsSet() const
{
    return numCriterionIsSet_;
}

void CriterionSetListV2Body::unsetnumCriterion()
{
    numCriterionIsSet_ = false;
}

bool CriterionSetListV2Body::isCanEdit() const
{
    return canEdit_;
}

void CriterionSetListV2Body::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool CriterionSetListV2Body::canEditIsSet() const
{
    return canEditIsSet_;
}

void CriterionSetListV2Body::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool CriterionSetListV2Body::isCanDelete() const
{
    return canDelete_;
}

void CriterionSetListV2Body::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool CriterionSetListV2Body::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void CriterionSetListV2Body::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

std::string CriterionSetListV2Body::getManagers() const
{
    return managers_;
}

void CriterionSetListV2Body::setManagers(const std::string& value)
{
    managers_ = value;
    managersIsSet_ = true;
}

bool CriterionSetListV2Body::managersIsSet() const
{
    return managersIsSet_;
}

void CriterionSetListV2Body::unsetmanagers()
{
    managersIsSet_ = false;
}

std::string CriterionSetListV2Body::getParentSetNames() const
{
    return parentSetNames_;
}

void CriterionSetListV2Body::setParentSetNames(const std::string& value)
{
    parentSetNames_ = value;
    parentSetNamesIsSet_ = true;
}

bool CriterionSetListV2Body::parentSetNamesIsSet() const
{
    return parentSetNamesIsSet_;
}

void CriterionSetListV2Body::unsetparentSetNames()
{
    parentSetNamesIsSet_ = false;
}

std::string CriterionSetListV2Body::getDomainId() const
{
    return domainId_;
}

void CriterionSetListV2Body::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CriterionSetListV2Body::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CriterionSetListV2Body::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string CriterionSetListV2Body::getInheritMode() const
{
    return inheritMode_;
}

void CriterionSetListV2Body::setInheritMode(const std::string& value)
{
    inheritMode_ = value;
    inheritModeIsSet_ = true;
}

bool CriterionSetListV2Body::inheritModeIsSet() const
{
    return inheritModeIsSet_;
}

void CriterionSetListV2Body::unsetinheritMode()
{
    inheritModeIsSet_ = false;
}

std::string CriterionSetListV2Body::getCreatorId() const
{
    return creatorId_;
}

void CriterionSetListV2Body::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool CriterionSetListV2Body::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void CriterionSetListV2Body::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string CriterionSetListV2Body::getIsSystemDefault() const
{
    return isSystemDefault_;
}

void CriterionSetListV2Body::setIsSystemDefault(const std::string& value)
{
    isSystemDefault_ = value;
    isSystemDefaultIsSet_ = true;
}

bool CriterionSetListV2Body::isSystemDefaultIsSet() const
{
    return isSystemDefaultIsSet_;
}

void CriterionSetListV2Body::unsetisSystemDefault()
{
    isSystemDefaultIsSet_ = false;
}

std::string CriterionSetListV2Body::getIsProjectDefault() const
{
    return isProjectDefault_;
}

void CriterionSetListV2Body::setIsProjectDefault(const std::string& value)
{
    isProjectDefault_ = value;
    isProjectDefaultIsSet_ = true;
}

bool CriterionSetListV2Body::isProjectDefaultIsSet() const
{
    return isProjectDefaultIsSet_;
}

void CriterionSetListV2Body::unsetisProjectDefault()
{
    isProjectDefaultIsSet_ = false;
}

std::string CriterionSetListV2Body::getIsSystemSet() const
{
    return isSystemSet_;
}

void CriterionSetListV2Body::setIsSystemSet(const std::string& value)
{
    isSystemSet_ = value;
    isSystemSetIsSet_ = true;
}

bool CriterionSetListV2Body::isSystemSetIsSet() const
{
    return isSystemSetIsSet_;
}

void CriterionSetListV2Body::unsetisSystemSet()
{
    isSystemSetIsSet_ = false;
}

std::string CriterionSetListV2Body::getRuleIds() const
{
    return ruleIds_;
}

void CriterionSetListV2Body::setRuleIds(const std::string& value)
{
    ruleIds_ = value;
    ruleIdsIsSet_ = true;
}

bool CriterionSetListV2Body::ruleIdsIsSet() const
{
    return ruleIdsIsSet_;
}

void CriterionSetListV2Body::unsetruleIds()
{
    ruleIdsIsSet_ = false;
}

std::string CriterionSetListV2Body::getRegion() const
{
    return region_;
}

void CriterionSetListV2Body::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CriterionSetListV2Body::regionIsSet() const
{
    return regionIsSet_;
}

void CriterionSetListV2Body::unsetregion()
{
    regionIsSet_ = false;
}

bool CriterionSetListV2Body::isCanSetDefault() const
{
    return canSetDefault_;
}

void CriterionSetListV2Body::setCanSetDefault(bool value)
{
    canSetDefault_ = value;
    canSetDefaultIsSet_ = true;
}

bool CriterionSetListV2Body::canSetDefaultIsSet() const
{
    return canSetDefaultIsSet_;
}

void CriterionSetListV2Body::unsetcanSetDefault()
{
    canSetDefaultIsSet_ = false;
}

bool CriterionSetListV2Body::isIsUsed() const
{
    return isUsed_;
}

void CriterionSetListV2Body::setIsUsed(bool value)
{
    isUsed_ = value;
    isUsedIsSet_ = true;
}

bool CriterionSetListV2Body::isUsedIsSet() const
{
    return isUsedIsSet_;
}

void CriterionSetListV2Body::unsetisUsed()
{
    isUsedIsSet_ = false;
}

std::vector<std::string>& CriterionSetListV2Body::getChildSets()
{
    return childSets_;
}

void CriterionSetListV2Body::setChildSets(const std::vector<std::string>& value)
{
    childSets_ = value;
    childSetsIsSet_ = true;
}

bool CriterionSetListV2Body::childSetsIsSet() const
{
    return childSetsIsSet_;
}

void CriterionSetListV2Body::unsetchildSets()
{
    childSetsIsSet_ = false;
}

bool CriterionSetListV2Body::isIsReliable() const
{
    return isReliable_;
}

void CriterionSetListV2Body::setIsReliable(bool value)
{
    isReliable_ = value;
    isReliableIsSet_ = true;
}

bool CriterionSetListV2Body::isReliableIsSet() const
{
    return isReliableIsSet_;
}

void CriterionSetListV2Body::unsetisReliable()
{
    isReliableIsSet_ = false;
}

std::string CriterionSetListV2Body::getIsRecommand() const
{
    return isRecommand_;
}

void CriterionSetListV2Body::setIsRecommand(const std::string& value)
{
    isRecommand_ = value;
    isRecommandIsSet_ = true;
}

bool CriterionSetListV2Body::isRecommandIsSet() const
{
    return isRecommandIsSet_;
}

void CriterionSetListV2Body::unsetisRecommand()
{
    isRecommandIsSet_ = false;
}

bool CriterionSetListV2Body::isIsDefault() const
{
    return isDefault_;
}

void CriterionSetListV2Body::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool CriterionSetListV2Body::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void CriterionSetListV2Body::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

std::string CriterionSetListV2Body::getDefaultSet() const
{
    return defaultSet_;
}

void CriterionSetListV2Body::setDefaultSet(const std::string& value)
{
    defaultSet_ = value;
    defaultSetIsSet_ = true;
}

bool CriterionSetListV2Body::defaultSetIsSet() const
{
    return defaultSetIsSet_;
}

void CriterionSetListV2Body::unsetdefaultSet()
{
    defaultSetIsSet_ = false;
}

std::string CriterionSetListV2Body::getDeptId() const
{
    return deptId_;
}

void CriterionSetListV2Body::setDeptId(const std::string& value)
{
    deptId_ = value;
    deptIdIsSet_ = true;
}

bool CriterionSetListV2Body::deptIdIsSet() const
{
    return deptIdIsSet_;
}

void CriterionSetListV2Body::unsetdeptId()
{
    deptIdIsSet_ = false;
}

std::string CriterionSetListV2Body::getDeptName() const
{
    return deptName_;
}

void CriterionSetListV2Body::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool CriterionSetListV2Body::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void CriterionSetListV2Body::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string CriterionSetListV2Body::getReliableTag() const
{
    return reliableTag_;
}

void CriterionSetListV2Body::setReliableTag(const std::string& value)
{
    reliableTag_ = value;
    reliableTagIsSet_ = true;
}

bool CriterionSetListV2Body::reliableTagIsSet() const
{
    return reliableTagIsSet_;
}

void CriterionSetListV2Body::unsetreliableTag()
{
    reliableTagIsSet_ = false;
}

std::string CriterionSetListV2Body::getRecommandType() const
{
    return recommandType_;
}

void CriterionSetListV2Body::setRecommandType(const std::string& value)
{
    recommandType_ = value;
    recommandTypeIsSet_ = true;
}

bool CriterionSetListV2Body::recommandTypeIsSet() const
{
    return recommandTypeIsSet_;
}

void CriterionSetListV2Body::unsetrecommandType()
{
    recommandTypeIsSet_ = false;
}

}
}
}
}
}


