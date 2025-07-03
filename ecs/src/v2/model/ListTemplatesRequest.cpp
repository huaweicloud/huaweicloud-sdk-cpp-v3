

#include "huaweicloud/ecs/v2/model/ListTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListTemplatesRequest::ListTemplatesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    launchTemplateIdIsSet_ = false;
    nameIsSet_ = false;
}

ListTemplatesRequest::~ListTemplatesRequest() = default;

void ListTemplatesRequest::validate()
{
}

web::json::value ListTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(launchTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("launch_template_id")] = ModelBase::toJson(launchTemplateId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("launch_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("launch_template_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaunchTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


int32_t ListTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTemplatesRequest::getMarker() const
{
    return marker_;
}

void ListTemplatesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListTemplatesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListTemplatesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::vector<std::string>& ListTemplatesRequest::getLaunchTemplateId()
{
    return launchTemplateId_;
}

void ListTemplatesRequest::setLaunchTemplateId(const std::vector<std::string>& value)
{
    launchTemplateId_ = value;
    launchTemplateIdIsSet_ = true;
}

bool ListTemplatesRequest::launchTemplateIdIsSet() const
{
    return launchTemplateIdIsSet_;
}

void ListTemplatesRequest::unsetlaunchTemplateId()
{
    launchTemplateIdIsSet_ = false;
}

std::vector<std::string>& ListTemplatesRequest::getName()
{
    return name_;
}

void ListTemplatesRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTemplatesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListTemplatesRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


