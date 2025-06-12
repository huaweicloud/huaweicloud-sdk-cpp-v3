
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BatchAssetActionReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BatchAssetActionReq_H_


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
/// 批量操作请求体
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BatchAssetActionReq
    : public ModelBase
{
public:
    BatchAssetActionReq();
    virtual ~BatchAssetActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAssetActionReq members

    /// <summary>
    /// 批量操作命令. * DELETE：删除 * DELETE_FORCE：强制删除，该模式会立即删除资产 * RESTORE：恢复 * UNACTIVE：取消激活 * ACTIVE：激活 * SHARE：共享 * UNSHARE：取消共享
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 资产ID列表
    /// </summary>

    std::vector<std::string>& getAssetIds();
    bool assetIdsIsSet() const;
    void unsetassetIds();
    void setAssetIds(const std::vector<std::string>& value);

    /// <summary>
    /// 操作参数
    /// </summary>

    std::string getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<std::string> assetIds_;
    bool assetIdsIsSet_;
    std::string params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BatchAssetActionReq_H_
