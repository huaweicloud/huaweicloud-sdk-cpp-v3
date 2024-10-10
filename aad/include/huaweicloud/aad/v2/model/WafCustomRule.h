
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_WafCustomRule_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_WafCustomRule_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/WafCustomRuleAction.h>
#include <string>
#include <huaweicloud/aad/v2/model/WafCustomCondition.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  WafCustomRule
    : public ModelBase
{
public:
    WafCustomRule();
    virtual ~WafCustomRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WafCustomRule members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// name
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 精准防护规则生效时间。true-自定义生效时间，false-立即生效
    /// </summary>

    bool isTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(bool value);

    /// <summary>
    /// 精准防护规则生效的起始时间戳（秒）
    /// </summary>

    int64_t getStart() const;
    bool startIsSet() const;
    void unsetstart();
    void setStart(int64_t value);

    /// <summary>
    /// 精准防护规则生效的终止时间戳（秒）
    /// </summary>

    int64_t getTerminal() const;
    bool terminalIsSet() const;
    void unsetterminal();
    void setTerminal(int64_t value);

    /// <summary>
    /// 执行该规则的优先级，值越小，优先级越高。取值范围：0到1000。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// condition
    /// </summary>

    std::vector<WafCustomCondition>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<WafCustomCondition>& value);

    /// <summary>
    /// 
    /// </summary>

    WafCustomRuleAction getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const WafCustomRuleAction& value);

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 防护区域，0-大陆，1-海外
    /// </summary>

    int32_t getOverseasType() const;
    bool overseasTypeIsSet() const;
    void unsetoverseasType();
    void setOverseasType(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool time_;
    bool timeIsSet_;
    int64_t start_;
    bool startIsSet_;
    int64_t terminal_;
    bool terminalIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    std::vector<WafCustomCondition> conditions_;
    bool conditionsIsSet_;
    WafCustomRuleAction action_;
    bool actionIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    int32_t overseasType_;
    bool overseasTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_WafCustomRule_H_
