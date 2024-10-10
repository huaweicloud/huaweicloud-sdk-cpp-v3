
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_FrequencyControlRule_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_FrequencyControlRule_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/Condition.h>
#include <string>
#include <huaweicloud/aad/v2/model/ActionInfo.h>
#include <vector>
#include <huaweicloud/aad/v2/model/TagCondition.h>

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
class HUAWEICLOUD_AAD_V2_EXPORT  FrequencyControlRule
    : public ModelBase
{
public:
    FrequencyControlRule();
    virtual ~FrequencyControlRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FrequencyControlRule members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 判断是否是智能cc生成的规则
    /// </summary>

    int32_t getProducer() const;
    bool producerIsSet() const;
    void unsetproducer();
    void setProducer(int32_t value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 规则应用的url
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 限速频率，单位为次，范围为1~2147483647
    /// </summary>

    std::string getLimitNum() const;
    bool limitNumIsSet() const;
    void unsetlimitNum();
    void setLimitNum(const std::string& value);

    /// <summary>
    /// 限速周期，单位为秒，范围1~3600
    /// </summary>

    std::string getLimitPeriod() const;
    bool limitPeriodIsSet() const;
    void unsetlimitPeriod();
    void setLimitPeriod(const std::string& value);

    /// <summary>
    /// 阻断时间，单位为秒，范围为0~65535
    /// </summary>

    std::string getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(const std::string& value);

    /// <summary>
    /// 限速模式：ip、cookie、header、other、policy、domain、url。 源限速：ip：IP限速，根据IP区分单个Web访问者。cookie：用户限速，根据Cookie键值区分单个Web访问者。header：用户限速，根据Header区分单个Web访问者。other：根据Referer（自定义请求访问的来源）字段区分单个Web访问者。-目的限速：policy: 策略限速、domain: 域名限速、url: url限速
    /// </summary>

    std::string getTagType() const;
    bool tagTypeIsSet() const;
    void unsettagType();
    void setTagType(const std::string& value);

    /// <summary>
    /// 用户标识，当限速模式为用户限速(cookie或header)时
    /// </summary>

    std::string getTagIndex() const;
    bool tagIndexIsSet() const;
    void unsettagIndex();
    void setTagIndex(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TagCondition getTagCondition() const;
    bool tagConditionIsSet() const;
    void unsettagCondition();
    void setTagCondition(const TagCondition& value);

    /// <summary>
    /// 
    /// </summary>

    ActionInfo getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const ActionInfo& value);

    /// <summary>
    /// cc规则防护模式，0：标准(老版本)，只支持对域名的防护路径做限制。1：高级(新版本)，支持对路径、IP、Cookie、Header、Params字段做限制。修改CC规则时必须传mode
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// cc规则防护规则限速条件
    /// </summary>

    std::vector<Condition>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<Condition>& value);

    /// <summary>
    /// 放行频率，单位为次，范围为0~2147483647
    /// </summary>

    int32_t getUnlockNum() const;
    bool unlockNumIsSet() const;
    void unsetunlockNum();
    void setUnlockNum(int32_t value);

    /// <summary>
    /// 域名聚合统计
    /// </summary>

    bool isDomainAggregation() const;
    bool domainAggregationIsSet() const;
    void unsetdomainAggregation();
    void setDomainAggregation(bool value);

    /// <summary>
    /// 全局计数
    /// </summary>

    bool isRegionAggregation() const;
    bool regionAggregationIsSet() const;
    void unsetregionAggregation();
    void setRegionAggregation(bool value);

    /// <summary>
    /// 锁定验证时间
    /// </summary>

    int32_t getCaptchaLockTime() const;
    bool captchaLockTimeIsSet() const;
    void unsetcaptchaLockTime();
    void setCaptchaLockTime(int32_t value);

    /// <summary>
    /// 是否灰度生效
    /// </summary>

    bool isGrayscaleTime() const;
    bool grayscaleTimeIsSet() const;
    void unsetgrayscaleTime();
    void setGrayscaleTime(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t producer_;
    bool producerIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string limitNum_;
    bool limitNumIsSet_;
    std::string limitPeriod_;
    bool limitPeriodIsSet_;
    std::string lockTime_;
    bool lockTimeIsSet_;
    std::string tagType_;
    bool tagTypeIsSet_;
    std::string tagIndex_;
    bool tagIndexIsSet_;
    TagCondition tagCondition_;
    bool tagConditionIsSet_;
    ActionInfo action_;
    bool actionIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::vector<Condition> conditions_;
    bool conditionsIsSet_;
    int32_t unlockNum_;
    bool unlockNumIsSet_;
    bool domainAggregation_;
    bool domainAggregationIsSet_;
    bool regionAggregation_;
    bool regionAggregationIsSet_;
    int32_t captchaLockTime_;
    bool captchaLockTimeIsSet_;
    bool grayscaleTime_;
    bool grayscaleTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_FrequencyControlRule_H_
