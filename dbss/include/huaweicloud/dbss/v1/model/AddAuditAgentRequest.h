
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddAuditAgentRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddAuditAgentRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/AuditAgentRequest.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  AddAuditAgentRequest
    : public ModelBase
{
public:
    AddAuditAgentRequest();
    virtual ~AddAuditAgentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddAuditAgentRequest members

    /// <summary>
    /// 实例ID。可在查询实例列表接口的ID字段获取。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AuditAgentRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AuditAgentRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    AuditAgentRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddAuditAgentRequest& dereference_from_shared_ptr(std::shared_ptr<AddAuditAgentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddAuditAgentRequest_H_
