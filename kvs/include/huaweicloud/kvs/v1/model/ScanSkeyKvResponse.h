
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  ScanSkeyKvResponse
    : public ModelBase, public HttpResponse
{
public:
    ScanSkeyKvResponse();
    virtual ~ScanSkeyKvResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ScanSkeyKvResponse members

    /// <summary>
    /// 返回的文档数量，为0不表示结束。 - 如果filtered_count超过500仍无匹配，则返回0。 -  长度：4
    /// </summary>

    int64_t getReturnedCount() const;
    bool returnedCountIsSet() const;
    void unsetreturnedCount();
    void setReturnedCount(int64_t value);

    /// <summary>
    /// 被过滤掉的文档数量。 - 长度：4
    /// </summary>

    int32_t getFilteredCount() const;
    bool filteredCountIsSet() const;
    void unsetfilteredCount();
    void setFilteredCount(int32_t value);

    /// <summary>
    /// 下次请求时的start_key。 &gt; 该值为空时，表示指定范围或者指定filter条件所有kv已经返回。
    /// </summary>

    Document getCursorSortKey() const;
    bool cursorSortKeyIsSet() const;
    void unsetcursorSortKey();
    void setCursorSortKey(const Document& value);

    /// <summary>
    /// 返回的kv列表，与scan_kv的kv_array相同。
    /// </summary>

    std::vector<Returned_kv_item>& getReturnedKvItems();
    bool returnedKvItemsIsSet() const;
    void unsetreturnedKvItems();
    void setReturnedKvItems(const std::vector<Returned_kv_item>& value);


protected:
    int64_t returnedCount_;
    bool returnedCountIsSet_;
    int32_t filteredCount_;
    bool filteredCountIsSet_;
    Document cursorSortKey_;
    bool cursorSortKeyIsSet_;
    std::vector<Returned_kv_item> returnedKvItems_;
    bool returnedKvItemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvResponse_H_
