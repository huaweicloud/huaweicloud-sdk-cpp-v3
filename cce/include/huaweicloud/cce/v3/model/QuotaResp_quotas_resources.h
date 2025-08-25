
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_QuotaResp_quotas_resources_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_QuotaResp_quotas_resources_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  QuotaResp_quotas_resources
    : public ModelBase
{
public:
    QuotaResp_quotas_resources();
    virtual ~QuotaResp_quotas_resources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaResp_quotas_resources members

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 配额
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// 已使用量
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t used_;
    bool usedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_QuotaResp_quotas_resources_H_
