

#include "huaweicloud/cce/v3/model/MigrateNodesToNodePoolList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateNodesToNodePoolList::MigrateNodesToNodePoolList()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    nodeListIsSet_ = false;
}

MigrateNodesToNodePoolList::~MigrateNodesToNodePoolList() = default;

void MigrateNodesToNodePoolList::validate()
{
}

web::json::value MigrateNodesToNodePoolList::toJson() const
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
bool MigrateNodesToNodePoolList::fromJson(const web::json::value& val)
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
            std::vector<MigrateNodesToNodePool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::string MigrateNodesToNodePoolList::getApiVersion() const
{
    return apiVersion_;
}

void MigrateNodesToNodePoolList::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool MigrateNodesToNodePoolList::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void MigrateNodesToNodePoolList::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string MigrateNodesToNodePoolList::getKind() const
{
    return kind_;
}

void MigrateNodesToNodePoolList::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool MigrateNodesToNodePoolList::kindIsSet() const
{
    return kindIsSet_;
}

void MigrateNodesToNodePoolList::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<MigrateNodesToNodePool>& MigrateNodesToNodePoolList::getNodeList()
{
    return nodeList_;
}

void MigrateNodesToNodePoolList::setNodeList(const std::vector<MigrateNodesToNodePool>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool MigrateNodesToNodePoolList::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void MigrateNodesToNodePoolList::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


