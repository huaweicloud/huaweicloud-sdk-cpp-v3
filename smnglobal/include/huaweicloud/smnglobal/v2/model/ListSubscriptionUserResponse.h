
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponse_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponse_H_


#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseItemInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  ListSubscriptionUserResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSubscriptionUserResponse();
    virtual ~ListSubscriptionUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionUserResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 订阅用户数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 订阅用户信息列表。
    /// </summary>

    std::vector<ListSubscriptionUserResponseItemInfo>& getSubscriptionUsers();
    bool subscriptionUsersIsSet() const;
    void unsetsubscriptionUsers();
    void setSubscriptionUsers(const std::vector<ListSubscriptionUserResponseItemInfo>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<ListSubscriptionUserResponseItemInfo> subscriptionUsers_;
    bool subscriptionUsersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponse_H_
