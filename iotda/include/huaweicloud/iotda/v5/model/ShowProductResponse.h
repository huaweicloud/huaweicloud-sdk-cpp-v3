
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowProductResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowProductResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ServiceCapability.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowProductResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProductResponse();
    virtual ~ShowProductResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProductResponse members

    /// <summary>
    /// 资源空间ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 资源空间名称。
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 产品ID，用于唯一标识一个产品，在物联网平台创建产品后由平台分配获得。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 产品名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 设备类型。
    /// </summary>

    std::string getDeviceType() const;
    bool deviceTypeIsSet() const;
    void unsetdeviceType();
    void setDeviceType(const std::string& value);

    /// <summary>
    /// 设备使用的协议类型。取值范围：MQTT，CoAP，HTTP，HTTPS，Modbus，ONVIF， OPC-UA，OPC-DA，Other，TCP，UDP。
    /// </summary>

    std::string getProtocolType() const;
    bool protocolTypeIsSet() const;
    void unsetprotocolType();
    void setProtocolType(const std::string& value);

    /// <summary>
    /// 设备上报数据的格式，取值范围：json，binary。
    /// </summary>

    std::string getDataFormat() const;
    bool dataFormatIsSet() const;
    void unsetdataFormat();
    void setDataFormat(const std::string& value);

    /// <summary>
    /// 厂商名称。
    /// </summary>

    std::string getManufacturerName() const;
    bool manufacturerNameIsSet() const;
    void unsetmanufacturerName();
    void setManufacturerName(const std::string& value);

    /// <summary>
    /// 设备所属行业。
    /// </summary>

    std::string getIndustry() const;
    bool industryIsSet() const;
    void unsetindustry();
    void setIndustry(const std::string& value);

    /// <summary>
    /// 产品的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 设备的服务能力列表。
    /// </summary>

    std::vector<ServiceCapability>& getServiceCapabilities();
    bool serviceCapabilitiesIsSet() const;
    void unsetserviceCapabilities();
    void setServiceCapabilities(const std::vector<ServiceCapability>& value);

    /// <summary>
    /// 在物联网平台创建产品的时间，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string deviceType_;
    bool deviceTypeIsSet_;
    std::string protocolType_;
    bool protocolTypeIsSet_;
    std::string dataFormat_;
    bool dataFormatIsSet_;
    std::string manufacturerName_;
    bool manufacturerNameIsSet_;
    std::string industry_;
    bool industryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<ServiceCapability> serviceCapabilities_;
    bool serviceCapabilitiesIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowProductResponse_H_
