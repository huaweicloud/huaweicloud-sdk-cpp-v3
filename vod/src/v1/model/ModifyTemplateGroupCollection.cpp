

#include "huaweicloud/vod/v1/model/ModifyTemplateGroupCollection.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ModifyTemplateGroupCollection::ModifyTemplateGroupCollection()
{
    name_ = "";
    nameIsSet_ = false;
    collectionId_ = "";
    collectionIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    templateGroupListIsSet_ = false;
}

ModifyTemplateGroupCollection::~ModifyTemplateGroupCollection() = default;

void ModifyTemplateGroupCollection::validate()
{
}

web::json::value ModifyTemplateGroupCollection::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(collectionIdIsSet_) {
        val[utility::conversions::to_string_t("collection_id")] = ModelBase::toJson(collectionId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(templateGroupListIsSet_) {
        val[utility::conversions::to_string_t("template_group_list")] = ModelBase::toJson(templateGroupList_);
    }

    return val;
}
bool ModifyTemplateGroupCollection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollectionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template_group_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroupList(refVal);
        }
    }
    return ok;
}


std::string ModifyTemplateGroupCollection::getName() const
{
    return name_;
}

void ModifyTemplateGroupCollection::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModifyTemplateGroupCollection::nameIsSet() const
{
    return nameIsSet_;
}

void ModifyTemplateGroupCollection::unsetname()
{
    nameIsSet_ = false;
}

std::string ModifyTemplateGroupCollection::getCollectionId() const
{
    return collectionId_;
}

void ModifyTemplateGroupCollection::setCollectionId(const std::string& value)
{
    collectionId_ = value;
    collectionIdIsSet_ = true;
}

bool ModifyTemplateGroupCollection::collectionIdIsSet() const
{
    return collectionIdIsSet_;
}

void ModifyTemplateGroupCollection::unsetcollectionId()
{
    collectionIdIsSet_ = false;
}

std::string ModifyTemplateGroupCollection::getDescription() const
{
    return description_;
}

void ModifyTemplateGroupCollection::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ModifyTemplateGroupCollection::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ModifyTemplateGroupCollection::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& ModifyTemplateGroupCollection::getTemplateGroupList()
{
    return templateGroupList_;
}

void ModifyTemplateGroupCollection::setTemplateGroupList(const std::vector<std::string>& value)
{
    templateGroupList_ = value;
    templateGroupListIsSet_ = true;
}

bool ModifyTemplateGroupCollection::templateGroupListIsSet() const
{
    return templateGroupListIsSet_;
}

void ModifyTemplateGroupCollection::unsettemplateGroupList()
{
    templateGroupListIsSet_ = false;
}

}
}
}
}
}


