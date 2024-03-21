
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_EndpointItem_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_EndpointItem_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/HlsPackageItem.h>
#include <huaweicloud/live/v1/model/MssPackageItem.h>
#include <huaweicloud/live/v1/model/DashPackageItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 拉流打包信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  EndpointItem
    : public ModelBase
{
public:
    EndpointItem();
    virtual ~EndpointItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndpointItem members

    /// <summary>
    /// HLS打包信息
    /// </summary>

    std::vector<HlsPackageItem>& getHlsPackage();
    bool hlsPackageIsSet() const;
    void unsethlsPackage();
    void setHlsPackage(const std::vector<HlsPackageItem>& value);

    /// <summary>
    /// DASH打包信息
    /// </summary>

    std::vector<DashPackageItem>& getDashPackage();
    bool dashPackageIsSet() const;
    void unsetdashPackage();
    void setDashPackage(const std::vector<DashPackageItem>& value);

    /// <summary>
    /// MSS打包信息
    /// </summary>

    std::vector<MssPackageItem>& getMssPackage();
    bool mssPackageIsSet() const;
    void unsetmssPackage();
    void setMssPackage(const std::vector<MssPackageItem>& value);


protected:
    std::vector<HlsPackageItem> hlsPackage_;
    bool hlsPackageIsSet_;
    std::vector<DashPackageItem> dashPackage_;
    bool dashPackageIsSet_;
    std::vector<MssPackageItem> mssPackage_;
    bool mssPackageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_EndpointItem_H_
