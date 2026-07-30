

#include "huaweicloud/modelarts/v1/model/DeleteDevServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteDevServerResponse::DeleteDevServerResponse()
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

DeleteDevServerResponse::~DeleteDevServerResponse() = default;

void DeleteDevServerResponse::validate()
{
}

web::json::value DeleteDevServerResponse::toJson() const
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
bool DeleteDevServerResponse::fromJson(const web::json::value& val)
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


int64_t DeleteDevServerResponse::getCreateAt() const
{
    return createAt_;
}

void DeleteDevServerResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool DeleteDevServerResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void DeleteDevServerResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t DeleteDevServerResponse::getUpdateAt() const
{
    return updateAt_;
}

void DeleteDevServerResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool DeleteDevServerResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void DeleteDevServerResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string DeleteDevServerResponse::getChargingMode() const
{
    return chargingMode_;
}

void DeleteDevServerResponse::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool DeleteDevServerResponse::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void DeleteDevServerResponse::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

CloudServer DeleteDevServerResponse::getCloudServer() const
{
    return cloudServer_;
}

void DeleteDevServerResponse::setCloudServer(const CloudServer& value)
{
    cloudServer_ = value;
    cloudServerIsSet_ = true;
}

bool DeleteDevServerResponse::cloudServerIsSet() const
{
    return cloudServerIsSet_;
}

void DeleteDevServerResponse::unsetcloudServer()
{
    cloudServerIsSet_ = false;
}

std::vector<Endpoints>& DeleteDevServerResponse::getEndpointsResponse()
{
    return endpointsResponse_;
}

void DeleteDevServerResponse::setEndpointsResponse(const std::vector<Endpoints>& value)
{
    endpointsResponse_ = value;
    endpointsResponseIsSet_ = true;
}

bool DeleteDevServerResponse::endpointsResponseIsSet() const
{
    return endpointsResponseIsSet_;
}

void DeleteDevServerResponse::unsetendpointsResponse()
{
    endpointsResponseIsSet_ = false;
}

std::string DeleteDevServerResponse::getFlavor() const
{
    return flavor_;
}

void DeleteDevServerResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool DeleteDevServerResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void DeleteDevServerResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string DeleteDevServerResponse::getId() const
{
    return id_;
}

void DeleteDevServerResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteDevServerResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteDevServerResponse::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteDevServerResponse::getKeyPairName() const
{
    return keyPairName_;
}

void DeleteDevServerResponse::setKeyPairName(const std::string& value)
{
    keyPairName_ = value;
    keyPairNameIsSet_ = true;
}

bool DeleteDevServerResponse::keyPairNameIsSet() const
{
    return keyPairNameIsSet_;
}

void DeleteDevServerResponse::unsetkeyPairName()
{
    keyPairNameIsSet_ = false;
}

std::string DeleteDevServerResponse::getName() const
{
    return name_;
}

void DeleteDevServerResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteDevServerResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteDevServerResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string DeleteDevServerResponse::getOrderId() const
{
    return orderId_;
}

void DeleteDevServerResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool DeleteDevServerResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void DeleteDevServerResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string DeleteDevServerResponse::getStatus() const
{
    return status_;
}

void DeleteDevServerResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteDevServerResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteDevServerResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteDevServerResponse::getVpcId() const
{
    return vpcId_;
}

void DeleteDevServerResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool DeleteDevServerResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void DeleteDevServerResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::vector<EndpointsRes>& DeleteDevServerResponse::getEndpoints()
{
    return endpoints_;
}

void DeleteDevServerResponse::setEndpoints(const std::vector<EndpointsRes>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool DeleteDevServerResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void DeleteDevServerResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::vector<ServerVolume>& DeleteDevServerResponse::getVolumes()
{
    return volumes_;
}

void DeleteDevServerResponse::setVolumes(const std::vector<ServerVolume>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool DeleteDevServerResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void DeleteDevServerResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

ServerImageResponse DeleteDevServerResponse::getImage() const
{
    return image_;
}

void DeleteDevServerResponse::setImage(const ServerImageResponse& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool DeleteDevServerResponse::imageIsSet() const
{
    return imageIsSet_;
}

void DeleteDevServerResponse::unsetimage()
{
    imageIsSet_ = false;
}

std::string DeleteDevServerResponse::getCategory() const
{
    return category_;
}

void DeleteDevServerResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool DeleteDevServerResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void DeleteDevServerResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

ServerHpsInfo DeleteDevServerResponse::getServerHps() const
{
    return serverHps_;
}

void DeleteDevServerResponse::setServerHps(const ServerHpsInfo& value)
{
    serverHps_ = value;
    serverHpsIsSet_ = true;
}

bool DeleteDevServerResponse::serverHpsIsSet() const
{
    return serverHpsIsSet_;
}

void DeleteDevServerResponse::unsetserverHps()
{
    serverHpsIsSet_ = false;
}

std::string DeleteDevServerResponse::getSubnetId() const
{
    return subnetId_;
}

void DeleteDevServerResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool DeleteDevServerResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void DeleteDevServerResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


