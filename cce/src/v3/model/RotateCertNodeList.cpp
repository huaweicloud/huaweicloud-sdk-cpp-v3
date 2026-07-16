

#include "huaweicloud/cce/v3/model/RotateCertNodeList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RotateCertNodeList::RotateCertNodeList()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    nodeListIsSet_ = false;
}

RotateCertNodeList::~RotateCertNodeList() = default;

void RotateCertNodeList::validate()
{
}

web::json::value RotateCertNodeList::toJson() const
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
bool RotateCertNodeList::fromJson(const web::json::value& val)
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
            std::vector<RotateCertNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::string RotateCertNodeList::getApiVersion() const
{
    return apiVersion_;
}

void RotateCertNodeList::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool RotateCertNodeList::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void RotateCertNodeList::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string RotateCertNodeList::getKind() const
{
    return kind_;
}

void RotateCertNodeList::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool RotateCertNodeList::kindIsSet() const
{
    return kindIsSet_;
}

void RotateCertNodeList::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<RotateCertNode>& RotateCertNodeList::getNodeList()
{
    return nodeList_;
}

void RotateCertNodeList::setNodeList(const std::vector<RotateCertNode>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool RotateCertNodeList::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void RotateCertNodeList::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


