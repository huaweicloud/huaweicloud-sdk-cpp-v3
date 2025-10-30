
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_HlsPackageItem_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_HlsPackageItem_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/PackageRequestArgs.h>
#include <huaweicloud/live/v1/model/StreamSelectionItem.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/live/v1/model/HttpHeader.h>
#include <string>
#include <huaweicloud/live/v1/model/Encryption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// HLS频道出流信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  HlsPackageItem
    : public ModelBase
{
public:
    HlsPackageItem();
    virtual ~HlsPackageItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HlsPackageItem members

    /// <summary>
    /// 客户自定义的拉流地址，包括方法、域名、路径
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 从全量流中过滤出一个码率在[min, max]区间的流。如果不需要码率过滤可不选。
    /// </summary>

    std::vector<StreamSelectionItem>& getStreamSelection();
    bool streamSelectionIsSet() const;
    void unsetstreamSelection();
    void setStreamSelection(const std::vector<StreamSelectionItem>& value);

    /// <summary>
    /// HLS版本号
    /// </summary>

    std::string getHlsVersion() const;
    bool hlsVersionIsSet() const;
    void unsethlsVersion();
    void setHlsVersion(const std::string& value);

    /// <summary>
    /// 频道输出分片的时长，为必选项  单位：秒。取值范围：1-10 &gt; 修改分片时长会影响已录制内容的时移和回看服务，请谨慎修改！
    /// </summary>

    int32_t getSegmentDurationSeconds() const;
    bool segmentDurationSecondsIsSet() const;
    void unsetsegmentDurationSeconds();
    void setSegmentDurationSeconds(int32_t value);

    /// <summary>
    /// 频道直播返回分片的窗口长度，为频道输出分片的时长乘以数量后得到的值。实际返回的分片数不小于3个。  单位：秒。取值范围：0 - 86400（24小时转化成秒后的取值）
    /// </summary>

    int32_t getPlaylistWindowSeconds() const;
    bool playlistWindowSecondsIsSet() const;
    void unsetplaylistWindowSeconds();
    void setPlaylistWindowSeconds(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Encryption getEncryption() const;
    bool encryptionIsSet() const;
    void unsetencryption();
    void setEncryption(const Encryption& value);

    /// <summary>
    /// 广告配置
    /// </summary>

    Object getAds() const;
    bool adsIsSet() const;
    void unsetads();
    void setAds(const Object& value);

    /// <summary>
    /// 其他额外参数
    /// </summary>

    Object getExtArgs() const;
    bool extArgsIsSet() const;
    void unsetextArgs();
    void setExtArgs(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    PackageRequestArgs getRequestArgs() const;
    bool requestArgsIsSet() const;
    void unsetrequestArgs();
    void setRequestArgs(const PackageRequestArgs& value);

    /// <summary>
    /// 广告标识。  HLS取值：[\&quot;ENHANCED_SCTE35\&quot;]。 
    /// </summary>

    std::vector<std::string>& getAdMarker();
    bool adMarkerIsSet() const;
    void unsetadMarker();
    void setAdMarker(const std::vector<std::string>& value);

    /// <summary>
    /// 当频道mode是ONLY_OS类型时，允许本输出可以直接从源站拉流，默认：false true：允许output访问 false：禁止output访问
    /// </summary>

    bool isEnableAccess() const;
    bool enableAccessIsSet() const;
    void unsetenableAccess();
    void setEnableAccess(bool value);

    /// <summary>
    /// 是否放通所有的IP访问，默认：false true：允许所有的IP地址访问，ip_whitelist配置不生效 false：不允许所有的IP地址访问，ip_whitelist生效，仅在ip_whitelist配置的ip地址才能访问
    /// </summary>

    bool isAllowAllIpAccess() const;
    bool allowAllIpAccessIsSet() const;
    void unsetallowAllIpAccess();
    void setAllowAllIpAccess(bool value);

    /// <summary>
    /// 当频道类型mode是ONLY_OS类型时，允许直接从源站拉流的IP白名单
    /// </summary>

    std::string getIpWhitelist() const;
    bool ipWhitelistIsSet() const;
    void unsetipWhitelist();
    void setIpWhitelist(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HttpHeader getCdnIdentifierHeader() const;
    bool cdnIdentifierHeaderIsSet() const;
    void unsetcdnIdentifierHeader();
    void setCdnIdentifierHeader(const HttpHeader& value);

    /// <summary>
    /// 源站分发域名-主region 跟CreateOttChannelInfoReq.region一致 满足正则：^(\\[a-zA-Z0-9]([a-zA-Z0-9\\-]{0,61}[a-zA-Z0-9])?\\.){2,}[a-zA-Z]{2,16}$ 最大长度255
    /// </summary>

    std::string getOriginDomainMaster() const;
    bool originDomainMasterIsSet() const;
    void unsetoriginDomainMaster();
    void setOriginDomainMaster(const std::string& value);

    /// <summary>
    /// 源站分发域名-备region 满足正则：^(\\[a-zA-Z0-9]([a-zA-Z0-9\\-]{0,61}[a-zA-Z0-9])?\\.){2,}[a-zA-Z]{2,16}$ 最大长度255
    /// </summary>

    std::string getOriginDomainSlave() const;
    bool originDomainSlaveIsSet() const;
    void unsetoriginDomainSlave();
    void setOriginDomainSlave(const std::string& value);

    /// <summary>
    /// output的索引文件名字 默认：index 长度：0-128 字符集：大小写字母、数字、\&quot;-\&quot;、\&quot;.\&quot;、\&quot;_\&quot;，不能有/路径
    /// </summary>

    std::string getManifestName() const;
    bool manifestNameIsSet() const;
    void unsetmanifestName();
    void setManifestName(const std::string& value);

    /// <summary>
    /// 客户自定义的拉流地址，包括方法、域名、路径
    /// </summary>

    std::string getSlaveUrl() const;
    bool slaveUrlIsSet() const;
    void unsetslaveUrl();
    void setSlaveUrl(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    std::vector<StreamSelectionItem> streamSelection_;
    bool streamSelectionIsSet_;
    std::string hlsVersion_;
    bool hlsVersionIsSet_;
    int32_t segmentDurationSeconds_;
    bool segmentDurationSecondsIsSet_;
    int32_t playlistWindowSeconds_;
    bool playlistWindowSecondsIsSet_;
    Encryption encryption_;
    bool encryptionIsSet_;
    Object ads_;
    bool adsIsSet_;
    Object extArgs_;
    bool extArgsIsSet_;
    PackageRequestArgs requestArgs_;
    bool requestArgsIsSet_;
    std::vector<std::string> adMarker_;
    bool adMarkerIsSet_;
    bool enableAccess_;
    bool enableAccessIsSet_;
    bool allowAllIpAccess_;
    bool allowAllIpAccessIsSet_;
    std::string ipWhitelist_;
    bool ipWhitelistIsSet_;
    HttpHeader cdnIdentifierHeader_;
    bool cdnIdentifierHeaderIsSet_;
    std::string originDomainMaster_;
    bool originDomainMasterIsSet_;
    std::string originDomainSlave_;
    bool originDomainSlaveIsSet_;
    std::string manifestName_;
    bool manifestNameIsSet_;
    std::string slaveUrl_;
    bool slaveUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_HlsPackageItem_H_
