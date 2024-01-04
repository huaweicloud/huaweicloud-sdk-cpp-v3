
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionFromSubscriptionUserResponseItem_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionFromSubscriptionUserResponseItem_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  AddSubscriptionFromSubscriptionUserResponseItem
    : public ModelBase
{
public:
    AddSubscriptionFromSubscriptionUserResponseItem();
    virtual ~AddSubscriptionFromSubscriptionUserResponseItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddSubscriptionFromSubscriptionUserResponseItem members

    /// <summary>
    /// 返回码。
    /// </summary>

    int32_t getHttpCode() const;
    bool httpCodeIsSet() const;
    void unsethttpCode();
    void setHttpCode(int32_t value);

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 订阅者的唯一资源标识。
    /// </summary>

    std::string getSubscriptionUrn() const;
    bool subscriptionUrnIsSet() const;
    void unsetsubscriptionUrn();
    void setSubscriptionUrn(const std::string& value);

    /// <summary>
    /// 返回信息对应的代码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 服务异常错误信息描述。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    int32_t httpCode_;
    bool httpCodeIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
    std::string subscriptionUrn_;
    bool subscriptionUrnIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionFromSubscriptionUserResponseItem_H_
