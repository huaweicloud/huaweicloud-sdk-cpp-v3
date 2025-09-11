
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ShowInstanceTaskRequest_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ShowInstanceTaskRequest_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  ShowInstanceTaskRequest
    : public ModelBase
{
public:
    ShowInstanceTaskRequest();
    virtual ~ShowInstanceTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceTaskRequest members

    /// <summary>
    /// **参数说明**：实例ID。 **取值范围**：长度不超过36，由小写字母[a-f]、数字、连接符（-）的组成。 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 任务Id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowInstanceTaskRequest& dereference_from_shared_ptr(std::shared_ptr<ShowInstanceTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ShowInstanceTaskRequest_H_
