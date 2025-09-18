

#include "huaweicloud/projectman/v4/model/CreateCustomfieldsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateCustomfieldsResponse::CreateCustomfieldsResponse()
{
    options_ = "";
    optionsIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    identifier_ = "";
    identifierIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
    customField_ = "";
    customFieldIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sort_ = 0;
    sortIsSet_ = false;
    memo_ = "";
    memoIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    modified_ = "";
    modifiedIsSet_ = false;
    isDelete_ = false;
    isDeleteIsSet_ = false;
}

CreateCustomfieldsResponse::~CreateCustomfieldsResponse() = default;

void CreateCustomfieldsResponse::validate()
{
}

web::json::value CreateCustomfieldsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(customFieldIsSet_) {
        val[utility::conversions::to_string_t("custom_field")] = ModelBase::toJson(customField_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(memoIsSet_) {
        val[utility::conversions::to_string_t("memo")] = ModelBase::toJson(memo_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(modifiedIsSet_) {
        val[utility::conversions::to_string_t("modified")] = ModelBase::toJson(modified_);
    }
    if(isDeleteIsSet_) {
        val[utility::conversions::to_string_t("is_delete")] = ModelBase::toJson(isDelete_);
    }

    return val;
}
bool CreateCustomfieldsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDelete(refVal);
        }
    }
    return ok;
}


std::string CreateCustomfieldsResponse::getOptions() const
{
    return options_;
}

void CreateCustomfieldsResponse::setOptions(const std::string& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool CreateCustomfieldsResponse::optionsIsSet() const
{
    return optionsIsSet_;
}

void CreateCustomfieldsResponse::unsetoptions()
{
    optionsIsSet_ = false;
}

std::string CreateCustomfieldsResponse::getRegion() const
{
    return region_;
}

void CreateCustomfieldsResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateCustomfieldsResponse::regionIsSet() const
{
    return regionIsSet_;
}

void CreateCustomfieldsResponse::unsetregion()
{
    regionIsSet_ = false;
}

int32_t CreateCustomfieldsResponse::getId() const
{
    return id_;
}

void CreateCustomfieldsResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateCustomfieldsResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateCustomfieldsResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateCustomfieldsResponse::getIdentifier() const
{
    return identifier_;
}

void CreateCustomfieldsResponse::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool CreateCustomfieldsResponse::identifierIsSet() const
{
    return identifierIsSet_;
}

void CreateCustomfieldsResponse::unsetidentifier()
{
    identifierIsSet_ = false;
}

int32_t CreateCustomfieldsResponse::getProjectId() const
{
    return projectId_;
}

void CreateCustomfieldsResponse::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateCustomfieldsResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateCustomfieldsResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t CreateCustomfieldsResponse::getTrackerId() const
{
    return trackerId_;
}

void CreateCustomfieldsResponse::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool CreateCustomfieldsResponse::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void CreateCustomfieldsResponse::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string CreateCustomfieldsResponse::getCustomField() const
{
    return customField_;
}

void CreateCustomfieldsResponse::setCustomField(const std::string& value)
{
    customField_ = value;
    customFieldIsSet_ = true;
}

bool CreateCustomfieldsResponse::customFieldIsSet() const
{
    return customFieldIsSet_;
}

void CreateCustomfieldsResponse::unsetcustomField()
{
    customFieldIsSet_ = false;
}

std::string CreateCustomfieldsResponse::getType() const
{
    return type_;
}

void CreateCustomfieldsResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateCustomfieldsResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CreateCustomfieldsResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateCustomfieldsResponse::getName() const
{
    return name_;
}

void CreateCustomfieldsResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateCustomfieldsResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateCustomfieldsResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateCustomfieldsResponse::getSort() const
{
    return sort_;
}

void CreateCustomfieldsResponse::setSort(int32_t value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool CreateCustomfieldsResponse::sortIsSet() const
{
    return sortIsSet_;
}

void CreateCustomfieldsResponse::unsetsort()
{
    sortIsSet_ = false;
}

std::string CreateCustomfieldsResponse::getMemo() const
{
    return memo_;
}

void CreateCustomfieldsResponse::setMemo(const std::string& value)
{
    memo_ = value;
    memoIsSet_ = true;
}

bool CreateCustomfieldsResponse::memoIsSet() const
{
    return memoIsSet_;
}

void CreateCustomfieldsResponse::unsetmemo()
{
    memoIsSet_ = false;
}

std::string CreateCustomfieldsResponse::getCreated() const
{
    return created_;
}

void CreateCustomfieldsResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool CreateCustomfieldsResponse::createdIsSet() const
{
    return createdIsSet_;
}

void CreateCustomfieldsResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string CreateCustomfieldsResponse::getModified() const
{
    return modified_;
}

void CreateCustomfieldsResponse::setModified(const std::string& value)
{
    modified_ = value;
    modifiedIsSet_ = true;
}

bool CreateCustomfieldsResponse::modifiedIsSet() const
{
    return modifiedIsSet_;
}

void CreateCustomfieldsResponse::unsetmodified()
{
    modifiedIsSet_ = false;
}

bool CreateCustomfieldsResponse::isIsDelete() const
{
    return isDelete_;
}

void CreateCustomfieldsResponse::setIsDelete(bool value)
{
    isDelete_ = value;
    isDeleteIsSet_ = true;
}

bool CreateCustomfieldsResponse::isDeleteIsSet() const
{
    return isDeleteIsSet_;
}

void CreateCustomfieldsResponse::unsetisDelete()
{
    isDeleteIsSet_ = false;
}

}
}
}
}
}


