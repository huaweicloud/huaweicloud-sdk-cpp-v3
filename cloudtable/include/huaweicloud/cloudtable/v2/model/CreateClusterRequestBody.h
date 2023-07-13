
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterRequestBody_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtable/v2/model/Cluster.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建集群发起的请求的请求体对象。
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  CreateClusterRequestBody
    : public ModelBase
{
public:
    CreateClusterRequestBody();
    virtual ~CreateClusterRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateClusterRequestBody members

    /// <summary>
    /// 
    /// </summary>

    Cluster getCluster() const;
    bool clusterIsSet() const;
    void unsetcluster();
    void setCluster(const Cluster& value);


protected:
    Cluster cluster_;
    bool clusterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterRequestBody_H_
