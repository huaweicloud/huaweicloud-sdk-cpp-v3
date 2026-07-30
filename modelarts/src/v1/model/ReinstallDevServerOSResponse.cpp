

#include "huaweicloud/modelarts/v1/model/ReinstallDevServerOSResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ReinstallDevServerOSResponse::ReinstallDevServerOSResponse()
{
    createAt_ = 0L;
    createAtIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    cloudServerIsSet_ = false;
    endpointsResponseIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    keyPairName_ = "";
    keyPairNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    endpointsIsSet_ = false;
    volumesIsSet_ = false;
    imageIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    serverHpsIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ReinstallDevServerOSResponse::~ReinstallDevServerOSResponse() = default;

void ReinstallDevServerOSResponse::validate()
{
}

web::json::value ReinstallDevServerOSResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(cloudServerIsSet_) {
        val[utility::conversions::to_string_t("cloud_server")] = ModelBase::toJson(cloudServer_);
    }
    if(endpointsResponseIsSet_) {
        val[utility::conversions::to_string_t("endpoints_response")] = ModelBase::toJson(endpointsResponse_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(keyPairNameIsSet_) {
        val[utility::conversions::to_string_t("key_pair_name")] = ModelBase::toJson(keyPairName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(volumesIsSet_) {
        val[utility::conversions::to_string_t("volumes")] = ModelBase::toJson(volumes_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(serverHpsIsSet_) {
        val[utility::conversions::to_string_t("server_hps")] = ModelBase::toJson(serverHps_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ReinstallDevServerOSResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_server"));
        if(!fieldValue.is_null())
        {
            CloudServer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints_response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints_response"));
        if(!fieldValue.is_null())
        {
            std::vector<Endpoints> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointsResponse(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<EndpointsRes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerVolume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            ServerImageResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_hps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_hps"));
        if(!fieldValue.is_null())
        {
            ServerHpsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerHps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int64_t ReinstallDevServerOSResponse::getCreateAt() const
{
    return createAt_;
}

void ReinstallDevServerOSResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ReinstallDevServerOSResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ReinstallDevServerOSResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t ReinstallDevServerOSResponse::getUpdateAt() const
{
    return updateAt_;
}

void ReinstallDevServerOSResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ReinstallDevServerOSResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ReinstallDevServerOSResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getChargingMode() const
{
    return chargingMode_;
}

void ReinstallDevServerOSResponse::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ReinstallDevServerOSResponse::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ReinstallDevServerOSResponse::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

CloudServer ReinstallDevServerOSResponse::getCloudServer() const
{
    return cloudServer_;
}

void ReinstallDevServerOSResponse::setCloudServer(const CloudServer& value)
{
    cloudServer_ = value;
    cloudServerIsSet_ = true;
}

bool ReinstallDevServerOSResponse::cloudServerIsSet() const
{
    return cloudServerIsSet_;
}

void ReinstallDevServerOSResponse::unsetcloudServer()
{
    cloudServerIsSet_ = false;
}

std::vector<Endpoints>& ReinstallDevServerOSResponse::getEndpointsResponse()
{
    return endpointsResponse_;
}

void ReinstallDevServerOSResponse::setEndpointsResponse(const std::vector<Endpoints>& value)
{
    endpointsResponse_ = value;
    endpointsResponseIsSet_ = true;
}

bool ReinstallDevServerOSResponse::endpointsResponseIsSet() const
{
    return endpointsResponseIsSet_;
}

void ReinstallDevServerOSResponse::unsetendpointsResponse()
{
    endpointsResponseIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getFlavor() const
{
    return flavor_;
}

void ReinstallDevServerOSResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ReinstallDevServerOSResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void ReinstallDevServerOSResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getId() const
{
    return id_;
}

void ReinstallDevServerOSResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReinstallDevServerOSResponse::idIsSet() const
{
    return idIsSet_;
}

void ReinstallDevServerOSResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getKeyPairName() const
{
    return keyPairName_;
}

void ReinstallDevServerOSResponse::setKeyPairName(const std::string& value)
{
    keyPairName_ = value;
    keyPairNameIsSet_ = true;
}

bool ReinstallDevServerOSResponse::keyPairNameIsSet() const
{
    return keyPairNameIsSet_;
}

void ReinstallDevServerOSResponse::unsetkeyPairName()
{
    keyPairNameIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getName() const
{
    return name_;
}

void ReinstallDevServerOSResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReinstallDevServerOSResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ReinstallDevServerOSResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getOrderId() const
{
    return orderId_;
}

void ReinstallDevServerOSResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ReinstallDevServerOSResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ReinstallDevServerOSResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getStatus() const
{
    return status_;
}

void ReinstallDevServerOSResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReinstallDevServerOSResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ReinstallDevServerOSResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getVpcId() const
{
    return vpcId_;
}

void ReinstallDevServerOSResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ReinstallDevServerOSResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ReinstallDevServerOSResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::vector<EndpointsRes>& ReinstallDevServerOSResponse::getEndpoints()
{
    return endpoints_;
}

void ReinstallDevServerOSResponse::setEndpoints(const std::vector<EndpointsRes>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool ReinstallDevServerOSResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void ReinstallDevServerOSResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::vector<ServerVolume>& ReinstallDevServerOSResponse::getVolumes()
{
    return volumes_;
}

void ReinstallDevServerOSResponse::setVolumes(const std::vector<ServerVolume>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool ReinstallDevServerOSResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void ReinstallDevServerOSResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

ServerImageResponse ReinstallDevServerOSResponse::getImage() const
{
    return image_;
}

void ReinstallDevServerOSResponse::setImage(const ServerImageResponse& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ReinstallDevServerOSResponse::imageIsSet() const
{
    return imageIsSet_;
}

void ReinstallDevServerOSResponse::unsetimage()
{
    imageIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getCategory() const
{
    return category_;
}

void ReinstallDevServerOSResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ReinstallDevServerOSResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void ReinstallDevServerOSResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

ServerHpsInfo ReinstallDevServerOSResponse::getServerHps() const
{
    return serverHps_;
}

void ReinstallDevServerOSResponse::setServerHps(const ServerHpsInfo& value)
{
    serverHps_ = value;
    serverHpsIsSet_ = true;
}

bool ReinstallDevServerOSResponse::serverHpsIsSet() const
{
    return serverHpsIsSet_;
}

void ReinstallDevServerOSResponse::unsetserverHps()
{
    serverHpsIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getSubnetId() const
{
    return subnetId_;
}

void ReinstallDevServerOSResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ReinstallDevServerOSResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ReinstallDevServerOSResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ReinstallDevServerOSResponse::getXRequestId() const
{
    return xRequestId_;
}

void ReinstallDevServerOSResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ReinstallDevServerOSResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ReinstallDevServerOSResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


