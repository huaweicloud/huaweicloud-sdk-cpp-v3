
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_InheritConfigQuery_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_InheritConfigQuery_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 鉴权继承，为M3U8/MPD索引文件下的TS/MP4文件添加鉴权参数，解决因鉴权不通过导致的TS/MP4文件无法播放的问题。
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  InheritConfigQuery
    : public ModelBase
{
public:
    InheritConfigQuery();
    virtual ~InheritConfigQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InheritConfigQuery members

    /// <summary>
    /// 是否开启鉴权继承，on：开启,off：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 鉴权继承配置， m3u8：M3U8,mpd：MPD,“m3u8,mpd”。
    /// </summary>

    std::string getInheritType() const;
    bool inheritTypeIsSet() const;
    void unsetinheritType();
    void setInheritType(const std::string& value);

    /// <summary>
    /// 鉴权继承的文件类型时间, sys_time：当前系统时间，parent_url_time：与m3u8和mpd访问链接保持一致。
    /// </summary>

    std::string getInheritTimeType() const;
    bool inheritTimeTypeIsSet() const;
    void unsetinheritTimeType();
    void setInheritTimeType(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string inheritType_;
    bool inheritTypeIsSet_;
    std::string inheritTimeType_;
    bool inheritTimeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_InheritConfigQuery_H_
