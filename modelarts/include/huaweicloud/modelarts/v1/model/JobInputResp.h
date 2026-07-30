
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobInputResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobInputResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 作业输入。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobInputResp
    : public ModelBase
{
public:
    JobInputResp();
    virtual ~JobInputResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobInputResp members

    /// <summary>
    /// **参数解释**：输入数据的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：输入项类型。 **取值范围**：枚举值如下： - dataset：数据集 - obs：OBS - data_selector：数据选择
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：输入项数据。
    /// </summary>

    Object getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const Object& value);

    /// <summary>
    /// **参数解释**：输入项的值。
    /// </summary>

    Object getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    Object data_;
    bool dataIsSet_;
    Object value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobInputResp_H_
