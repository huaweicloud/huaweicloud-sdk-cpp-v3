
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAllBucketsResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAllBucketsResponse_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsBucket.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListAllBucketsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAllBucketsResponse();
    virtual ~ListAllBucketsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllBucketsResponse members

    /// <summary>
    /// 桶列表
    /// </summary>

    std::vector<ObsBucket>& getBuckets();
    bool bucketsIsSet() const;
    void unsetbuckets();
    void setBuckets(const std::vector<ObsBucket>& value);


protected:
    std::vector<ObsBucket> buckets_;
    bool bucketsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListAllBucketsResponse_H_
