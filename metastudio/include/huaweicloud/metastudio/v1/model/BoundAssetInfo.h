
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BoundAssetInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BoundAssetInfo_H_


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
/// 绑定的资产信息。形象和声音训练完成后，资源会绑定到资产上。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BoundAssetInfo
    : public ModelBase
{
public:
    BoundAssetInfo();
    virtual ~BoundAssetInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BoundAssetInfo members

    /// <summary>
    /// 资产ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 资产名称。从资产库查询的资产名称
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BoundAssetInfo_H_
