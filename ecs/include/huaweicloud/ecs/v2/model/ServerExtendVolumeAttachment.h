
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerExtendVolumeAttachment_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerExtendVolumeAttachment_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 挂载到弹性云服务器上的磁盘。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ServerExtendVolumeAttachment
    : public ModelBase
{
public:
    ServerExtendVolumeAttachment();
    virtual ~ServerExtendVolumeAttachment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerExtendVolumeAttachment members

    /// <summary>
    /// 磁盘ID，格式为UUID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 删弹性云服务器时是否一并删除该磁盘。  - true：是 - false：否
    /// </summary>

    std::string getDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(const std::string& value);

    /// <summary>
    /// 启动标识，“0”代表启动盘，“-1“代表非启动盘。
    /// </summary>

    std::string getBootIndex() const;
    bool bootIndexIsSet() const;
    void unsetbootIndex();
    void setBootIndex(const std::string& value);

    /// <summary>
    /// 云硬盘挂载盘符，即磁盘挂载点。
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string deleteOnTermination_;
    bool deleteOnTerminationIsSet_;
    std::string bootIndex_;
    bool bootIndexIsSet_;
    std::string device_;
    bool deviceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerExtendVolumeAttachment_H_
