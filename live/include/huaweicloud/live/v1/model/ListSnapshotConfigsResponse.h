
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListSnapshotConfigsResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListSnapshotConfigsResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/LiveSnapshotConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListSnapshotConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSnapshotConfigsResponse();
    virtual ~ListSnapshotConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotConfigsResponse members

    /// <summary>
    /// 总条目数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 截图配置
    /// </summary>

    std::vector<LiveSnapshotConfig>& getSnapshotConfigList();
    bool snapshotConfigListIsSet() const;
    void unsetsnapshotConfigList();
    void setSnapshotConfigList(const std::vector<LiveSnapshotConfig>& value);

    /// <summary>
    /// 每页记录数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<LiveSnapshotConfig> snapshotConfigList_;
    bool snapshotConfigListIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListSnapshotConfigsResponse_H_
