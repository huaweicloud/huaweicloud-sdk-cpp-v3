
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetOffSiteBackupPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetOffSiteBackupPolicyRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/OffSiteBackupPolicy.h>

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
    /// 
    /// </summary>

    OffSiteBackupPolicy getPolicyPara() const;
    bool policyParaIsSet() const;
    void unsetpolicyPara();
    void setPolicyPara(const OffSiteBackupPolicy& value);


protected:
    OffSiteBackupPolicy policyPara_;
    bool policyParaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetOffSiteBackupPolicyRequestBody_H_
