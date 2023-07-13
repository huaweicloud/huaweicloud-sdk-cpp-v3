
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_HbaseClusterActionReq_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_HbaseClusterActionReq_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  HbaseClusterActionReq
    : public ModelBase
{
public:
    HbaseClusterActionReq();
    virtual ~HbaseClusterActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HbaseClusterActionReq members

    /// <summary>
    /// 该请求参数内无其他内容，但是需要该参数作为重启集群入参，示例看下述所示
    /// </summary>

    Object getRestart() const;
    bool restartIsSet() const;
    void unsetrestart();
    void setRestart(const Object& value);


protected:
    Object restart_;
    bool restartIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_HbaseClusterActionReq_H_
