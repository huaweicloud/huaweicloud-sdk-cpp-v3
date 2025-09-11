
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_MaskRuleRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_MaskRuleRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  MaskRuleRequest
    : public ModelBase
{
public:
    MaskRuleRequest();
    virtual ~MaskRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MaskRuleRequest members

    /// <summary>
    /// 匹配正则
    /// </summary>

    std::string getMaskRegex() const;
    bool maskRegexIsSet() const;
    void unsetmaskRegex();
    void setMaskRegex(const std::string& value);

    /// <summary>
    /// 脱敏值
    /// </summary>

    std::string getMaskValue() const;
    bool maskValueIsSet() const;
    void unsetmaskValue();
    void setMaskValue(const std::string& value);

    /// <summary>
    /// 隐私数据保护规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);


protected:
    std::string maskRegex_;
    bool maskRegexIsSet_;
    std::string maskValue_;
    bool maskValueIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_MaskRuleRequest_H_
