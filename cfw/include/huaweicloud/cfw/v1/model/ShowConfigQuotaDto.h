
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowConfigQuotaDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowConfigQuotaDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/ItemInfo.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  ShowConfigQuotaDto
    : public ModelBase
{
public:
    ShowConfigQuotaDto();
    virtual ~ShowConfigQuotaDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowConfigQuotaDto members

    /// <summary>
    /// 
    /// </summary>

    ItemInfo getItemInfo() const;
    bool itemInfoIsSet() const;
    void unsetitemInfo();
    void setItemInfo(const ItemInfo& value);

    /// <summary>
    /// **参数解释**： 防火墙成员最大配额 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getMaxQuota() const;
    bool maxQuotaIsSet() const;
    void unsetmaxQuota();
    void setMaxQuota(int32_t value);

    /// <summary>
    /// **参数解释**： 防火墙成员配额类型 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getQuotaType() const;
    bool quotaTypeIsSet() const;
    void unsetquotaType();
    void setQuotaType(const std::string& value);

    /// <summary>
    /// **参数解释**： 已使用配额 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getUsedQuota() const;
    bool usedQuotaIsSet() const;
    void unsetusedQuota();
    void setUsedQuota(int32_t value);


protected:
    ItemInfo itemInfo_;
    bool itemInfoIsSet_;
    int32_t maxQuota_;
    bool maxQuotaIsSet_;
    std::string quotaType_;
    bool quotaTypeIsSet_;
    int32_t usedQuota_;
    bool usedQuotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowConfigQuotaDto_H_
