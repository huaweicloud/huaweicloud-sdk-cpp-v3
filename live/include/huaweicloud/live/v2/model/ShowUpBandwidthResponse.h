
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowUpBandwidthResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowUpBandwidthResponse_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v2/model/V2BandwidthData.h>
#include <vector>

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
class HUAWEICLOUD_LIVE_V2_EXPORT  ShowUpBandwidthResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUpBandwidthResponse();
    virtual ~ShowUpBandwidthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowUpBandwidthResponse members

    /// <summary>
    /// 采样数据列表
    /// </summary>

    std::vector<V2BandwidthData>& getDataList();
    bool dataListIsSet() const;
    void unsetdataList();
    void setDataList(const std::vector<V2BandwidthData>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<V2BandwidthData> dataList_;
    bool dataListIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowUpBandwidthResponse_H_
