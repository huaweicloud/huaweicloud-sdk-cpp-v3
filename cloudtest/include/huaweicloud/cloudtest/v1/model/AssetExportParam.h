
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssetExportParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssetExportParam_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AssetExportParam
    : public ModelBase
{
public:
    AssetExportParam();
    virtual ~AssetExportParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetExportParam members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 资产ID
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 父节点ID
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 因子列表
    /// </summary>

    std::vector<std::string>& getFactorIds();
    bool factorIdsIsSet() const;
    void unsetfactorIds();
    void setFactorIds(const std::vector<std::string>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::vector<std::string> factorIds_;
    bool factorIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssetExportParam_H_
