
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SetAuditBackupSwitchRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SetAuditBackupSwitchRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/BackupSwitchRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SetAuditBackupSwitchRequest
    : public ModelBase
{
public:
    SetAuditBackupSwitchRequest();
    virtual ~SetAuditBackupSwitchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAuditBackupSwitchRequest members

    /// <summary>
    /// **参数解释**： 账户ID。 通过调用IAM服务[查询IAM用户详情]接口获取 **约束限制**： 不涉及 **取值范围**： 以IAM服务[查询IAM用户详情]接口值为准。 **默认取值**： 不涉及 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例ID。可通过查询实例列表接口ID字段获取 **约束限制**： 不涉及 **取值范围**： 以查询实例列表接口值为准，字符长度32-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BackupSwitchRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BackupSwitchRequest& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    BackupSwitchRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetAuditBackupSwitchRequest& dereference_from_shared_ptr(std::shared_ptr<SetAuditBackupSwitchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SetAuditBackupSwitchRequest_H_
