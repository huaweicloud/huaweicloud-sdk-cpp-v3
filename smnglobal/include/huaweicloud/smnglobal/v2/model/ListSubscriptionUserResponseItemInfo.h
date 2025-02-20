
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseItemInfo_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseItemInfo_H_


#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseSmsEndpointInfo.h>
#include <string>
#include <huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseHttpsEndpointInfo.h>
#include <huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseEmailEndpointInfo.h>
#include <vector>
#include <huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseHttpEndpointInfo.h>

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
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  ListSubscriptionUserResponseItemInfo
    : public ModelBase
{
public:
    ListSubscriptionUserResponseItemInfo();
    virtual ~ListSubscriptionUserResponseItemInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionUserResponseItemInfo members

    /// <summary>
    /// 订阅用户ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 租户账号ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 订阅用户名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 订阅用户状态。 UNCONFIRMED：未确认 CONFIRMED：已确认 CANCELLED：已取消
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 订阅用户分组。
    /// </summary>

    std::vector<std::string>& getGroup();
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 创建时间。时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间。时间格式为UTC时间，YYYY-MM-DDTHH:MM:SSZ。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListSubscriptionUserResponseHttpEndpointInfo getHttp() const;
    bool httpIsSet() const;
    void unsethttp();
    void setHttp(const ListSubscriptionUserResponseHttpEndpointInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ListSubscriptionUserResponseHttpsEndpointInfo getHttps() const;
    bool httpsIsSet() const;
    void unsethttps();
    void setHttps(const ListSubscriptionUserResponseHttpsEndpointInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ListSubscriptionUserResponseSmsEndpointInfo getSms() const;
    bool smsIsSet() const;
    void unsetsms();
    void setSms(const ListSubscriptionUserResponseSmsEndpointInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ListSubscriptionUserResponseEmailEndpointInfo getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const ListSubscriptionUserResponseEmailEndpointInfo& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> group_;
    bool groupIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    ListSubscriptionUserResponseHttpEndpointInfo http_;
    bool httpIsSet_;
    ListSubscriptionUserResponseHttpsEndpointInfo https_;
    bool httpsIsSet_;
    ListSubscriptionUserResponseSmsEndpointInfo sms_;
    bool smsIsSet_;
    ListSubscriptionUserResponseEmailEndpointInfo email_;
    bool emailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_ListSubscriptionUserResponseItemInfo_H_
