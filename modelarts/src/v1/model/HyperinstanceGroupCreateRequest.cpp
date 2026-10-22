

#include "huaweicloud/modelarts/v1/model/HyperinstanceGroupCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HyperinstanceGroupCreateRequest::HyperinstanceGroupCreateRequest()
{
    name_ = "";
    nameIsSet_ = false;
    hyperinstanceClusterId_ = "";
    hyperinstanceClusterIdIsSet_ = false;
}

HyperinstanceGroupCreateRequest::~HyperinstanceGroupCreateRequest() = default;

void HyperinstanceGroupCreateRequest::validate()
{
}

web::json::value HyperinstanceGroupCreateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(hyperinstanceClusterIdIsSet_) {
        val[utility::conversions::to_string_t("hyperinstance_cluster_id")] = ModelBase::toJson(hyperinstanceClusterId_);
    }

    return val;
}
bool HyperinstanceGroupCreateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hyperinstance_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperinstance_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperinstanceClusterId(refVal);
        }
    }
    return ok;
}


std::string HyperinstanceGroupCreateRequest::getName() const
{
    return name_;
}

void HyperinstanceGroupCreateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HyperinstanceGroupCreateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void HyperinstanceGroupCreateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string HyperinstanceGroupCreateRequest::getHyperinstanceClusterId() const
{
    return hyperinstanceClusterId_;
}

void HyperinstanceGroupCreateRequest::setHyperinstanceClusterId(const std::string& value)
{
    hyperinstanceClusterId_ = value;
    hyperinstanceClusterIdIsSet_ = true;
}

bool HyperinstanceGroupCreateRequest::hyperinstanceClusterIdIsSet() const
{
    return hyperinstanceClusterIdIsSet_;
}

void HyperinstanceGroupCreateRequest::unsethyperinstanceClusterId()
{
    hyperinstanceClusterIdIsSet_ = false;
}

}
}
}
}
}


