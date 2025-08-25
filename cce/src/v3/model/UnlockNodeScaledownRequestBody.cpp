

#include "huaweicloud/cce/v3/model/UnlockNodeScaledownRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UnlockNodeScaledownRequestBody::UnlockNodeScaledownRequestBody()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    nodeListIsSet_ = false;
}

UnlockNodeScaledownRequestBody::~UnlockNodeScaledownRequestBody() = default;

void UnlockNodeScaledownRequestBody::validate()
{
}

web::json::value UnlockNodeScaledownRequestBody::toJson() const
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
bool UnlockNodeScaledownRequestBody::fromJson(const web::json::value& val)
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


std::string UnlockNodeScaledownRequestBody::getApiVersion() const
{
    return apiVersion_;
}

void UnlockNodeScaledownRequestBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UnlockNodeScaledownRequestBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UnlockNodeScaledownRequestBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string UnlockNodeScaledownRequestBody::getKind() const
{
    return kind_;
}

void UnlockNodeScaledownRequestBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UnlockNodeScaledownRequestBody::kindIsSet() const
{
    return kindIsSet_;
}

void UnlockNodeScaledownRequestBody::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<std::string>& UnlockNodeScaledownRequestBody::getNodeList()
{
    return nodeList_;
}

void UnlockNodeScaledownRequestBody::setNodeList(const std::vector<std::string>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool UnlockNodeScaledownRequestBody::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void UnlockNodeScaledownRequestBody::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


