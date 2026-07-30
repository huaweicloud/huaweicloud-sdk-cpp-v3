

#include "huaweicloud/modelarts/v1/model/ImageGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ImageGroup::ImageGroup()
{
    name_ = "";
    nameIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    versionCount_ = 0;
    versionCountIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    readMe_ = "";
    readMeIsSet_ = false;
    iconName_ = "";
    iconNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    swrInstanceName_ = "";
    swrInstanceNameIsSet_ = false;
    swrInstanceId_ = "";
    swrInstanceIdIsSet_ = false;
}

ImageGroup::~ImageGroup() = default;

void ImageGroup::validate()
{
}

web::json::value ImageGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(versionCountIsSet_) {
        val[utility::conversions::to_string_t("version_count")] = ModelBase::toJson(versionCount_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(readMeIsSet_) {
        val[utility::conversions::to_string_t("read_me")] = ModelBase::toJson(readMe_);
    }
    if(iconNameIsSet_) {
        val[utility::conversions::to_string_t("icon_name")] = ModelBase::toJson(iconName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(swrInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("swr_instance_name")] = ModelBase::toJson(swrInstanceName_);
    }
    if(swrInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("swr_instance_id")] = ModelBase::toJson(swrInstanceId_);
    }

    return val;
}
bool ImageGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_me"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_me"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadMe(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIconName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swr_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swr_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwrInstanceName(refVal);
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
    return ok;
}


std::string ImageGroup::getName() const
{
    return name_;
}

void ImageGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ImageGroup::nameIsSet() const
{
    return nameIsSet_;
}

void ImageGroup::unsetname()
{
    nameIsSet_ = false;
}

int64_t ImageGroup::getCreateAt() const
{
    return createAt_;
}

void ImageGroup::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ImageGroup::createAtIsSet() const
{
    return createAtIsSet_;
}

void ImageGroup::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ImageGroup::getNamespace() const
{
    return namespace_;
}

void ImageGroup::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ImageGroup::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ImageGroup::unsetnamespace()
{
    namespaceIsSet_ = false;
}

int64_t ImageGroup::getUpdateAt() const
{
    return updateAt_;
}

void ImageGroup::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ImageGroup::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ImageGroup::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

int32_t ImageGroup::getVersionCount() const
{
    return versionCount_;
}

void ImageGroup::setVersionCount(int32_t value)
{
    versionCount_ = value;
    versionCountIsSet_ = true;
}

bool ImageGroup::versionCountIsSet() const
{
    return versionCountIsSet_;
}

void ImageGroup::unsetversionCount()
{
    versionCountIsSet_ = false;
}

std::string ImageGroup::getDescription() const
{
    return description_;
}

void ImageGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImageGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImageGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ImageGroup::getReadMe() const
{
    return readMe_;
}

void ImageGroup::setReadMe(const std::string& value)
{
    readMe_ = value;
    readMeIsSet_ = true;
}

bool ImageGroup::readMeIsSet() const
{
    return readMeIsSet_;
}

void ImageGroup::unsetreadMe()
{
    readMeIsSet_ = false;
}

std::string ImageGroup::getIconName() const
{
    return iconName_;
}

void ImageGroup::setIconName(const std::string& value)
{
    iconName_ = value;
    iconNameIsSet_ = true;
}

bool ImageGroup::iconNameIsSet() const
{
    return iconNameIsSet_;
}

void ImageGroup::unseticonName()
{
    iconNameIsSet_ = false;
}

std::string ImageGroup::getId() const
{
    return id_;
}

void ImageGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ImageGroup::idIsSet() const
{
    return idIsSet_;
}

void ImageGroup::unsetid()
{
    idIsSet_ = false;
}

std::string ImageGroup::getSwrInstanceName() const
{
    return swrInstanceName_;
}

void ImageGroup::setSwrInstanceName(const std::string& value)
{
    swrInstanceName_ = value;
    swrInstanceNameIsSet_ = true;
}

bool ImageGroup::swrInstanceNameIsSet() const
{
    return swrInstanceNameIsSet_;
}

void ImageGroup::unsetswrInstanceName()
{
    swrInstanceNameIsSet_ = false;
}

std::string ImageGroup::getSwrInstanceId() const
{
    return swrInstanceId_;
}

void ImageGroup::setSwrInstanceId(const std::string& value)
{
    swrInstanceId_ = value;
    swrInstanceIdIsSet_ = true;
}

bool ImageGroup::swrInstanceIdIsSet() const
{
    return swrInstanceIdIsSet_;
}

void ImageGroup::unsetswrInstanceId()
{
    swrInstanceIdIsSet_ = false;
}

}
}
}
}
}


