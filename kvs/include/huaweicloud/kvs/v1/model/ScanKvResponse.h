
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanKvResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanKvResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Returned_segment_item.h>
#include <huaweicloud/core/bson/Bson.h>
#include <vector>
#include <huaweicloud/kvs/v1/model/Returned_kv_item.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  ScanKvResponse
    : public ModelBase, public HttpResponse
{
public:
    ScanKvResponse();
    virtual ~ScanKvResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ScanKvResponse members

    /// <summary>
    /// 返回的文档数量，为0不表示结束。 &gt; 如果filtered_count超过500仍无匹配，则返回0。
    /// </summary>

    int32_t getReturnedCount() const;
    bool returnedCountIsSet() const;
    void unsetreturnedCount();
    void setReturnedCount(int32_t value);

    /// <summary>
    /// 被过滤掉的文档数量。
    /// </summary>

    int32_t getFilteredCount() const;
    bool filteredCountIsSet() const;
    void unsetfilteredCount();
    void setFilteredCount(int32_t value);

    /// <summary>
    /// 下次请求时的start_key，该值为空时，表示指定范围或者指定filter条件所有kv已经返回。
    /// </summary>

    Document getCursorKey() const;
    bool cursorKeyIsSet() const;
    void unsetcursorKey();
    void setCursorKey(const Document& value);

    /// <summary>
    /// 返回的kv数据。
    /// </summary>

    std::vector<Returned_kv_item>& getReturnedKvItems();
    bool returnedKvItemsIsSet() const;
    void unsetreturnedKvItems();
    void setReturnedKvItems(const std::vector<Returned_kv_item>& value);

    /// <summary>
    /// 采样段区间列表。
    /// </summary>

    std::vector<Returned_segment_item>& getReturnedSegmentItems();
    bool returnedSegmentItemsIsSet() const;
    void unsetreturnedSegmentItems();
    void setReturnedSegmentItems(const std::vector<Returned_segment_item>& value);


protected:
    int32_t returnedCount_;
    bool returnedCountIsSet_;
    int32_t filteredCount_;
    bool filteredCountIsSet_;
    Document cursorKey_;
    bool cursorKeyIsSet_;
    std::vector<Returned_kv_item> returnedKvItems_;
    bool returnedKvItemsIsSet_;
    std::vector<Returned_segment_item> returnedSegmentItems_;
    bool returnedSegmentItemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanKvResponse_H_
