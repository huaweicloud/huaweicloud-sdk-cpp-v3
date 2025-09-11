
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListDbEncryptInstancesResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListDbEncryptInstancesResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/Cluster.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListDbEncryptInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDbEncryptInstancesResponse();
    virtual ~ListDbEncryptInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDbEncryptInstancesResponse members

    /// <summary>
    /// 实例列表
    /// </summary>

    std::vector<Cluster>& getClusters();
    bool clustersIsSet() const;
    void unsetclusters();
    void setClusters(const std::vector<Cluster>& value);


protected:
    std::vector<Cluster> clusters_;
    bool clustersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListDbEncryptInstancesResponse_H_
