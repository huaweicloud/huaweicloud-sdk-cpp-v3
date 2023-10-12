
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ChangeFailoverModeResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ChangeFailoverModeResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ChangeFailoverModeResponse
    : public ModelBase, public HttpResponse
{
public:
    ChangeFailoverModeResponse();
    virtual ~ChangeFailoverModeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeFailoverModeResponse members

    /// <summary>
    /// 实例Id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 同步模式
    /// </summary>

    std::string getReplicationMode() const;
    bool replicationModeIsSet() const;
    void unsetreplicationMode();
    void setReplicationMode(const std::string& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getWorkflowId() const;
    bool workflowIdIsSet() const;
    void unsetworkflowId();
    void setWorkflowId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string replicationMode_;
    bool replicationModeIsSet_;
    std::string workflowId_;
    bool workflowIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ChangeFailoverModeResponse_H_
