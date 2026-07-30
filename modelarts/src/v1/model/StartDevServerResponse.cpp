

#include "huaweicloud/modelarts/v1/model/StartDevServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StartDevServerResponse::StartDevServerResponse()
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
}

StartDevServerResponse::~StartDevServerResponse() = default;

void StartDevServerResponse::validate()
{
}

web::json::value StartDevServerResponse::toJson() const
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

    return val;
}
bool StartDevServerResponse::fromJson(const web::json::value& val)
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
    return ok;
}


int64_t StartDevServerResponse::getCreateAt() const
{
    return createAt_;
}

void StartDevServerResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool StartDevServerResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void StartDevServerResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t StartDevServerResponse::getUpdateAt() const
{
    return updateAt_;
}

void StartDevServerResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool StartDevServerResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void StartDevServerResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string StartDevServerResponse::getChargingMode() const
{
    return chargingMode_;
}

void StartDevServerResponse::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool StartDevServerResponse::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void StartDevServerResponse::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

CloudServer StartDevServerResponse::getCloudServer() const
{
    return cloudServer_;
}

void StartDevServerResponse::setCloudServer(const CloudServer& value)
{
    cloudServer_ = value;
    cloudServerIsSet_ = true;
}

bool StartDevServerResponse::cloudServerIsSet() const
{
    return cloudServerIsSet_;
}

void StartDevServerResponse::unsetcloudServer()
{
    cloudServerIsSet_ = false;
}

std::vector<Endpoints>& StartDevServerResponse::getEndpointsResponse()
{
    return endpointsResponse_;
}

void StartDevServerResponse::setEndpointsResponse(const std::vector<Endpoints>& value)
{
    endpointsResponse_ = value;
    endpointsResponseIsSet_ = true;
}

bool StartDevServerResponse::endpointsResponseIsSet() const
{
    return endpointsResponseIsSet_;
}

void StartDevServerResponse::unsetendpointsResponse()
{
    endpointsResponseIsSet_ = false;
}

std::string StartDevServerResponse::getFlavor() const
{
    return flavor_;
}

void StartDevServerResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool StartDevServerResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void StartDevServerResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string StartDevServerResponse::getId() const
{
    return id_;
}

void StartDevServerResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StartDevServerResponse::idIsSet() const
{
    return idIsSet_;
}

void StartDevServerResponse::unsetid()
{
    idIsSet_ = false;
}

std::string StartDevServerResponse::getKeyPairName() const
{
    return keyPairName_;
}

void StartDevServerResponse::setKeyPairName(const std::string& value)
{
    keyPairName_ = value;
    keyPairNameIsSet_ = true;
}

bool StartDevServerResponse::keyPairNameIsSet() const
{
    return keyPairNameIsSet_;
}

void StartDevServerResponse::unsetkeyPairName()
{
    keyPairNameIsSet_ = false;
}

std::string StartDevServerResponse::getName() const
{
    return name_;
}

void StartDevServerResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StartDevServerResponse::nameIsSet() const
{
    return nameIsSet_;
}

void StartDevServerResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string StartDevServerResponse::getOrderId() const
{
    return orderId_;
}

void StartDevServerResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool StartDevServerResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void StartDevServerResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string StartDevServerResponse::getStatus() const
{
    return status_;
}

void StartDevServerResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StartDevServerResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StartDevServerResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StartDevServerResponse::getVpcId() const
{
    return vpcId_;
}

void StartDevServerResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool StartDevServerResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void StartDevServerResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::vector<EndpointsRes>& StartDevServerResponse::getEndpoints()
{
    return endpoints_;
}

void StartDevServerResponse::setEndpoints(const std::vector<EndpointsRes>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool StartDevServerResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void StartDevServerResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::vector<ServerVolume>& StartDevServerResponse::getVolumes()
{
    return volumes_;
}

void StartDevServerResponse::setVolumes(const std::vector<ServerVolume>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool StartDevServerResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void StartDevServerResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

ServerImageResponse StartDevServerResponse::getImage() const
{
    return image_;
}

void StartDevServerResponse::setImage(const ServerImageResponse& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool StartDevServerResponse::imageIsSet() const
{
    return imageIsSet_;
}

void StartDevServerResponse::unsetimage()
{
    imageIsSet_ = false;
}

std::string StartDevServerResponse::getCategory() const
{
    return category_;
}

void StartDevServerResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool StartDevServerResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void StartDevServerResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

ServerHpsInfo StartDevServerResponse::getServerHps() const
{
    return serverHps_;
}

void StartDevServerResponse::setServerHps(const ServerHpsInfo& value)
{
    serverHps_ = value;
    serverHpsIsSet_ = true;
}

bool StartDevServerResponse::serverHpsIsSet() const
{
    return serverHpsIsSet_;
}

void StartDevServerResponse::unsetserverHps()
{
    serverHpsIsSet_ = false;
}

std::string StartDevServerResponse::getSubnetId() const
{
    return subnetId_;
}

void StartDevServerResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool StartDevServerResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void StartDevServerResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


