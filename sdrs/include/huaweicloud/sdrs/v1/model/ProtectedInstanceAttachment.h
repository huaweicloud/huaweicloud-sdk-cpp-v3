
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAttachment_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAttachment_H_

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
/// 保护实例挂载信息结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ProtectedInstanceAttachment
    : public ModelBase
{
public:
    ProtectedInstanceAttachment();
    virtual ~ProtectedInstanceAttachment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ProtectedInstanceAttachment members

    /// <summary>
    /// 复制对ID。
    /// </summary>

    std::string getReplication() const;
    bool replicationIsSet() const;
    void unsetreplication();
    void setReplication(const std::string& value);

    /// <summary>
    /// 挂载点。
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);


protected:
    std::string replication_;
    bool replicationIsSet_;
    std::string device_;
    bool deviceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAttachment_H_
