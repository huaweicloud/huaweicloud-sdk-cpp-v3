
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAutopilotClusterRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAutopilotClusterRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AutopilotClusterInformation.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateAutopilotClusterRequest
    : public ModelBase
{
public:
    UpdateAutopilotClusterRequest();
    virtual ~UpdateAutopilotClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAutopilotClusterRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群状态兼容Error参数，用于API平滑切换。 兼容场景下，errorStatus为空则屏蔽Error状态为Deleting状态。
    /// </summary>

    std::string getErrorStatus() const;
    bool errorStatusIsSet() const;
    void unseterrorStatus();
    void setErrorStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AutopilotClusterInformation getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AutopilotClusterInformation& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string errorStatus_;
    bool errorStatusIsSet_;
    AutopilotClusterInformation body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAutopilotClusterRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAutopilotClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateAutopilotClusterRequest_H_
