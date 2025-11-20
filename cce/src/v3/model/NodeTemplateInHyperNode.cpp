

#include "huaweicloud/cce/v3/model/NodeTemplateInHyperNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeTemplateInHyperNode::NodeTemplateInHyperNode()
{
    az_ = "";
    azIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    loginIsSet_ = false;
    rootVolumeIsSet_ = false;
    dataVolumesIsSet_ = false;
    storageIsSet_ = false;
    k8sTagsIsSet_ = false;
    runtimeIsSet_ = false;
    extendParamIsSet_ = false;
    hostnameConfigIsSet_ = false;
}

NodeTemplateInHyperNode::~NodeTemplateInHyperNode() = default;

void NodeTemplateInHyperNode::validate()
{
}

web::json::value NodeTemplateInHyperNode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azIsSet_) {
        val[utility::conversions::to_string_t("az")] = ModelBase::toJson(az_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(loginIsSet_) {
        val[utility::conversions::to_string_t("login")] = ModelBase::toJson(login_);
    }
    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("rootVolume")] = ModelBase::toJson(rootVolume_);
    }
    if(dataVolumesIsSet_) {
        val[utility::conversions::to_string_t("dataVolumes")] = ModelBase::toJson(dataVolumes_);
    }
    if(storageIsSet_) {
        val[utility::conversions::to_string_t("storage")] = ModelBase::toJson(storage_);
    }
    if(k8sTagsIsSet_) {
        val[utility::conversions::to_string_t("k8sTags")] = ModelBase::toJson(k8sTags_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }
    if(hostnameConfigIsSet_) {
        val[utility::conversions::to_string_t("hostnameConfig")] = ModelBase::toJson(hostnameConfig_);
    }

    return val;
}
bool NodeTemplateInHyperNode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("login"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("login"));
        if(!fieldValue.is_null())
        {
            Login refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rootVolume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootVolume"));
        if(!fieldValue.is_null())
        {
            Volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataVolumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataVolumes"));
        if(!fieldValue.is_null())
        {
            std::vector<Volume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage"));
        if(!fieldValue.is_null())
        {
            Storage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("k8sTags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("k8sTags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setK8sTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            Runtime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            NodeExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostnameConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostnameConfig"));
        if(!fieldValue.is_null())
        {
            HostnameConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostnameConfig(refVal);
        }
    }
    return ok;
}


std::string NodeTemplateInHyperNode::getAz() const
{
    return az_;
}

void NodeTemplateInHyperNode::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool NodeTemplateInHyperNode::azIsSet() const
{
    return azIsSet_;
}

void NodeTemplateInHyperNode::unsetaz()
{
    azIsSet_ = false;
}

std::string NodeTemplateInHyperNode::getOs() const
{
    return os_;
}

void NodeTemplateInHyperNode::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool NodeTemplateInHyperNode::osIsSet() const
{
    return osIsSet_;
}

void NodeTemplateInHyperNode::unsetos()
{
    osIsSet_ = false;
}

Login NodeTemplateInHyperNode::getLogin() const
{
    return login_;
}

void NodeTemplateInHyperNode::setLogin(const Login& value)
{
    login_ = value;
    loginIsSet_ = true;
}

bool NodeTemplateInHyperNode::loginIsSet() const
{
    return loginIsSet_;
}

void NodeTemplateInHyperNode::unsetlogin()
{
    loginIsSet_ = false;
}

Volume NodeTemplateInHyperNode::getRootVolume() const
{
    return rootVolume_;
}

void NodeTemplateInHyperNode::setRootVolume(const Volume& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool NodeTemplateInHyperNode::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void NodeTemplateInHyperNode::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

std::vector<Volume>& NodeTemplateInHyperNode::getDataVolumes()
{
    return dataVolumes_;
}

void NodeTemplateInHyperNode::setDataVolumes(const std::vector<Volume>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool NodeTemplateInHyperNode::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void NodeTemplateInHyperNode::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

Storage NodeTemplateInHyperNode::getStorage() const
{
    return storage_;
}

void NodeTemplateInHyperNode::setStorage(const Storage& value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool NodeTemplateInHyperNode::storageIsSet() const
{
    return storageIsSet_;
}

void NodeTemplateInHyperNode::unsetstorage()
{
    storageIsSet_ = false;
}

std::map<std::string, std::string>& NodeTemplateInHyperNode::getK8sTags()
{
    return k8sTags_;
}

void NodeTemplateInHyperNode::setK8sTags(const std::map<std::string, std::string>& value)
{
    k8sTags_ = value;
    k8sTagsIsSet_ = true;
}

bool NodeTemplateInHyperNode::k8sTagsIsSet() const
{
    return k8sTagsIsSet_;
}

void NodeTemplateInHyperNode::unsetk8sTags()
{
    k8sTagsIsSet_ = false;
}

Runtime NodeTemplateInHyperNode::getRuntime() const
{
    return runtime_;
}

void NodeTemplateInHyperNode::setRuntime(const Runtime& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool NodeTemplateInHyperNode::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void NodeTemplateInHyperNode::unsetruntime()
{
    runtimeIsSet_ = false;
}

NodeExtendParam NodeTemplateInHyperNode::getExtendParam() const
{
    return extendParam_;
}

void NodeTemplateInHyperNode::setExtendParam(const NodeExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool NodeTemplateInHyperNode::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void NodeTemplateInHyperNode::unsetextendParam()
{
    extendParamIsSet_ = false;
}

HostnameConfig NodeTemplateInHyperNode::getHostnameConfig() const
{
    return hostnameConfig_;
}

void NodeTemplateInHyperNode::setHostnameConfig(const HostnameConfig& value)
{
    hostnameConfig_ = value;
    hostnameConfigIsSet_ = true;
}

bool NodeTemplateInHyperNode::hostnameConfigIsSet() const
{
    return hostnameConfigIsSet_;
}

void NodeTemplateInHyperNode::unsethostnameConfig()
{
    hostnameConfigIsSet_ = false;
}

}
}
}
}
}


