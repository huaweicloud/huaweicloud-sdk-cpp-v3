
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetOffSiteBackupPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetOffSiteBackupPolicyRequestBody_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/OffSiteBackupPolicy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetOffSiteBackupPolicyRequestBody
    : public ModelBase
{
public:
    SetOffSiteBackupPolicyRequestBody();
    virtual ~SetOffSiteBackupPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SetOffSiteBackupPolicyRequestBody members

    /// <summary>
    /// 备份策略对象，包括备份类型、备份保留天数、目标区域ID和目标project ID。
    /// </summary>

    std::vector<OffSiteBackupPolicy>& getPolicyPara();
    bool policyParaIsSet() const;
    void unsetpolicyPara();
    void setPolicyPara(const std::vector<OffSiteBackupPolicy>& value);


protected:
    std::vector<OffSiteBackupPolicy> policyPara_;
    bool policyParaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetOffSiteBackupPolicyRequestBody_H_
