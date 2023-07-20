
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateEntityConfigurationResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateEntityConfigurationResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateEntityConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateEntityConfigurationResponse();
    virtual ~UpdateEntityConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateEntityConfigurationResponse members

    /// <summary>
    /// 修改实例参数的异步任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 参数修改涉及范围（实例，组，节点）否需要重启。 - false不需要重启 - true需要重启。
    /// </summary>

    bool isRestartRequired() const;
    bool restartRequiredIsSet() const;
    void unsetrestartRequired();
    void setRestartRequired(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    bool restartRequired_;
    bool restartRequiredIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateEntityConfigurationResponse_H_
