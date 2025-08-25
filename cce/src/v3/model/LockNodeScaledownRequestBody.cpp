

#include "huaweicloud/cce/v3/model/LockNodeScaledownRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




LockNodeScaledownRequestBody::LockNodeScaledownRequestBody()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    nodeListIsSet_ = false;
}

LockNodeScaledownRequestBody::~LockNodeScaledownRequestBody() = default;

void LockNodeScaledownRequestBody::validate()
{
}

web::json::value LockNodeScaledownRequestBody::toJson() const
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
bool LockNodeScaledownRequestBody::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::string LockNodeScaledownRequestBody::getApiVersion() const
{
    return apiVersion_;
}

void LockNodeScaledownRequestBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool LockNodeScaledownRequestBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void LockNodeScaledownRequestBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string LockNodeScaledownRequestBody::getKind() const
{
    return kind_;
}

void LockNodeScaledownRequestBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool LockNodeScaledownRequestBody::kindIsSet() const
{
    return kindIsSet_;
}

void LockNodeScaledownRequestBody::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<std::string>& LockNodeScaledownRequestBody::getNodeList()
{
    return nodeList_;
}

void LockNodeScaledownRequestBody::setNodeList(const std::vector<std::string>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool LockNodeScaledownRequestBody::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void LockNodeScaledownRequestBody::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


