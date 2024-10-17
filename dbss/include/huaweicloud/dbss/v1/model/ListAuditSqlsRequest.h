
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSqlsRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSqlsRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/AuditSqlRequest.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditSqlsRequest
    : public ModelBase
{
public:
    ListAuditSqlsRequest();
    virtual ~ListAuditSqlsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditSqlsRequest members

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

    AuditSqlRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AuditSqlRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    AuditSqlRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAuditSqlsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAuditSqlsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSqlsRequest_H_
