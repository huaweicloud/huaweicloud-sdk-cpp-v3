
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReplicationAttachment_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReplicationAttachment_H_


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
/// 复制对挂载信息数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ReplicationAttachment
    : public ModelBase
{
public:
    ReplicationAttachment();
    virtual ~ReplicationAttachment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplicationAttachment members

    /// <summary>
    /// 该复制对挂载的保护实例ID。
    /// </summary>

    std::string getProtectedInstance() const;
    bool protectedInstanceIsSet() const;
    void unsetprotectedInstance();
    void setProtectedInstance(const std::string& value);

    /// <summary>
    /// 挂载点。
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);


protected:
    std::string protectedInstance_;
    bool protectedInstanceIsSet_;
    std::string device_;
    bool deviceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReplicationAttachment_H_
