
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowCcspClusterRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowCcspClusterRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowCcspClusterRequest
    : public ModelBase
{
public:
    ShowCcspClusterRequest();
    virtual ~ShowCcspClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCcspClusterRequest members

    /// <summary>
    /// 密码服务集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCcspClusterRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCcspClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowCcspClusterRequest_H_
