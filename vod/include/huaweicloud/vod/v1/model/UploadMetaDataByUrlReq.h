
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadMetaDataByUrlReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadMetaDataByUrlReq_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/UploadMetaDataByUrl.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  UploadMetaDataByUrlReq
    : public ModelBase
{
public:
    UploadMetaDataByUrlReq();
    virtual ~UploadMetaDataByUrlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UploadMetaDataByUrlReq members

    /// <summary>
    /// 待拉取创建的媒资元数据
    /// </summary>

    std::vector<UploadMetaDataByUrl>& getUploadMetadatas();
    bool uploadMetadatasIsSet() const;
    void unsetuploadMetadatas();
    void setUploadMetadatas(const std::vector<UploadMetaDataByUrl>& value);


protected:
    std::vector<UploadMetaDataByUrl> uploadMetadatas_;
    bool uploadMetadatasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadMetaDataByUrlReq_H_
