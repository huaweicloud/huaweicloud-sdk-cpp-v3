
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestBody_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestBody_H_


#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestSmsEndpointInfo.h>
#include <huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestEmailEndpointInfo.h>
#include <huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestHttpEndpointInfo.h>
#include <huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestHttpsEndpointInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  CreateSubscriptionUserRequestBody
    : public ModelBase
{
public:
    CreateSubscriptionUserRequestBody();
    virtual ~CreateSubscriptionUserRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionUserRequestBody members

    /// <summary>
    /// 订阅用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 订阅用户分组。每个订阅分组只能包含中英文、数字([0-9])、下划线(_)，下划线不能出现在开始或结尾，下划线不能连续出现，长度为1到32个字符。
    /// </summary>

    std::vector<std::string>& getGroup();
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSubscriptionUserRequestHttpEndpointInfo getHttp() const;
    bool httpIsSet() const;
    void unsethttp();
    void setHttp(const CreateSubscriptionUserRequestHttpEndpointInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSubscriptionUserRequestHttpsEndpointInfo getHttps() const;
    bool httpsIsSet() const;
    void unsethttps();
    void setHttps(const CreateSubscriptionUserRequestHttpsEndpointInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSubscriptionUserRequestSmsEndpointInfo getSms() const;
    bool smsIsSet() const;
    void unsetsms();
    void setSms(const CreateSubscriptionUserRequestSmsEndpointInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSubscriptionUserRequestEmailEndpointInfo getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const CreateSubscriptionUserRequestEmailEndpointInfo& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> group_;
    bool groupIsSet_;
    CreateSubscriptionUserRequestHttpEndpointInfo http_;
    bool httpIsSet_;
    CreateSubscriptionUserRequestHttpsEndpointInfo https_;
    bool httpsIsSet_;
    CreateSubscriptionUserRequestSmsEndpointInfo sms_;
    bool smsIsSet_;
    CreateSubscriptionUserRequestEmailEndpointInfo email_;
    bool emailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestBody_H_
