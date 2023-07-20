
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SwitchSecondLevelMonitoringRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SwitchSecondLevelMonitoringRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/SwitchSecondLevelMonitoringRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  SwitchSecondLevelMonitoringRequest
    : public ModelBase
{
public:
    SwitchSecondLevelMonitoringRequest();
    virtual ~SwitchSecondLevelMonitoringRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SwitchSecondLevelMonitoringRequest members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SwitchSecondLevelMonitoringRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SwitchSecondLevelMonitoringRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    SwitchSecondLevelMonitoringRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SwitchSecondLevelMonitoringRequest& dereference_from_shared_ptr(std::shared_ptr<SwitchSecondLevelMonitoringRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SwitchSecondLevelMonitoringRequest_H_
