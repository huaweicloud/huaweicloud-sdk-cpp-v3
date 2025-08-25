

#include "huaweicloud/cce/v3/model/AddNodeList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddNodeList::AddNodeList()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    nodeListIsSet_ = false;
}

AddNodeList::~AddNodeList() = default;

void AddNodeList::validate()
{
}

web::json::value AddNodeList::toJson() const
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
bool AddNodeList::fromJson(const web::json::value& val)
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
            std::vector<AddNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::string AddNodeList::getApiVersion() const
{
    return apiVersion_;
}

void AddNodeList::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool AddNodeList::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void AddNodeList::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string AddNodeList::getKind() const
{
    return kind_;
}

void AddNodeList::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool AddNodeList::kindIsSet() const
{
    return kindIsSet_;
}

void AddNodeList::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<AddNode>& AddNodeList::getNodeList()
{
    return nodeList_;
}

void AddNodeList::setNodeList(const std::vector<AddNode>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool AddNodeList::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void AddNodeList::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


