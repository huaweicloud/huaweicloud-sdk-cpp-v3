

#include "huaweicloud/vod/v1/model/TemplateGroupCollection.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TemplateGroupCollection::TemplateGroupCollection()
{
    groupCollectionId_ = "";
    groupCollectionIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    templateGroupListIsSet_ = false;
}

TemplateGroupCollection::~TemplateGroupCollection() = default;

void TemplateGroupCollection::validate()
{
}

web::json::value TemplateGroupCollection::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupCollectionIdIsSet_) {
        val[utility::conversions::to_string_t("group_collection_id")] = ModelBase::toJson(groupCollectionId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(templateGroupListIsSet_) {
        val[utility::conversions::to_string_t("template_group_list")] = ModelBase::toJson(templateGroupList_);
    }

    return val;
}
bool TemplateGroupCollection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_collection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_collection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupCollectionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template_group_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroupList(refVal);
        }
    }
    return ok;
}


std::string TemplateGroupCollection::getGroupCollectionId() const
{
    return groupCollectionId_;
}

void TemplateGroupCollection::setGroupCollectionId(const std::string& value)
{
    groupCollectionId_ = value;
    groupCollectionIdIsSet_ = true;
}

bool TemplateGroupCollection::groupCollectionIdIsSet() const
{
    return groupCollectionIdIsSet_;
}

void TemplateGroupCollection::unsetgroupCollectionId()
{
    groupCollectionIdIsSet_ = false;
}

std::string TemplateGroupCollection::getName() const
{
    return name_;
}

void TemplateGroupCollection::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateGroupCollection::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateGroupCollection::unsetname()
{
    nameIsSet_ = false;
}

std::string TemplateGroupCollection::getDescription() const
{
    return description_;
}

void TemplateGroupCollection::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateGroupCollection::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateGroupCollection::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<TemplateGroup>& TemplateGroupCollection::getTemplateGroupList()
{
    return templateGroupList_;
}

void TemplateGroupCollection::setTemplateGroupList(const std::vector<TemplateGroup>& value)
{
    templateGroupList_ = value;
    templateGroupListIsSet_ = true;
}

bool TemplateGroupCollection::templateGroupListIsSet() const
{
    return templateGroupListIsSet_;
}

void TemplateGroupCollection::unsettemplateGroupList()
{
    templateGroupListIsSet_ = false;
}

}
}
}
}
}


