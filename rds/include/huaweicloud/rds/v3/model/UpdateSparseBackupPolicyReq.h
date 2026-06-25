
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSparseBackupPolicyReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSparseBackupPolicyReq_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SparseBackupPolicyForUpdate.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateSparseBackupPolicyReq
    : public ModelBase
{
public:
    UpdateSparseBackupPolicyReq();
    virtual ~UpdateSparseBackupPolicyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSparseBackupPolicyReq members

    /// <summary>
    /// 备份策略集
    /// </summary>

    std::vector<SparseBackupPolicyForUpdate>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<SparseBackupPolicyForUpdate>& value);


protected:
    std::vector<SparseBackupPolicyForUpdate> policies_;
    bool policiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSparseBackupPolicyReq_H_
