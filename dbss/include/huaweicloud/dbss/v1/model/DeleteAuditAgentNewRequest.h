
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteAuditAgentNewRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteAuditAgentNewRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  DeleteAuditAgentNewRequest
    : public ModelBase
{
public:
    DeleteAuditAgentNewRequest();
    virtual ~DeleteAuditAgentNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAuditAgentNewRequest members

    /// <summary>
    /// **参数解释**： 实例ID。可通过查询实例列表接口ID字段获取 **约束限制**： 不涉及 **取值范围**： 以查询实例列表接口值为准，字符长度32-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 审计Agent ID。可通过获取agent列表接口agent_id字段获取 **约束限制**： 不涉及 **取值范围**： 以获取agent列表接口agent_id值为准，字符长度16-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 数据库ID, 可在查询数据库列表接口ID字段获取。 **约束限制**： 不涉及 **取值范围**： 以查询数据库列表接口值为准，字符长度16-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string agentId_;
    bool agentIdIsSet_;
    std::string dbId_;
    bool dbIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAuditAgentNewRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAuditAgentNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteAuditAgentNewRequest_H_
