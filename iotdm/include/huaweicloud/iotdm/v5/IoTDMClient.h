#ifndef HUAWEICLOUD_SDK_IOTDM_V5_IoTDMClient_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_IoTDMClient_H_

#include <huaweicloud/iotdm/v5/IoTDMExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/iotdm/v5/model/ListInstanceFlavorsRequest.h>
#include <huaweicloud/iotdm/v5/model/ListInstanceFlavorsResponse.h>
#include <string>

#include <huaweicloud/iotdm/v5/model/BindInstanceTags.h>
#include <huaweicloud/iotdm/v5/model/BindInstanceTagsRequest.h>
#include <huaweicloud/iotdm/v5/model/BindInstanceTagsResponse.h>
#include <huaweicloud/iotdm/v5/model/ChangeInstanceChargeMode.h>
#include <huaweicloud/iotdm/v5/model/ChangeInstanceChargeModeRequest.h>
#include <huaweicloud/iotdm/v5/model/ChangeInstanceChargeModeResponse.h>
#include <huaweicloud/iotdm/v5/model/CreateInstance.h>
#include <huaweicloud/iotdm/v5/model/CreateInstanceRequest.h>
#include <huaweicloud/iotdm/v5/model/CreateInstanceResponse.h>
#include <huaweicloud/iotdm/v5/model/DeleteInstanceRequest.h>
#include <huaweicloud/iotdm/v5/model/DeleteInstanceResponse.h>
#include <huaweicloud/iotdm/v5/model/ListInstancesRequest.h>
#include <huaweicloud/iotdm/v5/model/ListInstancesResponse.h>
#include <huaweicloud/iotdm/v5/model/ResizeInstance.h>
#include <huaweicloud/iotdm/v5/model/ResizeInstanceRequest.h>
#include <huaweicloud/iotdm/v5/model/ResizeInstanceResponse.h>
#include <huaweicloud/iotdm/v5/model/ShowInstanceRequest.h>
#include <huaweicloud/iotdm/v5/model/ShowInstanceResponse.h>
#include <huaweicloud/iotdm/v5/model/UnbindInstanceTags.h>
#include <huaweicloud/iotdm/v5/model/UnbindInstanceTagsRequest.h>
#include <huaweicloud/iotdm/v5/model/UnbindInstanceTagsResponse.h>
#include <huaweicloud/iotdm/v5/model/UpdateInstance.h>
#include <huaweicloud/iotdm/v5/model/UpdateInstanceRequest.h>
#include <huaweicloud/iotdm/v5/model/UpdateInstanceResponse.h>
#include <string>

#include <huaweicloud/iotdm/v5/model/ListInstanceTasksRequest.h>
#include <huaweicloud/iotdm/v5/model/ListInstanceTasksResponse.h>
#include <huaweicloud/iotdm/v5/model/RetryInstanceTaskRequest.h>
#include <huaweicloud/iotdm/v5/model/RetryInstanceTaskResponse.h>
#include <huaweicloud/iotdm/v5/model/ShowInstanceTaskRequest.h>
#include <huaweicloud/iotdm/v5/model/ShowInstanceTaskResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Iotdm::V5::Model;

class HUAWEICLOUD_IOTDM_V5_EXPORT  IoTDMClient : public Client
{
public:

    IoTDMClient();

    virtual ~IoTDMClient();

    static ClientBuilder<IoTDMClient> newBuilder();

    // 查询实例规格列表
    //
    // 用户可以调用此接口查询设备接入服务支持的实例规格列表。支持的实例规格请参见[[产品规格说明](https://support.huaweicloud.com/productdesc-iothub/iot_04_0014.html)](tag:hws)[[产品规格说明](https://support.huaweicloud.com/intl/zh-cn/productdesc-iothub/iot_04_0014.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceFlavorsResponse> listInstanceFlavors(
        ListInstanceFlavorsRequest &request
    );

    // 添加实例标签
    //
    // 添加实例标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BindInstanceTagsResponse> bindInstanceTags(
        BindInstanceTagsRequest &request
    );
    // 修改实例计费模式
    //
    // 修改设备接入实例的计费模式，支持将按需计费模式修改为包年/包月计费模式。
    // 接口约束：当前实例的规格支持包年/包月计费模式时，才可以修改实例的计费模式为包年/包月。支持的实例规格请参见[[产品规格说明](https://support.huaweicloud.com/productdesc-iothub/iot_04_0014.html)](tag:hws)[[产品规格说明](https://support.huaweicloud.com/intl/zh-cn/productdesc-iothub/iot_04_0014.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeInstanceChargeModeResponse> changeInstanceChargeMode(
        ChangeInstanceChargeModeRequest &request
    );
    // 创建设备接入实例
    //
    // 用户可以调用此接口创建一个设备接入实例。支持的实例规格请参见[[产品规格说明](https://support.huaweicloud.com/productdesc-iothub/iot_04_0014.html)](tag:hws)[[产品规格说明](https://support.huaweicloud.com/intl/zh-cn/productdesc-iothub/iot_04_0014.html)](tag:hws_hk)。
    // [接口约束：
    // - 请保证账户余额充足，此接口无法使用优惠券支付，在创建包年/包月实例时，若余额不足会创建一个待支付订单。
    // - 若想使用优惠券，请将请求中的is_auto_pay字段设置为false，参考[\&quot;支付包年/包月产品订单\&quot;](https://support.huaweicloud.com/api-bpconsole/api_order_00016.html#section0)进行支付，或者在华为云官网页面使用优惠券进行支付。
    // - 如果您需要退订包年/包月资源，请参考[\&quot;退订包年/包月资源\&quot;](https://support.huaweicloud.com/api-bpconsole/api_order_00019.html)。](tag:hws)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstanceResponse> createInstance(
        CreateInstanceRequest &request
    );
    // 删除实例
    //
    // 删除设备接入实例。约束：此接口仅支持删除按需计费的实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstanceResponse> deleteInstance(
        DeleteInstanceRequest &request
    );
    // 查询实例列表
    //
    // 用户可以调用此接口查询设备接入实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesResponse> listInstances(
        ListInstancesRequest &request
    );
    // 修改实例规格信息
    //
    // 修改设备接入实例的规格。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeInstanceResponse> resizeInstance(
        ResizeInstanceRequest &request
    );
    // 查询实例详情
    //
    // 查询设备接入实例详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceResponse> showInstance(
        ShowInstanceRequest &request
    );
    // 删除实例标签
    //
    // 删除实例标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnbindInstanceTagsResponse> unbindInstanceTags(
        UnbindInstanceTagsRequest &request
    );
    // 修改实例信息
    //
    // 修改设备接入实例信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceResponse> updateInstance(
        UpdateInstanceRequest &request
    );

    // 查询实例任务列表
    //
    // 用户可以调用此接口查询设备接入实例任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceTasksResponse> listInstanceTasks(
        ListInstanceTasksRequest &request
    );
    // 重试实例任务
    //
    // 用户可以调用此接口对运行失败的实例任务进行重试。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RetryInstanceTaskResponse> retryInstanceTask(
        RetryInstanceTaskRequest &request
    );
    // 查询实例任务详情
    //
    // 用户可以调用此接口查询设备接入实例任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceTaskResponse> showInstanceTask(
        ShowInstanceTaskRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_IOTDM_V5_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Iotdm::V5::IoTDMClient>;

#endif // HUAWEICLOUD_SDK_IOTDM_V5_IoTDMClient_H_

