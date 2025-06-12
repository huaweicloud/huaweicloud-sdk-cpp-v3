
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetActionResult_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetActionResult_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资产操作结果
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AssetActionResult
    : public ModelBase
{
public:
    AssetActionResult();
    virtual ~AssetActionResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetActionResult members

    /// <summary>
    /// 处理状态。 * SUCCESS：成功 * FAILED：失败
    /// </summary>

    std::string getRetStatus() const;
    bool retStatusIsSet() const;
    void unsetretStatus();
    void setRetStatus(const std::string& value);

    /// <summary>
    /// 资产ID列表
    /// </summary>

    std::vector<std::string>& getAssetIds();
    bool assetIdsIsSet() const;
    void unsetassetIds();
    void setAssetIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);


protected:
    std::string retStatus_;
    bool retStatusIsSet_;
    std::vector<std::string> assetIds_;
    bool assetIdsIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetActionResult_H_
