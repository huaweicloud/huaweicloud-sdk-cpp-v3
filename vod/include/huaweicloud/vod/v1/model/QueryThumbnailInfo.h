
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_QueryThumbnailInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_QueryThumbnailInfo_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/Thumbnail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 截图信息。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  QueryThumbnailInfo
    : public ModelBase
{
public:
    QueryThumbnailInfo();
    virtual ~QueryThumbnailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryThumbnailInfo members

    /// <summary>
    /// 截图任务 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Thumbnail getThumbnailPara() const;
    bool thumbnailParaIsSet() const;
    void unsetthumbnailPara();
    void setThumbnailPara(const Thumbnail& value);

    /// <summary>
    /// 视频截图个数。
    /// </summary>

    int32_t getThumbnailCount() const;
    bool thumbnailCountIsSet() const;
    void unsetthumbnailCount();
    void setThumbnailCount(int32_t value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    Thumbnail thumbnailPara_;
    bool thumbnailParaIsSet_;
    int32_t thumbnailCount_;
    bool thumbnailCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_QueryThumbnailInfo_H_
