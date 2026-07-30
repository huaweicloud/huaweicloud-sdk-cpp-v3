
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerTemplateListResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerTemplateListResponse_H_


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
/// DevServer模板列表
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DevServerTemplateListResponse
    : public ModelBase
{
public:
    DevServerTemplateListResponse();
    virtual ~DevServerTemplateListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DevServerTemplateListResponse members

    /// <summary>
    /// **参数解释**：任务模板id。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：任务模板名。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：任务模板描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：任务模板类型。 **取值范围**：- COMMON  - LOG_COLLECT等。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：规格类型。 **取值范围**：-ASCEND_SNT9B   -ASCEND_SNT9C   -ASCEND_GENERIC。
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);

    /// <summary>
    /// **参数解释**：模板的一些任务所需额外params参数。
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
    std::string type_;
    bool typeIsSet_;
    std::string flavorType_;
    bool flavorTypeIsSet_;
    std::vector<TemplateParam> params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerTemplateListResponse_H_
