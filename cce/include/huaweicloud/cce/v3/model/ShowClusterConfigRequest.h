
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowClusterConfigRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowClusterConfigRequest_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowClusterConfigRequest
    : public ModelBase
{
public:
    ShowClusterConfigRequest();
    virtual ~ShowClusterConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowClusterConfigRequest members

    /// <summary>
    /// 组件类型 , 合法取值为control，audit，system-addon。不填写则查询全部类型。 - control 控制面组件日志。 - audit 控制面审计日志。 - system-addon 系统插件日志。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowClusterConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ShowClusterConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowClusterConfigRequest_H_
