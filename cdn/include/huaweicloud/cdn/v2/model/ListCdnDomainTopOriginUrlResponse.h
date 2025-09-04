
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopOriginUrlResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopOriginUrlResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/TopOriginUrlSummary.h>
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
class HUAWEICLOUD_CDN_V2_EXPORT  ListCdnDomainTopOriginUrlResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCdnDomainTopOriginUrlResponse();
    virtual ~ListCdnDomainTopOriginUrlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCdnDomainTopOriginUrlResponse members

    /// <summary>
    /// 详情数据对象。
    /// </summary>

    std::vector<TopOriginUrlSummary>& getTopOriginUrlSummary();
    bool topOriginUrlSummaryIsSet() const;
    void unsettopOriginUrlSummary();
    void setTopOriginUrlSummary(const std::vector<TopOriginUrlSummary>& value);


protected:
    std::vector<TopOriginUrlSummary> topOriginUrlSummary_;
    bool topOriginUrlSummaryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopOriginUrlResponse_H_
