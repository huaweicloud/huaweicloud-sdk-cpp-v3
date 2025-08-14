
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDevicesRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDevicesRequest_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListDevicesRequest
    : public ModelBase
{
public:
    ListDevicesRequest();
    virtual ~ListDevicesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDevicesRequest members

    /// <summary>
    /// **参数说明**：实例ID。物理多租下各实例的唯一标识，一般华为云租户无需携带该参数，仅在物理多租场景下从管理面访问API时需要携带该参数。您可以在IoTDA管理控制台界面，选择左侧导航栏“总览”页签查看当前实例的ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备关联的产品ID，用于唯一标识一个产品模型，创建产品后获得。方法请参见 [[创建产品](https://support.huaweicloud.com/api-iothub/iot_06_v5_0050.html)](tag:hws)[[创建产品](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0050.html)](tag:hws_hk)。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数说明**：网关ID，用于标识设备所属的父设备，即父设备的设备ID。携带该参数时，表示查询该设备下的子设备，默认查询下一级子设备，如果需要查询该设备下所有各级子设备，请同时携带is_cascade_query参数为true；不携带该参数时，表示查询用户下所有设备。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getGatewayId() const;
    bool gatewayIdIsSet() const;
    void unsetgatewayId();
    void setGatewayId(const std::string& value);

    /// <summary>
    /// **参数说明**：是否级联查询，该参数仅在同时携带gateway_id时生效。默认值为false。 **取值范围**： - true：表示查询设备ID等于gateway_id参数的设备下的所有各级子设备。 - false：表示查询设备ID等于gateway_id参数的设备下的一级子设备。
    /// </summary>

    bool isIsCascadeQuery() const;
    bool isCascadeQueryIsSet() const;
    void unsetisCascadeQuery();
    void setIsCascadeQuery(bool value);

    /// <summary>
    /// **参数说明**：设备标识码，通常使用IMEI、MAC地址或Serial No作为node_id。 **取值范围**：长度不超过64，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备名称。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// **参数说明**：分页查询时每页显示的记录数。 **取值范围**：1-50的整数，默认值为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数说明**：上一次分页查询结果中最后一条记录的ID，在上一次分页查询时由物联网平台返回获得。分页查询时物联网平台是按marker也就是记录ID降序查询的，越新的数据记录ID也会越大。若填写marker，则本次只查询记录ID小于marker的数据记录。若不填写，则从记录ID最大也就是最新的一条数据开始查询。如果需要依次查询所有数据，则每次查询时必须填写上一次查询响应中的marker值。 **取值范围**：长度为24的十六进制字符串，默认值为ffffffffffffffffffffffff。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// **参数说明**：表示从marker后偏移offset条记录开始查询。默认为0，取值范围为0-500的整数。当offset为0时，表示从marker后第一条记录开始输出。限制offset最大值是出于API性能考虑，您可以搭配marker使用该参数实现翻页，例如每页50条记录，1-11页内都可以直接使用offset跳转到指定页，但到11页后，由于offset限制为500，您需要使用第11页返回的marker作为下次查询的marker，以实现翻页到12-22页。 **取值范围**：0-500的整数，默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数说明**：查询设备注册时间在startTime之后的记录，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数说明**：查询设备注册时间在endTime之前的记录，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数说明**：资源空间ID。此参数为非必选参数，存在多资源空间的用户需要使用该接口时，可以携带该参数查询指定资源空间下的设备列表，不携带该参数则会查询该用户下所有设备列表。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string gatewayId_;
    bool gatewayIdIsSet_;
    bool isCascadeQuery_;
    bool isCascadeQueryIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string appId_;
    bool appIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDevicesRequest& dereference_from_shared_ptr(std::shared_ptr<ListDevicesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDevicesRequest_H_
