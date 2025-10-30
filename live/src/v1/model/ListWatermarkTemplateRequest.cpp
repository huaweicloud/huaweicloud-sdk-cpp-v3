

#include "huaweicloud/live/v1/model/ListWatermarkTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListWatermarkTemplateRequest::ListWatermarkTemplateRequest()
{
    name_ = "";
    nameIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListWatermarkTemplateRequest::~ListWatermarkTemplateRequest() = default;

void ListWatermarkTemplateRequest::validate()
{
}

web::json::value ListWatermarkTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListWatermarkTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListWatermarkTemplateRequest::getName() const
{
    return name_;
}

void ListWatermarkTemplateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListWatermarkTemplateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListWatermarkTemplateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListWatermarkTemplateRequest::getScene() const
{
    return scene_;
}

void ListWatermarkTemplateRequest::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ListWatermarkTemplateRequest::sceneIsSet() const
{
    return sceneIsSet_;
}

void ListWatermarkTemplateRequest::unsetscene()
{
    sceneIsSet_ = false;
}

int32_t ListWatermarkTemplateRequest::getOffset() const
{
    return offset_;
}

void ListWatermarkTemplateRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWatermarkTemplateRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWatermarkTemplateRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWatermarkTemplateRequest::getLimit() const
{
    return limit_;
}

void ListWatermarkTemplateRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWatermarkTemplateRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWatermarkTemplateRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


