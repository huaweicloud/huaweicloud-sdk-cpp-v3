
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWdrSnapshotsCollectResultsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWdrSnapshotsCollectResultsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbforopengauss/v3/model/CollectedWdrSnapshotInfoResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListWdrSnapshotsCollectResultsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWdrSnapshotsCollectResultsResponse();
    virtual ~ListWdrSnapshotsCollectResultsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWdrSnapshotsCollectResultsResponse members

    /// <summary>
    /// **参数解释**： 总记录数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**： WDR快照信息列表。
    /// </summary>

    std::vector<CollectedWdrSnapshotInfoResult>& getWdrSnapshots();
    bool wdrSnapshotsIsSet() const;
    void unsetwdrSnapshots();
    void setWdrSnapshots(const std::vector<CollectedWdrSnapshotInfoResult>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<CollectedWdrSnapshotInfoResult> wdrSnapshots_;
    bool wdrSnapshotsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWdrSnapshotsCollectResultsResponse_H_
