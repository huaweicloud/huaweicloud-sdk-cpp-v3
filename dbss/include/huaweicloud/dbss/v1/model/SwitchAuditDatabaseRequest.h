
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SwitchAuditDatabaseRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SwitchAuditDatabaseRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/SwitchAuditDbRequest.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  SwitchAuditDatabaseRequest
    : public ModelBase
{
public:
    SwitchAuditDatabaseRequest();
    virtual ~SwitchAuditDatabaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchAuditDatabaseRequest members

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

    SwitchAuditDbRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SwitchAuditDbRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    SwitchAuditDbRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SwitchAuditDatabaseRequest& dereference_from_shared_ptr(std::shared_ptr<SwitchAuditDatabaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SwitchAuditDatabaseRequest_H_
