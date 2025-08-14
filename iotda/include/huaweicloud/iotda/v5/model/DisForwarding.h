
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DisForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DisForwarding_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// DIS服务配置信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DisForwarding
    : public ModelBase
{
public:
    DisForwarding();
    virtual ~DisForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisForwarding members

    /// <summary>
    /// **参数说明**：DIS服务对应的region区域
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// **参数说明**：DIS服务对应的projectId信息
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数说明**：DIS服务对应的通道名称，stream_id和stream_name两个参数必须携带一个，优先使用stream_id
    /// </summary>

    std::string getStreamName() const;
    bool streamNameIsSet() const;
    void unsetstreamName();
    void setStreamName(const std::string& value);

    /// <summary>
    /// **参数说明**：DIS服务对应的通道ID，stream_id和stream_name两个参数必须携带一个，优先使用stream_id
    /// </summary>

    std::string getStreamId() const;
    bool streamIdIsSet() const;
    void unsetstreamId();
    void setStreamId(const std::string& value);


protected:
    std::string regionName_;
    bool regionNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string streamName_;
    bool streamNameIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DisForwarding_H_
