

#include "huaweicloud/live/v1/model/CreateFlowsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateFlowsRequestBody::CreateFlowsRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    sourcesIsSet_ = false;
}

CreateFlowsRequestBody::~CreateFlowsRequestBody() = default;

void CreateFlowsRequestBody::validate()
{
}

web::json::value CreateFlowsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }

    return val;
}
bool CreateFlowsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowSource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    return ok;
}


std::string CreateFlowsRequestBody::getName() const
{
    return name_;
}

void CreateFlowsRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateFlowsRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateFlowsRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateFlowsRequestBody::getRegion() const
{
    return region_;
}

void CreateFlowsRequestBody::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateFlowsRequestBody::regionIsSet() const
{
    return regionIsSet_;
}

void CreateFlowsRequestBody::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<FlowSource>& CreateFlowsRequestBody::getSources()
{
    return sources_;
}

void CreateFlowsRequestBody::setSources(const std::vector<FlowSource>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool CreateFlowsRequestBody::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void CreateFlowsRequestBody::unsetsources()
{
    sourcesIsSet_ = false;
}

}
}
}
}
}


