
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSparseBackupPolicyRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSparseBackupPolicyRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/UpdateSparseBackupPolicyReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateSparseBackupPolicyRequest
    : public ModelBase
{
public:
    UpdateSparseBackupPolicyRequest();
    virtual ~UpdateSparseBackupPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSparseBackupPolicyRequest members

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSparseBackupPolicyReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateSparseBackupPolicyReq& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    UpdateSparseBackupPolicyReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateSparseBackupPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateSparseBackupPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSparseBackupPolicyRequest_H_
