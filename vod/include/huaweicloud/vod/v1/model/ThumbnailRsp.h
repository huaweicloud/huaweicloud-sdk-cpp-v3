
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailRsp_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailRsp_H_

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
/// 截图结果
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ThumbnailRsp
    : public ModelBase
{
public:
    ThumbnailRsp();
    virtual ~ThumbnailRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ThumbnailRsp members

    /// <summary>
    /// 截图在视频中的时间偏移，单位为秒。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 截图访问URL
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailRsp_H_
