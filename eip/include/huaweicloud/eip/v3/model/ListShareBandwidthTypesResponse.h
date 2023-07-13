
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListShareBandwidthTypesResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListShareBandwidthTypesResponse_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/PageInfoOption.h>
#include <vector>
#include <huaweicloud/eip/v3/model/ShareBandwidthTypeShowResp.h>

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
class HUAWEICLOUD_EIP_V3_EXPORT  ListShareBandwidthTypesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListShareBandwidthTypesResponse();
    virtual ~ListShareBandwidthTypesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListShareBandwidthTypesResponse members

    /// <summary>
    /// 功能说明：共享带宽类型对象
    /// </summary>

    std::vector<ShareBandwidthTypeShowResp>& getShareBandwidthTypes();
    bool shareBandwidthTypesIsSet() const;
    void unsetshareBandwidthTypes();
    void setShareBandwidthTypes(const std::vector<ShareBandwidthTypeShowResp>& value);

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoOption getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoOption& value);


protected:
    std::vector<ShareBandwidthTypeShowResp> shareBandwidthTypes_;
    bool shareBandwidthTypesIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
    PageInfoOption pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListShareBandwidthTypesResponse_H_
