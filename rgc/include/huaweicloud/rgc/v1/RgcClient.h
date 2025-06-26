#ifndef HUAWEICLOUD_SDK_RGC_V1_RgcClient_H_
#define HUAWEICLOUD_SDK_RGC_V1_RgcClient_H_

#include <huaweicloud/rgc/v1/RgcExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/rgc/v1/model/ControlOperateReqBody.h>
#include <huaweicloud/rgc/v1/model/DisableControlRequest.h>
#include <huaweicloud/rgc/v1/model/DisableControlResponse.h>
#include <huaweicloud/rgc/v1/model/EnableControlRequest.h>
#include <huaweicloud/rgc/v1/model/EnableControlResponse.h>
#include <huaweicloud/rgc/v1/model/ListControlsForOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/ListControlsForOrganizationalUnitResponse.h>
#include <huaweicloud/rgc/v1/model/ListEnabledControlsRequest.h>
#include <huaweicloud/rgc/v1/model/ListEnabledControlsResponse.h>
#include <huaweicloud/rgc/v1/model/ShowControlOperateRequest.h>
#include <huaweicloud/rgc/v1/model/ShowControlOperateResponse.h>
#include <string>

#include <huaweicloud/rgc/v1/model/CreateAccountRequest.h>
#include <huaweicloud/rgc/v1/model/CreateAccountResponse.h>
#include <huaweicloud/rgc/v1/model/CreateManagedAccountRequest.h>
#include <huaweicloud/rgc/v1/model/RegisterOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/RegisterOrganizationalUnitResponse.h>
#include <huaweicloud/rgc/v1/model/ShowManagedAccountRequest.h>
#include <huaweicloud/rgc/v1/model/ShowManagedAccountResponse.h>
#include <huaweicloud/rgc/v1/model/ShowOperationRequest.h>
#include <huaweicloud/rgc/v1/model/ShowOperationResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Rgc::V1::Model;

class HUAWEICLOUD_RGC_V1_EXPORT  RgcClient : public Client
{
public:

    RgcClient();

    virtual ~RgcClient();

    static ClientBuilder<RgcClient> newBuilder();

    // 关闭控制策略
    //
    // 关闭组织下的某个单元的某个控制策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableControlResponse> disableControl(
        DisableControlRequest &request
    );
    // 开启控制策略
    //
    // 给组织下的某个单元开启某个控制策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableControlResponse> enableControl(
        EnableControlRequest &request
    );
    // 列出注册OU下开启的控制策略
    //
    // 列出组织里某个注册OU开启的所有控制策略信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListControlsForOrganizationalUnitResponse> listControlsForOrganizationalUnit(
        ListControlsForOrganizationalUnitRequest &request
    );
    // 列出开启的控制策略
    //
    // 列出组织里开启的所有控制策略信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnabledControlsResponse> listEnabledControls(
        ListEnabledControlsRequest &request
    );
    // 查询控制策略操作状态
    //
    // 根据操作ID查询返回指定ID的操作状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowControlOperateResponse> showControlOperate(
        ShowControlOperateRequest &request
    );

    // 创建账号
    //
    // 在组织里的某个注册OU下创建账号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAccountResponse> createAccount(
        CreateAccountRequest &request
    );
    // 注册OU
    //
    // 将组织里的某个OU注册到RGC服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterOrganizationalUnitResponse> registerOrganizationalUnit(
        RegisterOrganizationalUnitRequest &request
    );
    // 查询纳管账号信息
    //
    // 查询组织里某个纳管账号信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowManagedAccountResponse> showManagedAccount(
        ShowManagedAccountRequest &request
    );
    // 查询注册过程信息
    //
    // 查询在RGC服务里注册/取消注册的过程信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOperationResponse> showOperation(
        ShowOperationRequest &request
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

template class HUAWEICLOUD_RGC_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Rgc::V1::RgcClient>;

#endif // HUAWEICLOUD_SDK_RGC_V1_RgcClient_H_

