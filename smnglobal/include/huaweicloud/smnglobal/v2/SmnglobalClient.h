#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_SmnglobalClient_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_SmnglobalClient_H_

#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequest.h>
#include <huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestBody.h>
#include <huaweicloud/smnglobal/v2/model/CreateSubscriptionUserResponse.h>
#include <huaweicloud/smnglobal/v2/model/DeleteSubscriptionUserRequest.h>
#include <huaweicloud/smnglobal/v2/model/DeleteSubscriptionUserResponse.h>
#include <huaweicloud/smnglobal/v2/model/ListSubscriptionUserRequest.h>
#include <huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponse.h>
#include <huaweicloud/smnglobal/v2/model/UpdateSubscriptionUserRequest.h>
#include <huaweicloud/smnglobal/v2/model/UpdateSubscriptionUserRequestBody.h>
#include <huaweicloud/smnglobal/v2/model/UpdateSubscriptionUserResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Smnglobal::V2::Model;

class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  SmnglobalClient : public Client
{
public:

    SmnglobalClient();

    virtual ~SmnglobalClient();

    static ClientBuilder<SmnglobalClient> newBuilder();

    // 添加订阅用户
    //
    // 添加订阅用户。如果订阅用户的状态为未确认，则会向订阅用户发送一条确认订阅消息。订阅用户点击订阅链接确认订阅后，则订阅用户的状态变更为已确认，同时会向订阅用户发送一条取消订阅消息，便于订阅用户随时可以取消订阅。订阅用户点击取消订阅链接后，则订阅用户的状态变更为已取消，同时会向订阅用户发送一条重新订阅消息，便于订阅用户可以重新订阅。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSubscriptionUserResponse> createSubscriptionUser(
        CreateSubscriptionUserRequest &request
    );
    // 删除订阅用户
    //
    // 删除订阅用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSubscriptionUserResponse> deleteSubscriptionUser(
        DeleteSubscriptionUserRequest &request
    );
    // 查询订阅用户列表
    //
    // 查询订阅用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubscriptionUserResponse> listSubscriptionUser(
        ListSubscriptionUserRequest &request
    );
    // 更新订阅用户
    //
    // 更新订阅用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSubscriptionUserResponse> updateSubscriptionUser(
        UpdateSubscriptionUserRequest &request
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

template class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Smnglobal::V2::SmnglobalClient>;

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_SmnglobalClient_H_

