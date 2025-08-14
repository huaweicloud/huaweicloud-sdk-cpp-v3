
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateRoutingRuleResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateRoutingRuleResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateRoutingRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateRoutingRuleResponse();
    virtual ~UpdateRoutingRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRoutingRuleResponse members

    /// <summary>
    /// 规则触发条件ID，用于唯一标识一个规则触发条件，在创建规则条件时由物联网平台分配获得。
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 用户自定义的规则名称。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 用户自定义的规则描述。
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
    /// 租户规则的生效范围，取值如下： - GLOBAL：生效范围为租户级 - APP：生效范围为资源空间级。
    /// </summary>

    std::string getAppType() const;
    bool appTypeIsSet() const;
    void unsetappType();
    void setAppType(const std::string& value);

    /// <summary>
    /// 资源空间ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 用户自定义sql select语句，最大长度2500，该参数仅供标准版和企业版用户使用。
    /// </summary>

    std::string getSelect() const;
    bool selectIsSet() const;
    void unsetselect();
    void setSelect(const std::string& value);

    /// <summary>
    /// 用户自定义sql where语句，最大长度2500，该参数仅供标准版和企业版用户使用。
    /// </summary>

    std::string getWhere() const;
    bool whereIsSet() const;
    void unsetwhere();
    void setWhere(const std::string& value);

    /// <summary>
    /// 规则条件的状态是否为激活。
    /// </summary>

    bool isActive() const;
    bool activeIsSet() const;
    void unsetactive();
    void setActive(bool value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;
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
    bool active_;
    bool activeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateRoutingRuleResponse_H_
