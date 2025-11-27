
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListExportTasksRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListExportTasksRequest_H_


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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListExportTasksRequest
    : public ModelBase
{
public:
    ListExportTasksRequest();
    virtual ~ListExportTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListExportTasksRequest members

    /// <summary>
    /// **参数说明**：实例ID。物理多租下各实例的唯一标识，建议携带该参数，在使用专业版时必须携带该参数。您可以在IoTDA管理控制台界面，选择左侧导航栏“总览”页签查看当前实例的ID，具体获取方式请参考[[查看实例详情](https://support.huaweicloud.com/usermanual-iothub/iot_01_0079.html#section1)](tag:hws) [[查看实例详情](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0079.html#section1)](tag:hws_hk)。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 分页查询时每页显示的记录数，默认值为10，取值范围为1-50的整数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 上一次分页查询结果中最后一条记录的ID，在上一次分页查询时由物联网平台返回获得。分页查询时物联网平台是按marker也就是记录ID降序查询的，越新的数据记录ID也会越大。若填写marker，则本次只查询记录ID小于marker的数据记录。若不填写，则从记录ID最大也就是最新的一条数据开始查询。如果需要依次查询所有数据，则每次查询时必须填写上一次查询响应中的marker值。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 表示从marker后偏移offset条记录开始查询。默认为0，取值范围为0-500的整数。当offset为0时，表示从marker后第一条记录开始输出。限制offset最大值是出于API性能考虑，您可以搭配marker使用该参数实现翻页，例如每页50条记录，1-11页内都可以直接使用offset跳转到指定页，但到11页后，由于offset限制为500，您需要使用第11页返回的marker作为下次查询的marker，以实现翻页到12-22页。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 导出源资源类型，支持批量任务导出类型BatchTask。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 资源过滤条件，Json格式，里面是(K,V)键值对，当resource_type为BatchTasks时填写填写key为task_id，value为BatchTask的task_id(task_id从批量任务接口获得)。当app_type为APP时，导出的结果也会在该app范围内，否则为租户级别筛选。
    /// </summary>

    std::string getResourceCondition() const;
    bool resourceConditionIsSet() const;
    void unsetresourceCondition();
    void setResourceCondition(const std::string& value);

    /// <summary>
    /// 租户规则的生效范围，默认GLOBAL，rule_id不携带的时候，该参数生效，取值如下： - GLOBAL：生效范围为租户级 - APP：生效范围为应用级，如果类型为APP，需要携带app_id，如果不带，生效范围为defaultApp。 
    /// </summary>

    std::string getAppType() const;
    bool appTypeIsSet() const;
    void unsetappType();
    void setAppType(const std::string& value);

    /// <summary>
    /// 应用ID。此参数为非必选参数，rule_id不携带切app_type为APP时，该参数生效，用于兼容平台老用户存在多应用的场景。存在多应用的用户需要使用该接口时，必须携带该参数指定查询哪个应用下的消息订阅，否则接口会提示错误。如果用户存在多应用，同时又不想携带该参数，可以联系华为技术支持对用户数据做应用合并。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceCondition_;
    bool resourceConditionIsSet_;
    std::string appType_;
    bool appTypeIsSet_;
    std::string appId_;
    bool appIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListExportTasksRequest& dereference_from_shared_ptr(std::shared_ptr<ListExportTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListExportTasksRequest_H_
