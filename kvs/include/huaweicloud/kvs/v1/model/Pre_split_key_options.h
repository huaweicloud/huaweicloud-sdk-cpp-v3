
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Pre_split_key_options_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Pre_split_key_options_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/bson/Bson.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 在hash分区时，预分裂分区数量。
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Pre_split_key_options
    : public ModelBase
{
public:
    Pre_split_key_options();
    virtual ~Pre_split_key_options();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Pre_split_key_options members

    /// <summary>
    /// 在hash分区时，预分裂分区数量。
    /// </summary>

    int32_t getHashCount() const;
    bool hashCountIsSet() const;
    void unsethashCount();
    void setHashCount(int32_t value);

    /// <summary>
    /// 在range分区模式有效，最大_1000_个，与\&quot;hash_count\&quot;二选一。
    /// </summary>

    std::vector<Document>& getRangeSplitPoints();
    bool rangeSplitPointsIsSet() const;
    void unsetrangeSplitPoints();
    void setRangeSplitPoints(const std::vector<Document>& value);


protected:
    int32_t hashCount_;
    bool hashCountIsSet_;
    std::vector<Document> rangeSplitPoints_;
    bool rangeSplitPointsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Pre_split_key_options_H_
