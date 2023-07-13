
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSnapshotDataResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSnapshotDataResponse_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v2/model/SnapshotData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  ListSnapshotDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSnapshotDataResponse();
    virtual ~ListSnapshotDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSnapshotDataResponse members

    /// <summary>
    /// 采样数据列表。 
    /// </summary>

    std::vector<SnapshotData>& getSnapshotList();
    bool snapshotListIsSet() const;
    void unsetsnapshotList();
    void setSnapshotList(const std::vector<SnapshotData>& value);

    /// <summary>
    /// 指定时间区间内截图数量总和。
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<SnapshotData> snapshotList_;
    bool snapshotListIsSet_;
    int64_t total_;
    bool totalIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSnapshotDataResponse_H_
