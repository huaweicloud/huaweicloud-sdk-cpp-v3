
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditOperateLogsRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditOperateLogsRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/OperateLogGetRequest.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditOperateLogsRequest
    : public ModelBase
{
public:
    ListAuditOperateLogsRequest();
    virtual ~ListAuditOperateLogsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditOperateLogsRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OperateLogGetRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const OperateLogGetRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    OperateLogGetRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAuditOperateLogsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAuditOperateLogsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditOperateLogsRequest_H_
