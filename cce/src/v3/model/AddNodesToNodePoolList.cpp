

#include "huaweicloud/cce/v3/model/AddNodesToNodePoolList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddNodesToNodePoolList::AddNodesToNodePoolList()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    nodeListIsSet_ = false;
}

AddNodesToNodePoolList::~AddNodesToNodePoolList() = default;

void AddNodesToNodePoolList::validate()
{
}

web::json::value AddNodesToNodePoolList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(nodeListIsSet_) {
        val[utility::conversions::to_string_t("nodeList")] = ModelBase::toJson(nodeList_);
    }

    return val;
}
bool AddNodesToNodePoolList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeList"));
        if(!fieldValue.is_null())
        {
            std::vector<AddNodesToNodePool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::string AddNodesToNodePoolList::getApiVersion() const
{
    return apiVersion_;
}

void AddNodesToNodePoolList::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool AddNodesToNodePoolList::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void AddNodesToNodePoolList::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string AddNodesToNodePoolList::getKind() const
{
    return kind_;
}

void AddNodesToNodePoolList::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool AddNodesToNodePoolList::kindIsSet() const
{
    return kindIsSet_;
}

void AddNodesToNodePoolList::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<AddNodesToNodePool>& AddNodesToNodePoolList::getNodeList()
{
    return nodeList_;
}

void AddNodesToNodePoolList::setNodeList(const std::vector<AddNodesToNodePool>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool AddNodesToNodePoolList::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void AddNodesToNodePoolList::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


