

#include "huaweicloud/modelarts/v1/model/HyperClusterCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HyperClusterCreateRequest::HyperClusterCreateRequest()
{
    name_ = "";
    nameIsSet_ = false;
    hyperClusterSubnetId_ = "";
    hyperClusterSubnetIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

HyperClusterCreateRequest::~HyperClusterCreateRequest() = default;

void HyperClusterCreateRequest::validate()
{
}

web::json::value HyperClusterCreateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(hyperClusterSubnetIdIsSet_) {
        val[utility::conversions::to_string_t("hyper_cluster_subnet_id")] = ModelBase::toJson(hyperClusterSubnetId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool HyperClusterCreateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hyper_cluster_subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyper_cluster_subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperClusterSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string HyperClusterCreateRequest::getName() const
{
    return name_;
}

void HyperClusterCreateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HyperClusterCreateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void HyperClusterCreateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string HyperClusterCreateRequest::getHyperClusterSubnetId() const
{
    return hyperClusterSubnetId_;
}

void HyperClusterCreateRequest::setHyperClusterSubnetId(const std::string& value)
{
    hyperClusterSubnetId_ = value;
    hyperClusterSubnetIdIsSet_ = true;
}

bool HyperClusterCreateRequest::hyperClusterSubnetIdIsSet() const
{
    return hyperClusterSubnetIdIsSet_;
}

void HyperClusterCreateRequest::unsethyperClusterSubnetId()
{
    hyperClusterSubnetIdIsSet_ = false;
}

std::string HyperClusterCreateRequest::getType() const
{
    return type_;
}

void HyperClusterCreateRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HyperClusterCreateRequest::typeIsSet() const
{
    return typeIsSet_;
}

void HyperClusterCreateRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


