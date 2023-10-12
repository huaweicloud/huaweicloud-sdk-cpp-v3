
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListDomainTrafficDetailResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListDomainTrafficDetailResponse_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v2/model/TrafficData.h>
#include <string>
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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListDomainTrafficDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDomainTrafficDetailResponse();
    virtual ~ListDomainTrafficDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainTrafficDetailResponse members

    /// <summary>
    /// 采样数据列表。
    /// </summary>

    std::vector<TrafficData>& getDataList();
    bool dataListIsSet() const;
    void unsetdataList();
    void setDataList(const std::vector<TrafficData>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<TrafficData> dataList_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListDomainTrafficDetailResponse_H_
