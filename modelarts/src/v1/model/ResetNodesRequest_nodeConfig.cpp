

#include "huaweicloud/modelarts/v1/model/ResetNodesRequest_nodeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResetNodesRequest_nodeConfig::ResetNodesRequest_nodeConfig()
{
    os_ = "";
    osIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    imageType_ = "";
    imageTypeIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
}

ResetNodesRequest_nodeConfig::~ResetNodesRequest_nodeConfig() = default;

void ResetNodesRequest_nodeConfig::validate()
{
}

web::json::value ResetNodesRequest_nodeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("imageId")] = ModelBase::toJson(imageId_);
    }
    if(imageTypeIsSet_) {
        val[utility::conversions::to_string_t("imageType")] = ModelBase::toJson(imageType_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }

    return val;
}
bool ResetNodesRequest_nodeConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    return ok;
}


std::string ResetNodesRequest_nodeConfig::getOs() const
{
    return os_;
}

void ResetNodesRequest_nodeConfig::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool ResetNodesRequest_nodeConfig::osIsSet() const
{
    return osIsSet_;
}

void ResetNodesRequest_nodeConfig::unsetos()
{
    osIsSet_ = false;
}

std::string ResetNodesRequest_nodeConfig::getName() const
{
    return name_;
}

void ResetNodesRequest_nodeConfig::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResetNodesRequest_nodeConfig::nameIsSet() const
{
    return nameIsSet_;
}

void ResetNodesRequest_nodeConfig::unsetname()
{
    nameIsSet_ = false;
}

std::string ResetNodesRequest_nodeConfig::getImageId() const
{
    return imageId_;
}

void ResetNodesRequest_nodeConfig::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ResetNodesRequest_nodeConfig::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ResetNodesRequest_nodeConfig::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ResetNodesRequest_nodeConfig::getImageType() const
{
    return imageType_;
}

void ResetNodesRequest_nodeConfig::setImageType(const std::string& value)
{
    imageType_ = value;
    imageTypeIsSet_ = true;
}

bool ResetNodesRequest_nodeConfig::imageTypeIsSet() const
{
    return imageTypeIsSet_;
}

void ResetNodesRequest_nodeConfig::unsetimageType()
{
    imageTypeIsSet_ = false;
}

std::string ResetNodesRequest_nodeConfig::getRuntime() const
{
    return runtime_;
}

void ResetNodesRequest_nodeConfig::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ResetNodesRequest_nodeConfig::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ResetNodesRequest_nodeConfig::unsetruntime()
{
    runtimeIsSet_ = false;
}

}
}
}
}
}


