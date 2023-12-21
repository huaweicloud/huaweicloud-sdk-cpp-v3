
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetDailySummaryResult_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetDailySummaryResult_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  AssetDailySummaryResult
    : public ModelBase
{
public:
    AssetDailySummaryResult();
    virtual ~AssetDailySummaryResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetDailySummaryResult members

    /// <summary>
    /// 播放日期，格式为：yyyyMMdd000000。 
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);

    /// <summary>
    /// 日播放统计数据文件的下载地址，有效期为12个小时。  文件内容格式：[域名]\\t[媒资ID]\\t[日期]\\t[播放流量]\\t[播放次数]  播放次数统计说明： - HLS文件：访问M3U8文件时会统计播放次数，访问TS文件时不会统计播放次数。 - 其它文件：如MP4文件，当播放请求带有range且range的start参数不等于0时，不统计播放次数。其它情况下，会统计播放次数。
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);


protected:
    std::string date_;
    bool dateIsSet_;
    std::string link_;
    bool linkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetDailySummaryResult_H_
