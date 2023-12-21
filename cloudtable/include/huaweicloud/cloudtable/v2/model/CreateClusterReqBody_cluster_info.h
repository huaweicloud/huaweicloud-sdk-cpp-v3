
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterReqBody_cluster_info_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterReqBody_cluster_info_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtable/v2/model/CreateClusterInstanceBody.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群详情
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  CreateClusterReqBody_cluster_info
    : public ModelBase
{
public:
    CreateClusterReqBody_cluster_info();
    virtual ~CreateClusterReqBody_cluster_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateClusterReqBody_cluster_info members

    /// <summary>
    /// 特性属性开关      * 属性开关必须以enable开头，value必须为true|false      * doris: enable_broker      * hbase: storage_io_type（COMMON，ULTRAHIGH，两种取值），enable_open_tsdb（默认false，若为true需要在集群节点信息列表中指定tsd节点个数），enable_broker      示例：      \&quot;feature_map\&quot;:{\&quot;enable_broker\&quot;:\&quot;false\&quot;}       \&quot;feature_map\&quot;:{\&quot;enable_lemon\&quot;:\&quot;false\&quot;,\&quot;enable_open_tsdb\&quot;:\&quot;false\&quot;,\&quot;storage_io_type\&quot;: \&quot;COMMON\&quot;}
    /// </summary>

    std::map<std::string, std::string>& getFeatureMap();
    bool featureMapIsSet() const;
    void unsetfeatureMap();
    void setFeatureMap(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 集群节点信息类
    /// </summary>

    std::vector<CreateClusterInstanceBody>& getClusterInstanceInfo();
    bool clusterInstanceInfoIsSet() const;
    void unsetclusterInstanceInfo();
    void setClusterInstanceInfo(const std::vector<CreateClusterInstanceBody>& value);


protected:
    std::map<std::string, std::string> featureMap_;
    bool featureMapIsSet_;
    std::vector<CreateClusterInstanceBody> clusterInstanceInfo_;
    bool clusterInstanceInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterReqBody_cluster_info_H_
