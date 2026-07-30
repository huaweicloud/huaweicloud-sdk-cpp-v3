
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowObsUrlOfTrainingJobLogsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowObsUrlOfTrainingJobLogsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Shards.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowObsUrlOfTrainingJobLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowObsUrlOfTrainingJobLogsResponse();
    virtual ~ShowObsUrlOfTrainingJobLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowObsUrlOfTrainingJobLogsResponse members

    /// <summary>
    /// 日志OBS临时链接（复制到浏览器可查看当前全量日志）。
    /// </summary>

    std::string getObsUrl() const;
    bool obsUrlIsSet() const;
    void unsetobsUrl();
    void setObsUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Shards getShards() const;
    bool shardsIsSet() const;
    void unsetshards();
    void setShards(const Shards& value);


protected:
    std::string obsUrl_;
    bool obsUrlIsSet_;
    Shards shards_;
    bool shardsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowObsUrlOfTrainingJobLogsResponse_H_
