
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreatePreheatingAssetReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreatePreheatingAssetReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  CreatePreheatingAssetReq
    : public ModelBase
{
public:
    CreatePreheatingAssetReq();
    virtual ~CreatePreheatingAssetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePreheatingAssetReq members

    /// <summary>
    /// 已发布媒资的ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 已发布媒资的播放URL列表，一次最多只能预热10个URL。
    /// </summary>

    std::vector<std::string>& getUrls();
    bool urlsIsSet() const;
    void unseturls();
    void setUrls(const std::vector<std::string>& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::vector<std::string> urls_;
    bool urlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreatePreheatingAssetReq_H_
