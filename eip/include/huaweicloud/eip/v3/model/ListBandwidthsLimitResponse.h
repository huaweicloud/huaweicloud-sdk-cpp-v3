
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListBandwidthsLimitResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListBandwidthsLimitResponse_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/ShowTenantDict.h>
#include <huaweicloud/eip/v3/model/PageInfoDict.h>
#include <string>
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
class HUAWEICLOUD_EIP_V3_EXPORT  ListBandwidthsLimitResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBandwidthsLimitResponse();
    virtual ~ListBandwidthsLimitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBandwidthsLimitResponse members

    /// <summary>
    /// 带宽限制列表
    /// </summary>

    std::vector<ShowTenantDict>& getEipBandwidthLimits();
    bool eipBandwidthLimitsIsSet() const;
    void unseteipBandwidthLimits();
    void setEipBandwidthLimits(const std::vector<ShowTenantDict>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDict getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDict& value);

    /// <summary>
    /// 本次请求编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<ShowTenantDict> eipBandwidthLimits_;
    bool eipBandwidthLimitsIsSet_;
    PageInfoDict pageInfo_;
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListBandwidthsLimitResponse_H_
