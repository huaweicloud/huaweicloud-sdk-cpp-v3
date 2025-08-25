
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowNodePoolRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowNodePoolRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowNodePoolRequest
    : public ModelBase
{
public:
    ShowNodePoolRequest();
    virtual ~ShowNodePoolRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNodePoolRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 节点池ID
    /// </summary>

    std::string getNodepoolId() const;
    bool nodepoolIdIsSet() const;
    void unsetnodepoolId();
    void setNodepoolId(const std::string& value);

    /// <summary>
    /// 集群状态兼容Error参数，用于API平滑切换。 兼容场景下，errorStatus为空则屏蔽Error状态为Deleting状态。
    /// </summary>

    std::string getErrorStatus() const;
    bool errorStatusIsSet() const;
    void unseterrorStatus();
    void setErrorStatus(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string nodepoolId_;
    bool nodepoolIdIsSet_;
    std::string errorStatus_;
    bool errorStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowNodePoolRequest& dereference_from_shared_ptr(std::shared_ptr<ShowNodePoolRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowNodePoolRequest_H_
