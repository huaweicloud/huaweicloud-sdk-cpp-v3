
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAttachReplicationRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAttachReplicationRequestParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 保护实例挂载复制对请求数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ProtectedInstanceAttachReplicationRequestParams
    : public ModelBase
{
public:
    ProtectedInstanceAttachReplicationRequestParams();
    virtual ~ProtectedInstanceAttachReplicationRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectedInstanceAttachReplicationRequestParams members

    /// <summary>
    /// 复制对的ID。
    /// </summary>

    std::string getReplicationId() const;
    bool replicationIdIsSet() const;
    void unsetreplicationId();
    void setReplicationId(const std::string& value);

    /// <summary>
    /// 复制对中使用的磁盘挂载点。  说明:新增加的磁盘挂载点不能和已有的磁盘挂载点相同。 对于采用XEN虚拟化类型的弹性云服务器组成的保护实例，系统盘挂载点请指定/dev/sda；数据盘挂载点请按英文字母顺序依次指定，如/dev/sdb，/dev/sdc，如果指定了以“/dev/vd”开头的挂载点，系统默认改为“/dev/sd”。对于采用KVM虚拟化类型的弹性云服务器组成的保护实例，系统盘挂载点请指定/dev/vda；数据盘挂载点请按英文字母顺序依次指定，如/dev/vdb，/dev/vdc，如果指定了以“/dev/sd”开头的挂载点，系统默认改为“/dev/vd”。
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);


protected:
    std::string replicationId_;
    bool replicationIdIsSet_;
    std::string device_;
    bool deviceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAttachReplicationRequestParams_H_
