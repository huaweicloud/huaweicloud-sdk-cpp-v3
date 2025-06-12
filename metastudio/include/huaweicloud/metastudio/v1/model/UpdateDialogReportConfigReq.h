
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDialogReportConfigReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDialogReportConfigReq_H_


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
/// 修改对话结果上报配置请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateDialogReportConfigReq
    : public ModelBase
{
public:
    UpdateDialogReportConfigReq();
    virtual ~UpdateDialogReportConfigReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDialogReportConfigReq members

    /// <summary>
    /// **参数解释**： 接收对话结果上报的obs桶名。 **约束限制**： 不涉及 **取值范围**： 字符长度1-64 **默认取值**： 不涉及
    /// </summary>

    std::string getObsBucketName() const;
    bool obsBucketNameIsSet() const;
    void unsetobsBucketName();
    void setObsBucketName(const std::string& value);

    /// <summary>
    /// **参数解释**： 接收对话结果上报的obs终端节点。 **约束限制**： 需要为obs合法终端节点。 **取值范围**： 字符长度1-64 **默认取值**： 不涉及
    /// </summary>

    std::string getObsEndpoint() const;
    bool obsEndpointIsSet() const;
    void unsetobsEndpoint();
    void setObsEndpoint(const std::string& value);

    /// <summary>
    /// 对话结果上报开关
    /// </summary>

    bool isEnableDialogReport() const;
    bool enableDialogReportIsSet() const;
    void unsetenableDialogReport();
    void setEnableDialogReport(bool value);


protected:
    std::string obsBucketName_;
    bool obsBucketNameIsSet_;
    std::string obsEndpoint_;
    bool obsEndpointIsSet_;
    bool enableDialogReport_;
    bool enableDialogReportIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDialogReportConfigReq_H_
