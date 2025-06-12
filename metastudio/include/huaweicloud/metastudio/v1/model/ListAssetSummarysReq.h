
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListAssetSummarysReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListAssetSummarysReq_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListAssetSummarysReq
    : public ModelBase
{
public:
    ListAssetSummarysReq();
    virtual ~ListAssetSummarysReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetSummarysReq members

    /// <summary>
    /// 需要查询的资产ID。
    /// </summary>

    std::vector<std::string>& getAssetIds();
    bool assetIdsIsSet() const;
    void unsetassetIds();
    void setAssetIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> assetIds_;
    bool assetIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListAssetSummarysReq_H_
