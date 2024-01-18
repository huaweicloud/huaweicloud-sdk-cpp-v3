
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopRefersResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopRefersResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/TopReferSummary.h>
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
class HUAWEICLOUD_CDN_V2_EXPORT  ListCdnDomainTopRefersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCdnDomainTopRefersResponse();
    virtual ~ListCdnDomainTopRefersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCdnDomainTopRefersResponse members

    /// <summary>
    /// 详情数据对象。
    /// </summary>

    std::vector<TopReferSummary>& getTopReferSummary();
    bool topReferSummaryIsSet() const;
    void unsettopReferSummary();
    void setTopReferSummary(const std::vector<TopReferSummary>& value);


protected:
    std::vector<TopReferSummary> topReferSummary_;
    bool topReferSummaryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopRefersResponse_H_
