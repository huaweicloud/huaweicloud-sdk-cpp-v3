
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListUpgradePathsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListUpgradePathsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradePathsResult.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/VersionInfosResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListUpgradePathsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUpgradePathsResponse();
    virtual ~ListUpgradePathsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUpgradePathsResponse members

    /// <summary>
    /// **参数解释**: 版本信息详情 
    /// </summary>

    std::vector<VersionInfosResult>& getVersionInfos();
    bool versionInfosIsSet() const;
    void unsetversionInfos();
    void setVersionInfos(const std::vector<VersionInfosResult>& value);

    /// <summary>
    /// **参数解释**: 支持的升级路径列表 
    /// </summary>

    std::vector<UpgradePathsResult>& getVersionEdges();
    bool versionEdgesIsSet() const;
    void unsetversionEdges();
    void setVersionEdges(const std::vector<UpgradePathsResult>& value);


protected:
    std::vector<VersionInfosResult> versionInfos_;
    bool versionInfosIsSet_;
    std::vector<UpgradePathsResult> versionEdges_;
    bool versionEdgesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListUpgradePathsResponse_H_
