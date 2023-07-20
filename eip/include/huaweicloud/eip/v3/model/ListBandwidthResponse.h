
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListBandwidthResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListBandwidthResponse_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/PageInfoOption.h>
#include <huaweicloud/eip/v3/model/BandwidthResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ListBandwidthResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBandwidthResponse();
    virtual ~ListBandwidthResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListBandwidthResponse members

    /// <summary>
    /// 带宽列表对象
    /// </summary>

    std::vector<BandwidthResponseBody>& getEipBandwidths();
    bool eipBandwidthsIsSet() const;
    void unseteipBandwidths();
    void setEipBandwidths(const std::vector<BandwidthResponseBody>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoOption getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoOption& value);

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<BandwidthResponseBody> eipBandwidths_;
    bool eipBandwidthsIsSet_;
    PageInfoOption pageInfo_;
    bool pageInfoIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListBandwidthResponse_H_
