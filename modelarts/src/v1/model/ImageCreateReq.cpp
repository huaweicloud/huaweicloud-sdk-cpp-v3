

#include "huaweicloud/modelarts/v1/model/ImageCreateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ImageCreateReq::ImageCreateReq()
{
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    swrInstanceId_ = "";
    swrInstanceIdIsSet_ = false;
    swrInstanceDomain_ = "";
    swrInstanceDomainIsSet_ = false;
}

ImageCreateReq::~ImageCreateReq() = default;

void ImageCreateReq::validate()
{
}

web::json::value ImageCreateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(swrInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("swr_instance_id")] = ModelBase::toJson(swrInstanceId_);
    }
    if(swrInstanceDomainIsSet_) {
        val[utility::conversions::to_string_t("swr_instance_domain")] = ModelBase::toJson(swrInstanceDomain_);
    }

    return val;
}
bool ImageCreateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swr_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swr_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwrInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swr_instance_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swr_instance_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwrInstanceDomain(refVal);
        }
    }
    return ok;
}


std::string ImageCreateReq::getDescription() const
{
    return description_;
}

void ImageCreateReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImageCreateReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImageCreateReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ImageCreateReq::getName() const
{
    return name_;
}

void ImageCreateReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ImageCreateReq::nameIsSet() const
{
    return nameIsSet_;
}

void ImageCreateReq::unsetname()
{
    nameIsSet_ = false;
}

std::string ImageCreateReq::getNamespace() const
{
    return namespace_;
}

void ImageCreateReq::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ImageCreateReq::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ImageCreateReq::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ImageCreateReq::getTag() const
{
    return tag_;
}

void ImageCreateReq::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ImageCreateReq::tagIsSet() const
{
    return tagIsSet_;
}

void ImageCreateReq::unsettag()
{
    tagIsSet_ = false;
}

std::string ImageCreateReq::getWorkspaceId() const
{
    return workspaceId_;
}

void ImageCreateReq::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ImageCreateReq::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ImageCreateReq::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ImageCreateReq::getSwrInstanceId() const
{
    return swrInstanceId_;
}

void ImageCreateReq::setSwrInstanceId(const std::string& value)
{
    swrInstanceId_ = value;
    swrInstanceIdIsSet_ = true;
}

bool ImageCreateReq::swrInstanceIdIsSet() const
{
    return swrInstanceIdIsSet_;
}

void ImageCreateReq::unsetswrInstanceId()
{
    swrInstanceIdIsSet_ = false;
}

std::string ImageCreateReq::getSwrInstanceDomain() const
{
    return swrInstanceDomain_;
}

void ImageCreateReq::setSwrInstanceDomain(const std::string& value)
{
    swrInstanceDomain_ = value;
    swrInstanceDomainIsSet_ = true;
}

bool ImageCreateReq::swrInstanceDomainIsSet() const
{
    return swrInstanceDomainIsSet_;
}

void ImageCreateReq::unsetswrInstanceDomain()
{
    swrInstanceDomainIsSet_ = false;
}

}
}
}
}
}


