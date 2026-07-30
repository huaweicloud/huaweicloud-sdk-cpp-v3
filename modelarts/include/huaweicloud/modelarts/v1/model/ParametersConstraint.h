
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ParametersConstraint_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ParametersConstraint_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 参数属性。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ParametersConstraint
    : public ModelBase
{
public:
    ParametersConstraint();
    virtual ~ParametersConstraint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParametersConstraint members

    /// <summary>
    /// 参数种类。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 是否可编辑。
    /// </summary>

    bool isEditable() const;
    bool editableIsSet() const;
    void unseteditable();
    void setEditable(bool value);

    /// <summary>
    /// 是否必须。
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

    /// <summary>
    /// 是否敏感。该功能暂未实现。
    /// </summary>

    bool isSensitive() const;
    bool sensitiveIsSet() const;
    void unsetsensitive();
    void setSensitive(bool value);

    /// <summary>
    /// 有效种类。
    /// </summary>

    std::string getValidType() const;
    bool validTypeIsSet() const;
    void unsetvalidType();
    void setValidType(const std::string& value);

    /// <summary>
    /// 有效范围。
    /// </summary>

    std::vector<std::string>& getValidRange();
    bool validRangeIsSet() const;
    void unsetvalidRange();
    void setValidRange(const std::vector<std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    bool editable_;
    bool editableIsSet_;
    bool required_;
    bool requiredIsSet_;
    bool sensitive_;
    bool sensitiveIsSet_;
    std::string validType_;
    bool validTypeIsSet_;
    std::vector<std::string> validRange_;
    bool validRangeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ParametersConstraint_H_
