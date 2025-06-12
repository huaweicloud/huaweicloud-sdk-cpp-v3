
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowDialogReportConfigResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowDialogReportConfigResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowDialogReportConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDialogReportConfigResponse();
    virtual ~ShowDialogReportConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDialogReportConfigResponse members

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

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

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string obsBucketName_;
    bool obsBucketNameIsSet_;
    std::string obsEndpoint_;
    bool obsEndpointIsSet_;
    bool enableDialogReport_;
    bool enableDialogReportIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowDialogReportConfigResponse_H_
