
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ListClustersResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ListClustersResponse_H_

#include <huaweicloud/cloudtable/v2/CloudtableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtable/v2/model/ClusterDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  ListClustersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListClustersResponse();
    virtual ~ListClustersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListClustersResponse members

    /// <summary>
    /// 查询到的集群详细列表，每个json体表示一个集群的详情。
    /// </summary>

    std::vector<ClusterDetail>& getClusters();
    bool clustersIsSet() const;
    void unsetclusters();
    void setClusters(const std::vector<ClusterDetail>& value);

    /// <summary>
    /// 查询到的集群数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<ClusterDetail> clusters_;
    bool clustersIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ListClustersResponse_H_
