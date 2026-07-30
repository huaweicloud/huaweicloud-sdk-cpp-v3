

#include "huaweicloud/modelarts/v1/model/NotebookUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NotebookUpdateRequest::NotebookUpdateRequest()
{
    description_ = "";
    descriptionIsSet_ = false;
    endpointsIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    customSpecIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    storageNewSize_ = 0;
    storageNewSizeIsSet_ = false;
    hooksIsSet_ = false;
    affinityIsSet_ = false;
    dewSecretName_ = "";
    dewSecretNameIsSet_ = false;
    dataVolumesIsSet_ = false;
}

NotebookUpdateRequest::~NotebookUpdateRequest() = default;

void NotebookUpdateRequest::validate()
{
}

web::json::value NotebookUpdateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(customSpecIsSet_) {
        val[utility::conversions::to_string_t("custom_spec")] = ModelBase::toJson(customSpec_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(storageNewSizeIsSet_) {
        val[utility::conversions::to_string_t("storage_new_size")] = ModelBase::toJson(storageNewSize_);
    }
    if(hooksIsSet_) {
        val[utility::conversions::to_string_t("hooks")] = ModelBase::toJson(hooks_);
    }
    if(affinityIsSet_) {
        val[utility::conversions::to_string_t("affinity")] = ModelBase::toJson(affinity_);
    }
    if(dewSecretNameIsSet_) {
        val[utility::conversions::to_string_t("dew_secret_name")] = ModelBase::toJson(dewSecretName_);
    }
    if(dataVolumesIsSet_) {
        val[utility::conversions::to_string_t("data_volumes")] = ModelBase::toJson(dataVolumes_);
    }

    return val;
}
bool NotebookUpdateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<EndpointsReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_spec"));
        if(!fieldValue.is_null())
        {
            NotebookCustomSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("storage_new_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_new_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageNewSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hooks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hooks"));
        if(!fieldValue.is_null())
        {
            CustomHooks refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHooks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affinity"));
        if(!fieldValue.is_null())
        {
            AffinityType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffinity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dew_secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dew_secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDewSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeMountRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    return ok;
}


std::string NotebookUpdateRequest::getDescription() const
{
    return description_;
}

void NotebookUpdateRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NotebookUpdateRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NotebookUpdateRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<EndpointsReq>& NotebookUpdateRequest::getEndpoints()
{
    return endpoints_;
}

void NotebookUpdateRequest::setEndpoints(const std::vector<EndpointsReq>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool NotebookUpdateRequest::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void NotebookUpdateRequest::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string NotebookUpdateRequest::getFlavor() const
{
    return flavor_;
}

void NotebookUpdateRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NotebookUpdateRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void NotebookUpdateRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

NotebookCustomSpec NotebookUpdateRequest::getCustomSpec() const
{
    return customSpec_;
}

void NotebookUpdateRequest::setCustomSpec(const NotebookCustomSpec& value)
{
    customSpec_ = value;
    customSpecIsSet_ = true;
}

bool NotebookUpdateRequest::customSpecIsSet() const
{
    return customSpecIsSet_;
}

void NotebookUpdateRequest::unsetcustomSpec()
{
    customSpecIsSet_ = false;
}

std::string NotebookUpdateRequest::getImageId() const
{
    return imageId_;
}

void NotebookUpdateRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool NotebookUpdateRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void NotebookUpdateRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string NotebookUpdateRequest::getName() const
{
    return name_;
}

void NotebookUpdateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NotebookUpdateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NotebookUpdateRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t NotebookUpdateRequest::getStorageNewSize() const
{
    return storageNewSize_;
}

void NotebookUpdateRequest::setStorageNewSize(int32_t value)
{
    storageNewSize_ = value;
    storageNewSizeIsSet_ = true;
}

bool NotebookUpdateRequest::storageNewSizeIsSet() const
{
    return storageNewSizeIsSet_;
}

void NotebookUpdateRequest::unsetstorageNewSize()
{
    storageNewSizeIsSet_ = false;
}

CustomHooks NotebookUpdateRequest::getHooks() const
{
    return hooks_;
}

void NotebookUpdateRequest::setHooks(const CustomHooks& value)
{
    hooks_ = value;
    hooksIsSet_ = true;
}

bool NotebookUpdateRequest::hooksIsSet() const
{
    return hooksIsSet_;
}

void NotebookUpdateRequest::unsethooks()
{
    hooksIsSet_ = false;
}

AffinityType NotebookUpdateRequest::getAffinity() const
{
    return affinity_;
}

void NotebookUpdateRequest::setAffinity(const AffinityType& value)
{
    affinity_ = value;
    affinityIsSet_ = true;
}

bool NotebookUpdateRequest::affinityIsSet() const
{
    return affinityIsSet_;
}

void NotebookUpdateRequest::unsetaffinity()
{
    affinityIsSet_ = false;
}

std::string NotebookUpdateRequest::getDewSecretName() const
{
    return dewSecretName_;
}

void NotebookUpdateRequest::setDewSecretName(const std::string& value)
{
    dewSecretName_ = value;
    dewSecretNameIsSet_ = true;
}

bool NotebookUpdateRequest::dewSecretNameIsSet() const
{
    return dewSecretNameIsSet_;
}

void NotebookUpdateRequest::unsetdewSecretName()
{
    dewSecretNameIsSet_ = false;
}

std::vector<VolumeMountRequest>& NotebookUpdateRequest::getDataVolumes()
{
    return dataVolumes_;
}

void NotebookUpdateRequest::setDataVolumes(const std::vector<VolumeMountRequest>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool NotebookUpdateRequest::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void NotebookUpdateRequest::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

}
}
}
}
}


