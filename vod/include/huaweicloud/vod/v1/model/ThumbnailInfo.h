
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailInfo_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ThumbnailRsp.h>
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
/// 截图信息。  &gt; 仅当截图成功后才能查询到此信息，未截图、正在截图以及截图失败时，无此字段信息。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ThumbnailInfo
    : public ModelBase
{
public:
    ThumbnailInfo();
    virtual ~ThumbnailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThumbnailInfo members

    /// <summary>
    /// 视频截图信息。
    /// </summary>

    std::vector<ThumbnailRsp>& getSample();
    bool sampleIsSet() const;
    void unsetsample();
    void setSample(const std::vector<ThumbnailRsp>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<ThumbnailRsp>& getDots();
    bool dotsIsSet() const;
    void unsetdots();
    void setDots(const std::vector<ThumbnailRsp>& value);

    /// <summary>
    /// 执行情况描述。
    /// </summary>

    std::string getExecDesc() const;
    bool execDescIsSet() const;
    void unsetexecDesc();
    void setExecDesc(const std::string& value);

    /// <summary>
    /// 截图状态。  取值如下： - UN_THUMBNAIL：未截图 - THUMBNAILING：截图中 - THUMBNAIL_SUCCEED：截图成功 - THUMBNAIL_FAILED：截图失败
    /// </summary>

    std::string getThumbnailStatus() const;
    bool thumbnailStatusIsSet() const;
    void unsetthumbnailStatus();
    void setThumbnailStatus(const std::string& value);


protected:
    std::vector<ThumbnailRsp> sample_;
    bool sampleIsSet_;
    std::vector<ThumbnailRsp> dots_;
    bool dotsIsSet_;
    std::string execDesc_;
    bool execDescIsSet_;
    std::string thumbnailStatus_;
    bool thumbnailStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailInfo_H_
