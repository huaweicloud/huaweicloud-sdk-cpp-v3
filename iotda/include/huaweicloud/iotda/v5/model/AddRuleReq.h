
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddRuleReq_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddRuleReq_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/RoutingRuleSubject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规则触发条件请求结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  AddRuleReq
    : public ModelBase
{
public:
    AddRuleReq();
    virtual ~AddRuleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddRuleReq members

    /// <summary>
    /// **参数说明**：规则名称。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义的规则描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RoutingRuleSubject getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const RoutingRuleSubject& value);

    /// <summary>
    /// **参数说明**：租户规则的生效范围，默认GLOBAL，。 **取值范围**： - GLOBAL：生效范围为租户级。 - APP：生效范围为资源空间级。如果类型为APP，创建的规则生效范围为携带的app_id指定的资源空间，不携带app_id则创建规则生效范围为[[默认资源空间](https://support.huaweicloud.com/usermanual-iothub/iot_01_0006.html#section0)](tag:hws)[[默认资源空间](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0006.html#section0)](tag:hws_hk)。
    /// </summary>

    std::string getAppType() const;
    bool appTypeIsSet() const;
    void unsetappType();
    void setAppType(const std::string& value);

    /// <summary>
    /// **参数说明**：资源空间ID。。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义sql select语句，最大长度2500，该参数仅供标准版和企业版用户使用。可填参数可参考帮助文档数据下各接口的请求参数，如notify_data.body。
    /// </summary>

    std::string getSelect() const;
    bool selectIsSet() const;
    void unsetselect();
    void setSelect(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义sql where语句，最大长度2500，该参数仅供标准版和企业版用户使用可填参数可参考帮助文档数据下各接口的请求参数，如notify_data.body。
    /// </summary>

    std::string getWhere() const;
    bool whereIsSet() const;
    void unsetwhere();
    void setWhere(const std::string& value);


protected:
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    RoutingRuleSubject subject_;
    bool subjectIsSet_;
    std::string appType_;
    bool appTypeIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string select_;
    bool selectIsSet_;
    std::string where_;
    bool whereIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_AddRuleReq_H_
