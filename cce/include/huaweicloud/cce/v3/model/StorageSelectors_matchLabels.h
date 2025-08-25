
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_StorageSelectors_matchLabels_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_StorageSelectors_matchLabels_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// evs盘的匹配字段，支持DataVolume中的size、volumeType、[iops、throughput、](tag:hws)metadataEncrypted、metadataCmkid、count字段。 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  StorageSelectors_matchLabels
    : public ModelBase
{
public:
    StorageSelectors_matchLabels();
    virtual ~StorageSelectors_matchLabels();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StorageSelectors_matchLabels members

    /// <summary>
    /// 匹配的磁盘大小，不填则无磁盘大小限制。例如：100.
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// 云硬盘类型，目前支持SSD\\GPSSD\\SAS\\ESSD\\SATA等。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 匹配的磁盘iops大小，不填则无磁盘iops大小限制。当需要选择GPSSD2或ESSD2类型磁盘时，配置iops来准确选择磁盘。例如：3000.
    /// </summary>

    std::string getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(const std::string& value);

    /// <summary>
    /// 匹配的磁盘吞吐量大小，不填则无磁盘吞吐量大小限制。当需要选择GPSSD2类型磁盘时，配置throughput来准确选择磁盘。例如：125.
    /// </summary>

    std::string getThroughput() const;
    bool throughputIsSet() const;
    void unsetthroughput();
    void setThroughput(const std::string& value);

    /// <summary>
    /// 磁盘加密标识符，0代表不加密，1代表加密。
    /// </summary>

    std::string getMetadataEncrypted() const;
    bool metadataEncryptedIsSet() const;
    void unsetmetadataEncrypted();
    void setMetadataEncrypted(const std::string& value);

    /// <summary>
    /// 加密磁盘的用户主密钥ID，长度为36字节的字符串。
    /// </summary>

    std::string getMetadataCmkid() const;
    bool metadataCmkidIsSet() const;
    void unsetmetadataCmkid();
    void setMetadataCmkid(const std::string& value);

    /// <summary>
    /// 磁盘选择个数，不填则选择所有此类磁盘。
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);


protected:
    std::string size_;
    bool sizeIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    std::string iops_;
    bool iopsIsSet_;
    std::string throughput_;
    bool throughputIsSet_;
    std::string metadataEncrypted_;
    bool metadataEncryptedIsSet_;
    std::string metadataCmkid_;
    bool metadataCmkidIsSet_;
    std::string count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_StorageSelectors_matchLabels_H_
