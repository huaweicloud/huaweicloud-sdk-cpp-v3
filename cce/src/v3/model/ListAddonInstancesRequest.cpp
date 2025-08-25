

#include "huaweicloud/cce/v3/model/ListAddonInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAddonInstancesRequest::ListAddonInstancesRequest()
{
    addonTemplateName_ = "";
    addonTemplateNameIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListAddonInstancesRequest::~ListAddonInstancesRequest() = default;

void ListAddonInstancesRequest::validate()
{
}

web::json::value ListAddonInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addonTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("addon_template_name")] = ModelBase::toJson(addonTemplateName_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListAddonInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addon_template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addon_template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    return ok;
}


std::string ListAddonInstancesRequest::getAddonTemplateName() const
{
    return addonTemplateName_;
}

void ListAddonInstancesRequest::setAddonTemplateName(const std::string& value)
{
    addonTemplateName_ = value;
    addonTemplateNameIsSet_ = true;
}

bool ListAddonInstancesRequest::addonTemplateNameIsSet() const
{
    return addonTemplateNameIsSet_;
}

void ListAddonInstancesRequest::unsetaddonTemplateName()
{
    addonTemplateNameIsSet_ = false;
}

std::string ListAddonInstancesRequest::getClusterId() const
{
    return clusterId_;
}

void ListAddonInstancesRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAddonInstancesRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAddonInstancesRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


