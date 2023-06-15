
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowDomainResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowDomainResponse_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/DecoupledLiveDomainInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ShowDomainResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainResponse();
    virtual ~ShowDomainResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainResponse members

    /// <summary>
    /// 查询结果的总数量
    /// </summary>

    double getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(double value);

    /// <summary>
    /// 直播域名列表
    /// </summary>

    std::vector<DecoupledLiveDomainInfo>& getDomainInfo();
    bool domainInfoIsSet() const;
    void unsetdomainInfo();
    void setDomainInfo(const std::vector<DecoupledLiveDomainInfo>& value);


protected:
    double total_;
    bool totalIsSet_;
    std::vector<DecoupledLiveDomainInfo> domainInfo_;
    bool domainInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowDomainResponse_H_
