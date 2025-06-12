
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ModelInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ModelInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模型信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ModelInfo
    : public ModelBase
{
public:
    ModelInfo();
    virtual ~ModelInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModelInfo members

    /// <summary>
    /// 模型资产ID，可以从资产库中查询。
    /// </summary>

    std::string getModelAssetId() const;
    bool modelAssetIdIsSet() const;
    void unsetmodelAssetId();
    void setModelAssetId(const std::string& value);

    /// <summary>
    /// 资产名称
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// 主播轮换时备选主播数字人资产ID（仅形象资产，不包含音色），可以从资产库中查询。
    /// </summary>

    std::vector<std::string>& getBackupModelAssetIds();
    bool backupModelAssetIdsIsSet() const;
    void unsetbackupModelAssetIds();
    void setBackupModelAssetIds(const std::vector<std::string>& value);


protected:
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::vector<std::string> backupModelAssetIds_;
    bool backupModelAssetIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ModelInfo_H_
