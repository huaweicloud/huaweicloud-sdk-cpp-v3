
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_PlayInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_PlayInfo_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/MetaData.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  PlayInfo
    : public ModelBase
{
public:
    PlayInfo();
    virtual ~PlayInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PlayInfo members

    /// <summary>
    /// 播放协议类型。  取值如下： - hls - dash - mp4
    /// </summary>

    std::string getPlayType() const;
    bool playTypeIsSet() const;
    void unsetplayType();
    void setPlayType(const std::string& value);

    /// <summary>
    /// 播放URL。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 标记流是否已被加密。  取值如下： - 0：表示未加密。 - 1：表示已被加密。  默认值：0。
    /// </summary>

    int32_t getEncrypted() const;
    bool encryptedIsSet() const;
    void unsetencrypted();
    void setEncrypted(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    MetaData getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const MetaData& value);


protected:
    std::string playType_;
    bool playTypeIsSet_;
    std::string url_;
    bool urlIsSet_;
    int32_t encrypted_;
    bool encryptedIsSet_;
    MetaData metaData_;
    bool metaDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_PlayInfo_H_
