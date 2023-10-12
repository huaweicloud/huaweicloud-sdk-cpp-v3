
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_PreSplitKeyOptions_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_PreSplitKeyOptions_H_

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
/// 
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  PreSplitKeyOptions
    : public ModelBase
{
public:
    PreSplitKeyOptions();
    virtual ~PreSplitKeyOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// PreSplitKeyOptions members

    /// <summary>
    /// 
    /// </summary>

    int32_t getHashSplitNum() const;
    bool hashSplitNumIsSet() const;
    void unsethashSplitNum();
    void setHashSplitNum(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Document>& getRangeSplitPoints();
    bool rangeSplitPointsIsSet() const;
    void unsetrangeSplitPoints();
    void setRangeSplitPoints(const std::vector<Document>& value);


protected:
    int32_t hashSplitNum_;
    bool hashSplitNumIsSet_;
    std::vector<Document> rangeSplitPoints_;
    bool rangeSplitPointsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_PreSplitKeyOptions_H_
