

#include "huaweicloud/meeting/v1/model/QueryDeviceInfoResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryDeviceInfoResultDTO::QueryDeviceInfoResultDTO()
{
    model_ = "";
    modelIsSet_ = false;
    deviceSize_ = "";
    deviceSizeIsSet_ = false;
    purchaseChannel_ = "";
    purchaseChannelIsSet_ = false;
}

QueryDeviceInfoResultDTO::~QueryDeviceInfoResultDTO() = default;

void QueryDeviceInfoResultDTO::validate()
{
}

web::json::value QueryDeviceInfoResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(deviceSizeIsSet_) {
        val[utility::conversions::to_string_t("deviceSize")] = ModelBase::toJson(deviceSize_);
    }
    if(purchaseChannelIsSet_) {
        val[utility::conversions::to_string_t("purchaseChannel")] = ModelBase::toJson(purchaseChannel_);
    }

    return val;
}
bool QueryDeviceInfoResultDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deviceSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deviceSize"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("purchaseChannel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("purchaseChannel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPurchaseChannel(refVal);
        }
    }
    return ok;
}


std::string QueryDeviceInfoResultDTO::getModel() const
{
    return model_;
}

void QueryDeviceInfoResultDTO::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool QueryDeviceInfoResultDTO::modelIsSet() const
{
    return modelIsSet_;
}

void QueryDeviceInfoResultDTO::unsetmodel()
{
    modelIsSet_ = false;
}

std::string QueryDeviceInfoResultDTO::getDeviceSize() const
{
    return deviceSize_;
}

void QueryDeviceInfoResultDTO::setDeviceSize(const std::string& value)
{
    deviceSize_ = value;
    deviceSizeIsSet_ = true;
}

bool QueryDeviceInfoResultDTO::deviceSizeIsSet() const
{
    return deviceSizeIsSet_;
}

void QueryDeviceInfoResultDTO::unsetdeviceSize()
{
    deviceSizeIsSet_ = false;
}

std::string QueryDeviceInfoResultDTO::getPurchaseChannel() const
{
    return purchaseChannel_;
}

void QueryDeviceInfoResultDTO::setPurchaseChannel(const std::string& value)
{
    purchaseChannel_ = value;
    purchaseChannelIsSet_ = true;
}

bool QueryDeviceInfoResultDTO::purchaseChannelIsSet() const
{
    return purchaseChannelIsSet_;
}

void QueryDeviceInfoResultDTO::unsetpurchaseChannel()
{
    purchaseChannelIsSet_ = false;
}

}
}
}
}
}


