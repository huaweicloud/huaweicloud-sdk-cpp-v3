
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAgentNewRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAgentNewRequest_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditAgentNewRequest
    : public ModelBase
{
public:
    ListAuditAgentNewRequest();
    virtual ~ListAuditAgentNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditAgentNewRequest members

    /// <summary>
    /// **参数解释**： 实例ID。可通过查询实例列表接口ID字段获取 **约束限制**： 不涉及 **取值范围**： 以查询实例列表接口值为准，字符长度32-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

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
    std::string dbId_;
    bool dbIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAuditAgentNewRequest& dereference_from_shared_ptr(std::shared_ptr<ListAuditAgentNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAgentNewRequest_H_
