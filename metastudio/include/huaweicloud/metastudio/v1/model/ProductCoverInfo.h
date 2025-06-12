
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductCoverInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductCoverInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 商品封面信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ProductCoverInfo
    : public ModelBase
{
public:
    ProductCoverInfo();
    virtual ~ProductCoverInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductCoverInfo members

    /// <summary>
    /// 资产ID
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductCoverInfo_H_
