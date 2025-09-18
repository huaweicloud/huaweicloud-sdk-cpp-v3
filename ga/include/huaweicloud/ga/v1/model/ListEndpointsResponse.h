
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListEndpointsResponse_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListEndpointsResponse_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/EndpointDetail.h>
#include <string>
#include <huaweicloud/ga/v1/model/PageInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ListEndpointsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEndpointsResponse();
    virtual ~ListEndpointsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEndpointsResponse members

    /// <summary>
    /// 终端节点列表。
    /// </summary>

    std::vector<EndpointDetail>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<EndpointDetail>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);

    /// <summary>
    /// 请求ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<EndpointDetail> endpoints_;
    bool endpointsIsSet_;
    PageInfo pageInfo_;
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

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListEndpointsResponse_H_
