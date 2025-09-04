
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopUasResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopUasResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/TopUaSummary.h>
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
class HUAWEICLOUD_CDN_V2_EXPORT  ListCdnDomainTopUasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCdnDomainTopUasResponse();
    virtual ~ListCdnDomainTopUasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCdnDomainTopUasResponse members

    /// <summary>
    /// 详情数据对象。
    /// </summary>

    std::vector<TopUaSummary>& getTopUaSummary();
    bool topUaSummaryIsSet() const;
    void unsettopUaSummary();
    void setTopUaSummary(const std::vector<TopUaSummary>& value);


protected:
    std::vector<TopUaSummary> topUaSummary_;
    bool topUaSummaryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopUasResponse_H_
