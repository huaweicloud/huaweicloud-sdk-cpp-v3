

#include "huaweicloud/modelarts/v1/model/ServerHyperScaleUpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerHyperScaleUpRequest::ServerHyperScaleUpRequest()
{
    flavor_ = "";
    flavorIsSet_ = false;
    rootVolumeIsSet_ = false;
    dataVolumeIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    userdata_ = "";
    userdataIsSet_ = false;
    keyPairName_ = "";
    keyPairNameIsSet_ = false;
}

ServerHyperScaleUpRequest::~ServerHyperScaleUpRequest() = default;

void ServerHyperScaleUpRequest::validate()
{
}

web::json::value ServerHyperScaleUpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("root_volume")] = ModelBase::toJson(rootVolume_);
    }
    if(dataVolumeIsSet_) {
        val[utility::conversions::to_string_t("data_volume")] = ModelBase::toJson(dataVolume_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(userdataIsSet_) {
        val[utility::conversions::to_string_t("userdata")] = ModelBase::toJson(userdata_);
    }
    if(keyPairNameIsSet_) {
        val[utility::conversions::to_string_t("key_pair_name")] = ModelBase::toJson(keyPairName_);
    }

    return val;
}
bool ServerHyperScaleUpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_volume"));
        if(!fieldValue.is_null())
        {
            EvsVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_volume"));
        if(!fieldValue.is_null())
        {
            ServerDataVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolume(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("userdata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userdata"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserdata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_pair_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_pair_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyPairName(refVal);
        }
    }
    return ok;
}


std::string ServerHyperScaleUpRequest::getFlavor() const
{
    return flavor_;
}

void ServerHyperScaleUpRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ServerHyperScaleUpRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void ServerHyperScaleUpRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

EvsVolume ServerHyperScaleUpRequest::getRootVolume() const
{
    return rootVolume_;
}

void ServerHyperScaleUpRequest::setRootVolume(const EvsVolume& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool ServerHyperScaleUpRequest::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void ServerHyperScaleUpRequest::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

ServerDataVolume ServerHyperScaleUpRequest::getDataVolume() const
{
    return dataVolume_;
}

void ServerHyperScaleUpRequest::setDataVolume(const ServerDataVolume& value)
{
    dataVolume_ = value;
    dataVolumeIsSet_ = true;
}

bool ServerHyperScaleUpRequest::dataVolumeIsSet() const
{
    return dataVolumeIsSet_;
}

void ServerHyperScaleUpRequest::unsetdataVolume()
{
    dataVolumeIsSet_ = false;
}

std::string ServerHyperScaleUpRequest::getImageId() const
{
    return imageId_;
}

void ServerHyperScaleUpRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ServerHyperScaleUpRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ServerHyperScaleUpRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ServerHyperScaleUpRequest::getUserdata() const
{
    return userdata_;
}

void ServerHyperScaleUpRequest::setUserdata(const std::string& value)
{
    userdata_ = value;
    userdataIsSet_ = true;
}

bool ServerHyperScaleUpRequest::userdataIsSet() const
{
    return userdataIsSet_;
}

void ServerHyperScaleUpRequest::unsetuserdata()
{
    userdataIsSet_ = false;
}

std::string ServerHyperScaleUpRequest::getKeyPairName() const
{
    return keyPairName_;
}

void ServerHyperScaleUpRequest::setKeyPairName(const std::string& value)
{
    keyPairName_ = value;
    keyPairNameIsSet_ = true;
}

bool ServerHyperScaleUpRequest::keyPairNameIsSet() const
{
    return keyPairNameIsSet_;
}

void ServerHyperScaleUpRequest::unsetkeyPairName()
{
    keyPairNameIsSet_ = false;
}

}
}
}
}
}


