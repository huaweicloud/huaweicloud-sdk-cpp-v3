
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopIpsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopIpsResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/TopIpSummary.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListCdnDomainTopIpsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCdnDomainTopIpsResponse();
    virtual ~ListCdnDomainTopIpsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCdnDomainTopIpsResponse members

    /// <summary>
    /// 详情数据对象。
    /// </summary>

    std::vector<TopIpSummary>& getTopIpSummary();
    bool topIpSummaryIsSet() const;
    void unsettopIpSummary();
    void setTopIpSummary(const std::vector<TopIpSummary>& value);


protected:
    std::vector<TopIpSummary> topIpSummary_;
    bool topIpSummaryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopIpsResponse_H_
