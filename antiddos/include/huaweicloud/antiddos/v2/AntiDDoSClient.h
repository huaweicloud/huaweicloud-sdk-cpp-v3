#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_AntiDDoSClient_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_AntiDDoSClient_H_

#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/antiddos/v2/model/ShowAlertConfigRequest.h>
#include <huaweicloud/antiddos/v2/model/ShowAlertConfigResponse.h>
#include <huaweicloud/antiddos/v2/model/UpdateAlertConfigRequest.h>
#include <huaweicloud/antiddos/v2/model/UpdateAlertConfigRequestBody.h>
#include <huaweicloud/antiddos/v2/model/UpdateAlertConfigResponse.h>

#include <huaweicloud/antiddos/v2/model/ListDDosStatusRequest.h>
#include <huaweicloud/antiddos/v2/model/ListDDosStatusResponse.h>
#include <huaweicloud/antiddos/v2/model/ListNewConfigsRequest.h>
#include <huaweicloud/antiddos/v2/model/ListNewConfigsResponse.h>
#include <huaweicloud/antiddos/v2/model/ShowNewTaskStatusRequest.h>
#include <huaweicloud/antiddos/v2/model/ShowNewTaskStatusResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Antiddos::V2::Model;

class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  AntiDDoSClient : public Client
{
public:

    AntiDDoSClient();

    virtual ~AntiDDoSClient();

    static ClientBuilder<AntiDDoSClient> newBuilder();

    // 查询告警配置信息
    //
    // 查询用户配置信息，用户可以通过此接口查询是否接收某类告警，同时可以配置是手机短信还是电子邮件接收告警信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAlertConfigResponse> showAlertConfig(
        ShowAlertConfigRequest &request
    );
    // 更新告警配置信息
    //
    // 更新用户配置信息，用户可以通过此接口更新是否接收某类告警，同时可以配置是手机短信还是电子邮件接收告警信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAlertConfigResponse> updateAlertConfig(
        UpdateAlertConfigRequest &request
    );

    // 查询EIP防护状态列表
    //
    // 查询用户所有EIP的Anti-DDoS防护状态信息，用户的EIP无论是否绑定到云服务器，都可以进行查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDDosStatusResponse> listDDosStatus(
        ListDDosStatusRequest &request
    );
    // 查询Anti-DDoS配置可选范围
    //
    // 查询系统支持的Anti-DDoS防护策略配置的可选范围，用户根据范围列表选择适合自已业务的防护策略进行Anti-DDoS流量清洗。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNewConfigsResponse> listNewConfigs(
        ListNewConfigsRequest &request
    );
    // 查询Anti-DDoS任务
    //
    // 用户查询指定的Anti-DDoS防护配置任务，得到任务当前执行的状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNewTaskStatusResponse> showNewTaskStatus(
        ShowNewTaskStatusRequest &request
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

template class HUAWEICLOUD_ANTIDDOS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Antiddos::V2::AntiDDoSClient>;

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_AntiDDoSClient_H_

