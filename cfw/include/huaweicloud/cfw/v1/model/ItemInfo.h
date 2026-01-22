
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ItemInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ItemInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ItemInfo
    : public ModelBase
{
public:
    ItemInfo();
    virtual ~ItemInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ItemInfo members

    /// <summary>
    /// **参数解释**： 最大配额 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getMaxQuota() const;
    bool maxQuotaIsSet() const;
    void unsetmaxQuota();
    void setMaxQuota(int32_t value);

    /// <summary>
    /// **参数解释**： 已使用配额 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getUsedQuota() const;
    bool usedQuotaIsSet() const;
    void unsetusedQuota();
    void setUsedQuota(int32_t value);

    /// <summary>
    /// **参数解释**： 额外参数，ACL和网络域名使用 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::map<std::string, std::string>& getExtrasInfo();
    bool extrasInfoIsSet() const;
    void unsetextrasInfo();
    void setExtrasInfo(const std::map<std::string, std::string>& value);


protected:
    int32_t maxQuota_;
    bool maxQuotaIsSet_;
    int32_t usedQuota_;
    bool usedQuotaIsSet_;
    std::map<std::string, std::string> extrasInfo_;
    bool extrasInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ItemInfo_H_
