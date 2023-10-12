
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthPkgResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthPkgResponse_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/BandwidthPkgPage.h>
#include <huaweicloud/eip/v2/model/BandwidthPkgResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ListBandwidthPkgResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBandwidthPkgResponse();
    virtual ~ListBandwidthPkgResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBandwidthPkgResponse members

    /// <summary>
    /// bandwidthpkg对象列表
    /// </summary>

    std::vector<BandwidthPkgResp>& getBandwidthpkgs();
    bool bandwidthpkgsIsSet() const;
    void unsetbandwidthpkgs();
    void setBandwidthpkgs(const std::vector<BandwidthPkgResp>& value);

    /// <summary>
    /// 翻页展示
    /// </summary>

    std::vector<BandwidthPkgPage>& getBandwidthpkgsLinks();
    bool bandwidthpkgsLinksIsSet() const;
    void unsetbandwidthpkgsLinks();
    void setBandwidthpkgsLinks(const std::vector<BandwidthPkgPage>& value);


protected:
    std::vector<BandwidthPkgResp> bandwidthpkgs_;
    bool bandwidthpkgsIsSet_;
    std::vector<BandwidthPkgPage> bandwidthpkgsLinks_;
    bool bandwidthpkgsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListBandwidthPkgResponse_H_
