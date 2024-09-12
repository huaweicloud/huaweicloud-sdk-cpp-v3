
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Returned_segment_item_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Returned_segment_item_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/bson/Bson.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 采样段的起始终止主键对。
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Returned_segment_item
    : public ModelBase
{
public:
    Returned_segment_item();
    virtual ~Returned_segment_item();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Returned_segment_item members

    /// <summary>
    /// 采样段区间起始值。
    /// </summary>

    Document getSegmentMinKey() const;
    bool segmentMinKeyIsSet() const;
    void unsetsegmentMinKey();
    void setSegmentMinKey(const Document& value);

    /// <summary>
    /// 采样段区间终止值。
    /// </summary>

    Document getSegmentMaxKey() const;
    bool segmentMaxKeyIsSet() const;
    void unsetsegmentMaxKey();
    void setSegmentMaxKey(const Document& value);


protected:
    Document segmentMinKey_;
    bool segmentMinKeyIsSet_;
    Document segmentMaxKey_;
    bool segmentMaxKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Returned_segment_item_H_
