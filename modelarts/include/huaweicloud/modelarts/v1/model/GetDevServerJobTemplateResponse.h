
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetDevServerJobTemplateResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetDevServerJobTemplateResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/TemplateParam.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GetDevServerJobTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    GetDevServerJobTemplateResponse();
    virtual ~GetDevServerJobTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetDevServerJobTemplateResponse members

    /// <summary>
    /// **参数解释**：模板id。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：模板名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：模板描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：容器启动命令。 **取值范围**：不涉及。
    /// </summary>

    std::string getCmd() const;
    bool cmdIsSet() const;
    void unsetcmd();
    void setCmd(const std::string& value);

    /// <summary>
    /// **参数解释**：任务镜像。 **取值范围**：不涉及。
    /// </summary>

    std::string getSwrPath() const;
    bool swrPathIsSet() const;
    void unsetswrPath();
    void setSwrPath(const std::string& value);

    /// <summary>
    /// **参数解释**：任务规格。 **取值范围**：不涉及。
    /// </summary>

    std::string getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::string& value);

    /// <summary>
    /// **参数解释**：卷。 **取值范围**：不涉及。
    /// </summary>

    std::string getVolumes() const;
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::string& value);

    /// <summary>
    /// **参数解释**：卷挂载。 **取值范围**：不涉及。
    /// </summary>

    std::string getVolumesMount() const;
    bool volumesMountIsSet() const;
    void unsetvolumesMount();
    void setVolumesMount(const std::string& value);

    /// <summary>
    /// **参数解释**：规格类型。 **取值范围**：-ASCEND_SNT9B   -ASCEND_SNT9C   -ASCEND_GENERIC。
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);

    /// <summary>
    /// **参数解释**：任务超时时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(const std::string& value);

    /// <summary>
    /// **参数解释**：任务的轮询周期。 **取值范围**：不涉及。
    /// </summary>

    std::string getCheckInterval() const;
    bool checkIntervalIsSet() const;
    void unsetcheckInterval();
    void setCheckInterval(const std::string& value);

    /// <summary>
    /// **参数解释**：任务类型。 **取值范围**：-LOG_COLLECT  -COMMON 等
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：模板状态。 **取值范围**：ACTIVE。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：模板的其他参数。
    /// </summary>

    std::vector<TemplateParam>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<TemplateParam>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string cmd_;
    bool cmdIsSet_;
    std::string swrPath_;
    bool swrPathIsSet_;
    std::string resources_;
    bool resourcesIsSet_;
    std::string volumes_;
    bool volumesIsSet_;
    std::string volumesMount_;
    bool volumesMountIsSet_;
    std::string flavorType_;
    bool flavorTypeIsSet_;
    std::string timeout_;
    bool timeoutIsSet_;
    std::string checkInterval_;
    bool checkIntervalIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<TemplateParam> params_;
    bool paramsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetDevServerJobTemplateResponse_H_
