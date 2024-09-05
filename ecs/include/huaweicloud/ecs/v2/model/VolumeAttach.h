
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_VolumeAttach_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_VolumeAttach_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 云服务器挂载磁盘信息。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  VolumeAttach
    : public ModelBase
{
public:
    VolumeAttach();
    virtual ~VolumeAttach();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeAttach members

    /// <summary>
    /// 云磁盘ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 一个标志，指示在删除服务器时是否删除附加的卷。 默认情况下，这是False
    /// </summary>

    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);

    /// <summary>
    /// 挂载点
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);

    /// <summary>
    /// 盘在云服务器上的挂载顺序，0表示启动盘。
    /// </summary>

    std::string getBootIndex() const;
    bool bootIndexIsSet() const;
    void unsetbootIndex();
    void setBootIndex(const std::string& value);

    /// <summary>
    /// 云盘大小（单位：GB）。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;
    std::string device_;
    bool deviceIsSet_;
    std::string bootIndex_;
    bool bootIndexIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_VolumeAttach_H_
