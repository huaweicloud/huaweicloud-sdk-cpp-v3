
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowOffSiteBackupPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowOffSiteBackupPolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/GetOffSiteBackupPolicy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowOffSiteBackupPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOffSiteBackupPolicyResponse();
    virtual ~ShowOffSiteBackupPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOffSiteBackupPolicyResponse members

    /// <summary>
    /// 备份策略对象，包括备份类型、备份保留天数、目标区域ID和目标project ID。
    /// </summary>

    std::vector<GetOffSiteBackupPolicy>& getPolicyPara();
    bool policyParaIsSet() const;
    void unsetpolicyPara();
    void setPolicyPara(const std::vector<GetOffSiteBackupPolicy>& value);


protected:
    std::vector<GetOffSiteBackupPolicy> policyPara_;
    bool policyParaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowOffSiteBackupPolicyResponse_H_
