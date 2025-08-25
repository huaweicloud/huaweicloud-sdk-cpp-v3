
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/UpgradeClusterRequestBody.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeClusterRequest
    : public ModelBase
{
public:
    UpgradeClusterRequest();
    virtual ~UpgradeClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeClusterRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeClusterRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpgradeClusterRequestBody& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    UpgradeClusterRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpgradeClusterRequest& dereference_from_shared_ptr(std::shared_ptr<UpgradeClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeClusterRequest_H_
