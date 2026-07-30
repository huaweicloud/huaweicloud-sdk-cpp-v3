

#include "huaweicloud/modelarts/v1/model/ChangeDevServerOSResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChangeDevServerOSResponse::ChangeDevServerOSResponse()
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

ChangeDevServerOSResponse::~ChangeDevServerOSResponse() = default;

void ChangeDevServerOSResponse::validate()
{
}

web::json::value ChangeDevServerOSResponse::toJson() const
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
bool ChangeDevServerOSResponse::fromJson(const web::json::value& val)
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


int64_t ChangeDevServerOSResponse::getCreateAt() const
{
    return createAt_;
}

void ChangeDevServerOSResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ChangeDevServerOSResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ChangeDevServerOSResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t ChangeDevServerOSResponse::getUpdateAt() const
{
    return updateAt_;
}

void ChangeDevServerOSResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ChangeDevServerOSResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ChangeDevServerOSResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getChargingMode() const
{
    return chargingMode_;
}

void ChangeDevServerOSResponse::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ChangeDevServerOSResponse::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ChangeDevServerOSResponse::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

CloudServer ChangeDevServerOSResponse::getCloudServer() const
{
    return cloudServer_;
}

void ChangeDevServerOSResponse::setCloudServer(const CloudServer& value)
{
    cloudServer_ = value;
    cloudServerIsSet_ = true;
}

bool ChangeDevServerOSResponse::cloudServerIsSet() const
{
    return cloudServerIsSet_;
}

void ChangeDevServerOSResponse::unsetcloudServer()
{
    cloudServerIsSet_ = false;
}

std::vector<Endpoints>& ChangeDevServerOSResponse::getEndpointsResponse()
{
    return endpointsResponse_;
}

void ChangeDevServerOSResponse::setEndpointsResponse(const std::vector<Endpoints>& value)
{
    endpointsResponse_ = value;
    endpointsResponseIsSet_ = true;
}

bool ChangeDevServerOSResponse::endpointsResponseIsSet() const
{
    return endpointsResponseIsSet_;
}

void ChangeDevServerOSResponse::unsetendpointsResponse()
{
    endpointsResponseIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getFlavor() const
{
    return flavor_;
}

void ChangeDevServerOSResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ChangeDevServerOSResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void ChangeDevServerOSResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getId() const
{
    return id_;
}

void ChangeDevServerOSResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChangeDevServerOSResponse::idIsSet() const
{
    return idIsSet_;
}

void ChangeDevServerOSResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getKeyPairName() const
{
    return keyPairName_;
}

void ChangeDevServerOSResponse::setKeyPairName(const std::string& value)
{
    keyPairName_ = value;
    keyPairNameIsSet_ = true;
}

bool ChangeDevServerOSResponse::keyPairNameIsSet() const
{
    return keyPairNameIsSet_;
}

void ChangeDevServerOSResponse::unsetkeyPairName()
{
    keyPairNameIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getName() const
{
    return name_;
}

void ChangeDevServerOSResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChangeDevServerOSResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ChangeDevServerOSResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getOrderId() const
{
    return orderId_;
}

void ChangeDevServerOSResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeDevServerOSResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeDevServerOSResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getStatus() const
{
    return status_;
}

void ChangeDevServerOSResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChangeDevServerOSResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ChangeDevServerOSResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getVpcId() const
{
    return vpcId_;
}

void ChangeDevServerOSResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ChangeDevServerOSResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ChangeDevServerOSResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::vector<EndpointsRes>& ChangeDevServerOSResponse::getEndpoints()
{
    return endpoints_;
}

void ChangeDevServerOSResponse::setEndpoints(const std::vector<EndpointsRes>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool ChangeDevServerOSResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void ChangeDevServerOSResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::vector<ServerVolume>& ChangeDevServerOSResponse::getVolumes()
{
    return volumes_;
}

void ChangeDevServerOSResponse::setVolumes(const std::vector<ServerVolume>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool ChangeDevServerOSResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void ChangeDevServerOSResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

ServerImageResponse ChangeDevServerOSResponse::getImage() const
{
    return image_;
}

void ChangeDevServerOSResponse::setImage(const ServerImageResponse& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ChangeDevServerOSResponse::imageIsSet() const
{
    return imageIsSet_;
}

void ChangeDevServerOSResponse::unsetimage()
{
    imageIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getCategory() const
{
    return category_;
}

void ChangeDevServerOSResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ChangeDevServerOSResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void ChangeDevServerOSResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

ServerHpsInfo ChangeDevServerOSResponse::getServerHps() const
{
    return serverHps_;
}

void ChangeDevServerOSResponse::setServerHps(const ServerHpsInfo& value)
{
    serverHps_ = value;
    serverHpsIsSet_ = true;
}

bool ChangeDevServerOSResponse::serverHpsIsSet() const
{
    return serverHpsIsSet_;
}

void ChangeDevServerOSResponse::unsetserverHps()
{
    serverHpsIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getSubnetId() const
{
    return subnetId_;
}

void ChangeDevServerOSResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ChangeDevServerOSResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ChangeDevServerOSResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ChangeDevServerOSResponse::getXRequestId() const
{
    return xRequestId_;
}

void ChangeDevServerOSResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ChangeDevServerOSResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ChangeDevServerOSResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


