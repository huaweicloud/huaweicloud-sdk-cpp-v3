

#include "huaweicloud/vod/v1/model/TransTemplateGroupCollection.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TransTemplateGroupCollection::TransTemplateGroupCollection()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    templateGroupListIsSet_ = false;
}

TransTemplateGroupCollection::~TransTemplateGroupCollection() = default;

void TransTemplateGroupCollection::validate()
{
}

web::json::value TransTemplateGroupCollection::toJson() const
{
    web::json::value val = web::json::value::object();

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

bool TransTemplateGroupCollection::fromJson(const web::json::value& val)
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

std::string TransTemplateGroupCollection::getName() const
{
    return name_;
}

void TransTemplateGroupCollection::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TransTemplateGroupCollection::nameIsSet() const
{
    return nameIsSet_;
}

void TransTemplateGroupCollection::unsetname()
{
    nameIsSet_ = false;
}

std::string TransTemplateGroupCollection::getDescription() const
{
    return description_;
}

void TransTemplateGroupCollection::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TransTemplateGroupCollection::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TransTemplateGroupCollection::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& TransTemplateGroupCollection::getTemplateGroupList()
{
    return templateGroupList_;
}

void TransTemplateGroupCollection::setTemplateGroupList(const std::vector<std::string>& value)
{
    templateGroupList_ = value;
    templateGroupListIsSet_ = true;
}

bool TransTemplateGroupCollection::templateGroupListIsSet() const
{
    return templateGroupListIsSet_;
}

void TransTemplateGroupCollection::unsettemplateGroupList()
{
    templateGroupListIsSet_ = false;
}

}
}
}
}
}


