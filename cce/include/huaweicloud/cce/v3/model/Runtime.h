
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Runtime_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Runtime_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Runtime
    : public ModelBase
{
public:
    Runtime();
    virtual ~Runtime();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Runtime members

    /// <summary>
    /// 容器运行时，默认场景： - v1.25以下集群：默认为\&quot;docker\&quot; - v1.25及以上集群，随操作系统变化，默认的容器运行时不同：操作系统为EulerOS 2.5[、EulerOS 2.8](tag:hws,hws_hk)的节点默认为\&quot;docker\&quot;，其余操作系统的节点默认为\&quot;containerd\&quot; 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Runtime_H_
