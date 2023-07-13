
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowTopUrlResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowTopUrlResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/TopUrlSummary.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowTopUrlResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTopUrlResponse();
    virtual ~ShowTopUrlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowTopUrlResponse members

    /// <summary>
    /// 服务区域。
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// 详情数据对象。
    /// </summary>

    std::vector<TopUrlSummary>& getTopUrlSummary();
    bool topUrlSummaryIsSet() const;
    void unsettopUrlSummary();
    void setTopUrlSummary(const std::vector<TopUrlSummary>& value);


protected:
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::vector<TopUrlSummary> topUrlSummary_;
    bool topUrlSummaryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowTopUrlResponse_H_
