
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OperatorArgItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OperatorArgItem_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：算子的业务参数条目，当参数类型为enum时单选，参数类型为list时多选。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  OperatorArgItem
    : public ModelBase
{
public:
    OperatorArgItem();
    virtual ~OperatorArgItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperatorArgItem members

    /// <summary>
    /// **参数解释**：参数名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：参数值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**：参数说明
    /// </summary>

    std::string getTips() const;
    bool tipsIsSet() const;
    void unsettips();
    void setTips(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string tips_;
    bool tipsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OperatorArgItem_H_
