

#include "huaweicloud/cce/v3/model/ResetNodeList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResetNodeList::ResetNodeList()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    nodeListIsSet_ = false;
}

ResetNodeList::~ResetNodeList() = default;

void ResetNodeList::validate()
{
}

web::json::value ResetNodeList::toJson() const
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
bool ResetNodeList::fromJson(const web::json::value& val)
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
            std::vector<ResetNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::string ResetNodeList::getApiVersion() const
{
    return apiVersion_;
}

void ResetNodeList::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ResetNodeList::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ResetNodeList::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ResetNodeList::getKind() const
{
    return kind_;
}

void ResetNodeList::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ResetNodeList::kindIsSet() const
{
    return kindIsSet_;
}

void ResetNodeList::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<ResetNode>& ResetNodeList::getNodeList()
{
    return nodeList_;
}

void ResetNodeList::setNodeList(const std::vector<ResetNode>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool ResetNodeList::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void ResetNodeList::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


