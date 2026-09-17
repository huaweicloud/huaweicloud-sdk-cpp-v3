

#include "huaweicloud/projectman/v4/model/FeatureSetOpenApiVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




FeatureSetOpenApiVO::FeatureSetOpenApiVO()
{
    id_ = "";
    idIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    positionFloat_ = "";
    positionFloatIsSet_ = false;
    createdByIsSet_ = false;
    modifiedByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    childFsIsSet_ = false;
}

FeatureSetOpenApiVO::~FeatureSetOpenApiVO() = default;

void FeatureSetOpenApiVO::validate()
{
}

web::json::value FeatureSetOpenApiVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(positionFloatIsSet_) {
        val[utility::conversions::to_string_t("position_float")] = ModelBase::toJson(positionFloat_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(childFsIsSet_) {
        val[utility::conversions::to_string_t("child_fs")] = ModelBase::toJson(*childFs_);
    }

    return val;
}
bool FeatureSetOpenApiVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position_float"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position_float"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPositionFloat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            UserEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("child_fs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("child_fs"));
        if(!fieldValue.is_null())
        {
            std::vector<FeatureSetOpenApiVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildFs(refVal);
        }
    }
    return ok;
}


std::string FeatureSetOpenApiVO::getId() const
{
    return id_;
}

void FeatureSetOpenApiVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FeatureSetOpenApiVO::idIsSet() const
{
    return idIsSet_;
}

void FeatureSetOpenApiVO::unsetid()
{
    idIsSet_ = false;
}

std::string FeatureSetOpenApiVO::getNumber() const
{
    return number_;
}

void FeatureSetOpenApiVO::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool FeatureSetOpenApiVO::numberIsSet() const
{
    return numberIsSet_;
}

void FeatureSetOpenApiVO::unsetnumber()
{
    numberIsSet_ = false;
}

std::string FeatureSetOpenApiVO::getParentId() const
{
    return parentId_;
}

void FeatureSetOpenApiVO::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool FeatureSetOpenApiVO::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void FeatureSetOpenApiVO::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string FeatureSetOpenApiVO::getTitle() const
{
    return title_;
}

void FeatureSetOpenApiVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool FeatureSetOpenApiVO::titleIsSet() const
{
    return titleIsSet_;
}

void FeatureSetOpenApiVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string FeatureSetOpenApiVO::getPositionFloat() const
{
    return positionFloat_;
}

void FeatureSetOpenApiVO::setPositionFloat(const std::string& value)
{
    positionFloat_ = value;
    positionFloatIsSet_ = true;
}

bool FeatureSetOpenApiVO::positionFloatIsSet() const
{
    return positionFloatIsSet_;
}

void FeatureSetOpenApiVO::unsetpositionFloat()
{
    positionFloatIsSet_ = false;
}

UserEntity FeatureSetOpenApiVO::getCreatedBy() const
{
    return createdBy_;
}

void FeatureSetOpenApiVO::setCreatedBy(const UserEntity& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool FeatureSetOpenApiVO::createdByIsSet() const
{
    return createdByIsSet_;
}

void FeatureSetOpenApiVO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

UserEntity FeatureSetOpenApiVO::getModifiedBy() const
{
    return modifiedBy_;
}

void FeatureSetOpenApiVO::setModifiedBy(const UserEntity& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool FeatureSetOpenApiVO::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void FeatureSetOpenApiVO::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string FeatureSetOpenApiVO::getCreatedDate() const
{
    return createdDate_;
}

void FeatureSetOpenApiVO::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool FeatureSetOpenApiVO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void FeatureSetOpenApiVO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string FeatureSetOpenApiVO::getModifiedDate() const
{
    return modifiedDate_;
}

void FeatureSetOpenApiVO::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool FeatureSetOpenApiVO::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void FeatureSetOpenApiVO::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::vector<FeatureSetOpenApiVO>& FeatureSetOpenApiVO::getChildFs()
{
    return *childFs_;
}

void FeatureSetOpenApiVO::setChildFs(const std::vector<FeatureSetOpenApiVO>& value)
{
    *childFs_ = value;
    childFsIsSet_ = true;
}

bool FeatureSetOpenApiVO::childFsIsSet() const
{
    return childFsIsSet_;
}

void FeatureSetOpenApiVO::unsetchildFs()
{
    childFsIsSet_ = false;
}

}
}
}
}
}


