
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadMetaDataByUrlResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadMetaDataByUrlResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/UploadAsset.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  UploadMetaDataByUrlResponse
    : public ModelBase, public HttpResponse
{
public:
    UploadMetaDataByUrlResponse();
    virtual ~UploadMetaDataByUrlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadMetaDataByUrlResponse members

    /// <summary>
    /// 待拉取创建的媒资元数据
    /// </summary>

    std::vector<UploadAsset>& getUploadAssets();
    bool uploadAssetsIsSet() const;
    void unsetuploadAssets();
    void setUploadAssets(const std::vector<UploadAsset>& value);


protected:
    std::vector<UploadAsset> uploadAssets_;
    bool uploadAssetsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadMetaDataByUrlResponse_H_
