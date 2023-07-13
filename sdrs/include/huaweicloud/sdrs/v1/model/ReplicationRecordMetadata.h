
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReplicationRecordMetadata_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReplicationRecordMetadata_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 复制对元数据
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ReplicationRecordMetadata
    : public ModelBase
{
public:
    ReplicationRecordMetadata();
    virtual ~ReplicationRecordMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReplicationRecordMetadata members

    /// <summary>
    /// 复制对中的云硬盘是否为共享云硬盘。
    /// </summary>

    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);

    /// <summary>
    /// 复制对中的云硬盘是否为系统盘。
    /// </summary>

    bool isBootable() const;
    bool bootableIsSet() const;
    void unsetbootable();
    void setBootable(bool value);

    /// <summary>
    /// 复制对中的云硬盘容量。单位：GB
    /// </summary>

    int32_t getVolumeSize() const;
    bool volumeSizeIsSet() const;
    void unsetvolumeSize();
    void setVolumeSize(int32_t value);

    /// <summary>
    /// 复制对中的云硬盘类型。SATA：普通IO磁盘类型。SAS：高IO磁盘类型。SSD：超高IO磁盘类型。co-p1：高IO（性能优化I型）uh-l1：超高IO（时延优化）其中co-p1和uh-l1两种云硬盘只能使用在HANA云服务器、HL1型云服务器、HL2型云服务器上。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);


protected:
    bool multiattach_;
    bool multiattachIsSet_;
    bool bootable_;
    bool bootableIsSet_;
    int32_t volumeSize_;
    bool volumeSizeIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReplicationRecordMetadata_H_
