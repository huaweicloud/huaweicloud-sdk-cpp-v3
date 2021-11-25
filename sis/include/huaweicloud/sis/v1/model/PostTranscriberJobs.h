
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PostTranscriberJobs_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PostTranscriberJobs_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sis/v1/model/TranscriberConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  PostTranscriberJobs
    : public ModelBase
{
public:
    PostTranscriberJobs();
    virtual ~PostTranscriberJobs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostTranscriberJobs members

    /// <summary>
    /// 
    /// </summary>

    TranscriberConfig getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const TranscriberConfig& value);

    /// <summary>
    /// 存放在OBS的音频文件路径。OBS的region要和请求服务的region保持一致，region不一致则OBS不可用，即使obs是公开访问权限。
    /// </summary>

    std::string getDataUrl() const;
    bool dataUrlIsSet() const;
    void unsetdataUrl();
    void setDataUrl(const std::string& value);


protected:
    TranscriberConfig config_;
    bool configIsSet_;
    std::string dataUrl_;
    bool dataUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PostTranscriberJobs_H_
