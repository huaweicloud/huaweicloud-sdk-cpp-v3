

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse_metadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse_metadata::AlgorithmResponse_metadata()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    aiProject_ = "";
    aiProjectIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    tagsIsSet_ = false;
    attrListIsSet_ = false;
    versionNum_ = 0;
    versionNumIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

AlgorithmResponse_metadata::~AlgorithmResponse_metadata() = default;

void AlgorithmResponse_metadata::validate()
{
}

web::json::value AlgorithmResponse_metadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(aiProjectIsSet_) {
        val[utility::conversions::to_string_t("ai_project")] = ModelBase::toJson(aiProject_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("api_version")] = ModelBase::toJson(apiVersion_);
    }
    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(attrListIsSet_) {
        val[utility::conversions::to_string_t("attr_list")] = ModelBase::toJson(attrList_);
    }
    if(versionNumIsSet_) {
        val[utility::conversions::to_string_t("version_num")] = ModelBase::toJson(versionNum_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool AlgorithmResponse_metadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ai_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ai_project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAiProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attr_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attr_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttrList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string AlgorithmResponse_metadata::getId() const
{
    return id_;
}

void AlgorithmResponse_metadata::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AlgorithmResponse_metadata::idIsSet() const
{
    return idIsSet_;
}

void AlgorithmResponse_metadata::unsetid()
{
    idIsSet_ = false;
}

std::string AlgorithmResponse_metadata::getName() const
{
    return name_;
}

void AlgorithmResponse_metadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlgorithmResponse_metadata::nameIsSet() const
{
    return nameIsSet_;
}

void AlgorithmResponse_metadata::unsetname()
{
    nameIsSet_ = false;
}

std::string AlgorithmResponse_metadata::getDescription() const
{
    return description_;
}

void AlgorithmResponse_metadata::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AlgorithmResponse_metadata::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AlgorithmResponse_metadata::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AlgorithmResponse_metadata::getWorkspaceId() const
{
    return workspaceId_;
}

void AlgorithmResponse_metadata::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool AlgorithmResponse_metadata::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void AlgorithmResponse_metadata::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string AlgorithmResponse_metadata::getAiProject() const
{
    return aiProject_;
}

void AlgorithmResponse_metadata::setAiProject(const std::string& value)
{
    aiProject_ = value;
    aiProjectIsSet_ = true;
}

bool AlgorithmResponse_metadata::aiProjectIsSet() const
{
    return aiProjectIsSet_;
}

void AlgorithmResponse_metadata::unsetaiProject()
{
    aiProjectIsSet_ = false;
}

std::string AlgorithmResponse_metadata::getUserName() const
{
    return userName_;
}

void AlgorithmResponse_metadata::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool AlgorithmResponse_metadata::userNameIsSet() const
{
    return userNameIsSet_;
}

void AlgorithmResponse_metadata::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string AlgorithmResponse_metadata::getDomainId() const
{
    return domainId_;
}

void AlgorithmResponse_metadata::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AlgorithmResponse_metadata::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AlgorithmResponse_metadata::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AlgorithmResponse_metadata::getSource() const
{
    return source_;
}

void AlgorithmResponse_metadata::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool AlgorithmResponse_metadata::sourceIsSet() const
{
    return sourceIsSet_;
}

void AlgorithmResponse_metadata::unsetsource()
{
    sourceIsSet_ = false;
}

std::string AlgorithmResponse_metadata::getApiVersion() const
{
    return apiVersion_;
}

void AlgorithmResponse_metadata::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool AlgorithmResponse_metadata::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void AlgorithmResponse_metadata::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

bool AlgorithmResponse_metadata::isIsValid() const
{
    return isValid_;
}

void AlgorithmResponse_metadata::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool AlgorithmResponse_metadata::isValidIsSet() const
{
    return isValidIsSet_;
}

void AlgorithmResponse_metadata::unsetisValid()
{
    isValidIsSet_ = false;
}

std::string AlgorithmResponse_metadata::getState() const
{
    return state_;
}

void AlgorithmResponse_metadata::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool AlgorithmResponse_metadata::stateIsSet() const
{
    return stateIsSet_;
}

void AlgorithmResponse_metadata::unsetstate()
{
    stateIsSet_ = false;
}

std::vector<std::map<std::string, std::string>>& AlgorithmResponse_metadata::getTags()
{
    return tags_;
}

void AlgorithmResponse_metadata::setTags(const std::vector<std::map<std::string, std::string>>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool AlgorithmResponse_metadata::tagsIsSet() const
{
    return tagsIsSet_;
}

void AlgorithmResponse_metadata::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<std::string>& AlgorithmResponse_metadata::getAttrList()
{
    return attrList_;
}

void AlgorithmResponse_metadata::setAttrList(const std::vector<std::string>& value)
{
    attrList_ = value;
    attrListIsSet_ = true;
}

bool AlgorithmResponse_metadata::attrListIsSet() const
{
    return attrListIsSet_;
}

void AlgorithmResponse_metadata::unsetattrList()
{
    attrListIsSet_ = false;
}

int32_t AlgorithmResponse_metadata::getVersionNum() const
{
    return versionNum_;
}

void AlgorithmResponse_metadata::setVersionNum(int32_t value)
{
    versionNum_ = value;
    versionNumIsSet_ = true;
}

bool AlgorithmResponse_metadata::versionNumIsSet() const
{
    return versionNumIsSet_;
}

void AlgorithmResponse_metadata::unsetversionNum()
{
    versionNumIsSet_ = false;
}

int32_t AlgorithmResponse_metadata::getSize() const
{
    return size_;
}

void AlgorithmResponse_metadata::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool AlgorithmResponse_metadata::sizeIsSet() const
{
    return sizeIsSet_;
}

void AlgorithmResponse_metadata::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t AlgorithmResponse_metadata::getCreateTime() const
{
    return createTime_;
}

void AlgorithmResponse_metadata::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AlgorithmResponse_metadata::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AlgorithmResponse_metadata::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t AlgorithmResponse_metadata::getUpdateTime() const
{
    return updateTime_;
}

void AlgorithmResponse_metadata::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AlgorithmResponse_metadata::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AlgorithmResponse_metadata::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


