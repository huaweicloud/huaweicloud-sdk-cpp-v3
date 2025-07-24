

#include "huaweicloud/cloudtest/v1/model/SaveTemplateParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SaveTemplateParam::SaveTemplateParam()
{
    description_ = "";
    descriptionIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

SaveTemplateParam::~SaveTemplateParam() = default;

void SaveTemplateParam::validate()
{
}

web::json::value SaveTemplateParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool SaveTemplateParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mindmap_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmapId(refVal);
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
    return ok;
}


std::string SaveTemplateParam::getDescription() const
{
    return description_;
}

void SaveTemplateParam::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SaveTemplateParam::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SaveTemplateParam::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SaveTemplateParam::getMindmapId() const
{
    return mindmapId_;
}

void SaveTemplateParam::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool SaveTemplateParam::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void SaveTemplateParam::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string SaveTemplateParam::getName() const
{
    return name_;
}

void SaveTemplateParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SaveTemplateParam::nameIsSet() const
{
    return nameIsSet_;
}

void SaveTemplateParam::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


