
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopPathResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopPathResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/TopPathSummary.h>
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
class HUAWEICLOUD_CDN_V2_EXPORT  ListCdnDomainTopPathResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCdnDomainTopPathResponse();
    virtual ~ListCdnDomainTopPathResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCdnDomainTopPathResponse members

    /// <summary>
    /// 详情数据对象。
    /// </summary>

    std::vector<TopPathSummary>& getTopPathSummary();
    bool topPathSummaryIsSet() const;
    void unsettopPathSummary();
    void setTopPathSummary(const std::vector<TopPathSummary>& value);


protected:
    std::vector<TopPathSummary> topPathSummary_;
    bool topPathSummaryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListCdnDomainTopPathResponse_H_
