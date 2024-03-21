
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_StreamSelectionItem_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_StreamSelectionItem_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 从全量流中过滤出一个码率在[min, max]区间的流。如果不需要码率过滤可不选。
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  StreamSelectionItem
    : public ModelBase
{
public:
    StreamSelectionItem();
    virtual ~StreamSelectionItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StreamSelectionItem members

    /// <summary>
    /// 拉流URL中用于码率过滤的参数
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 最小码率，单位：bps 取值范围：0 - 104,857,600（100Mbps）
    /// </summary>

    int32_t getMaxBandwidth() const;
    bool maxBandwidthIsSet() const;
    void unsetmaxBandwidth();
    void setMaxBandwidth(int32_t value);

    /// <summary>
    /// 最小码率，单位：bps 取值范围：0 - 104,857,600（100Mbps）
    /// </summary>

    int32_t getMinBandwidth() const;
    bool minBandwidthIsSet() const;
    void unsetminBandwidth();
    void setMinBandwidth(int32_t value);


protected:
    std::string key_;
    bool keyIsSet_;
    int32_t maxBandwidth_;
    bool maxBandwidthIsSet_;
    int32_t minBandwidth_;
    bool minBandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_StreamSelectionItem_H_
