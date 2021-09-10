
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateCoverByThumbnailReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateCoverByThumbnailReq_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateCoverByThumbnailReq
    : public ModelBase
{
public:
    UpdateCoverByThumbnailReq();
    virtual ~UpdateCoverByThumbnailReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateCoverByThumbnailReq members

    /// <summary>
    /// 截图文件的URL。  需要根据媒资ID调用[查询媒资详细信息](https://support.huaweicloud.com/api-vod/vod_04_0202.html)接口获取媒资的截图文件URL。
    /// </summary>

    std::string getThumbnailUrl() const;
    bool thumbnailUrlIsSet() const;
    void unsetthumbnailUrl();
    void setThumbnailUrl(const std::string& value);


protected:
    std::string thumbnailUrl_;
    bool thumbnailUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateCoverByThumbnailReq_H_
