

#include "huaweicloud/cce/v3/model/BatchChangeNodeToPeriodReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchChangeNodeToPeriodReqBody::BatchChangeNodeToPeriodReqBody()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    nodeListIsSet_ = false;
    periodOrderParamIsSet_ = false;
    includeResourcesIsSet_ = false;
}

BatchChangeNodeToPeriodReqBody::~BatchChangeNodeToPeriodReqBody() = default;

void BatchChangeNodeToPeriodReqBody::validate()
{
}

web::json::value BatchChangeNodeToPeriodReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(nodeListIsSet_) {
        val[utility::conversions::to_string_t("nodeList")] = ModelBase::toJson(nodeList_);
    }
    if(periodOrderParamIsSet_) {
        val[utility::conversions::to_string_t("periodOrderParam")] = ModelBase::toJson(periodOrderParam_);
    }
    if(includeResourcesIsSet_) {
        val[utility::conversions::to_string_t("includeResources")] = ModelBase::toJson(includeResources_);
    }

    return val;
}
bool BatchChangeNodeToPeriodReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("periodOrderParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodOrderParam"));
        if(!fieldValue.is_null())
        {
            PeriodOrderParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodOrderParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeResources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includeResources"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeResources(refVal);
        }
    }
    return ok;
}


std::string BatchChangeNodeToPeriodReqBody::getKind() const
{
    return kind_;
}

void BatchChangeNodeToPeriodReqBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool BatchChangeNodeToPeriodReqBody::kindIsSet() const
{
    return kindIsSet_;
}

void BatchChangeNodeToPeriodReqBody::unsetkind()
{
    kindIsSet_ = false;
}

std::string BatchChangeNodeToPeriodReqBody::getApiVersion() const
{
    return apiVersion_;
}

void BatchChangeNodeToPeriodReqBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool BatchChangeNodeToPeriodReqBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void BatchChangeNodeToPeriodReqBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<std::string>& BatchChangeNodeToPeriodReqBody::getNodeList()
{
    return nodeList_;
}

void BatchChangeNodeToPeriodReqBody::setNodeList(const std::vector<std::string>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool BatchChangeNodeToPeriodReqBody::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void BatchChangeNodeToPeriodReqBody::unsetnodeList()
{
    nodeListIsSet_ = false;
}

PeriodOrderParam BatchChangeNodeToPeriodReqBody::getPeriodOrderParam() const
{
    return periodOrderParam_;
}

void BatchChangeNodeToPeriodReqBody::setPeriodOrderParam(const PeriodOrderParam& value)
{
    periodOrderParam_ = value;
    periodOrderParamIsSet_ = true;
}

bool BatchChangeNodeToPeriodReqBody::periodOrderParamIsSet() const
{
    return periodOrderParamIsSet_;
}

void BatchChangeNodeToPeriodReqBody::unsetperiodOrderParam()
{
    periodOrderParamIsSet_ = false;
}

std::vector<std::string>& BatchChangeNodeToPeriodReqBody::getIncludeResources()
{
    return includeResources_;
}

void BatchChangeNodeToPeriodReqBody::setIncludeResources(const std::vector<std::string>& value)
{
    includeResources_ = value;
    includeResourcesIsSet_ = true;
}

bool BatchChangeNodeToPeriodReqBody::includeResourcesIsSet() const
{
    return includeResourcesIsSet_;
}

void BatchChangeNodeToPeriodReqBody::unsetincludeResources()
{
    includeResourcesIsSet_ = false;
}

}
}
}
}
}


