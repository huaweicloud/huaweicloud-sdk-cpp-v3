
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatJobsReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatJobsReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建交互任务
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartChatJobsReq
    : public ModelBase
{
public:
    SmartChatJobsReq();
    virtual ~SmartChatJobsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartChatJobsReq members

    /// <summary>
    /// 扩展参数，按照Json格式携带。 * city：所在城市 * client_id：客户端ID * extra_json_param：自定义参数
    /// </summary>

    std::string getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const std::string& value);


protected:
    std::string extendParam_;
    bool extendParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatJobsReq_H_
