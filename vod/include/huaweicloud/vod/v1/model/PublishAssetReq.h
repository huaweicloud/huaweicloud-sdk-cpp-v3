
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_PublishAssetReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_PublishAssetReq_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  PublishAssetReq
    : public ModelBase
{
public:
    PublishAssetReq();
    virtual ~PublishAssetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PublishAssetReq members

    /// <summary>
    /// 媒资ID。
    /// </summary>

    std::vector<std::string>& getAssetId();
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> assetId_;
    bool assetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_PublishAssetReq_H_
