
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Model_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Model_H_


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
/// 模型信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Model
    : public ModelBase
{
public:
    Model();
    virtual ~Model();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Model members

    /// <summary>
    /// **参数解释**：模型名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：模型OBS路径。 **取值范围**：不涉及。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释**：量化数据类型。 **取值范围**：- w8A8 - fp16
    /// </summary>

    std::string getQuantType() const;
    bool quantTypeIsSet() const;
    void unsetquantType();
    void setQuantType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string quantType_;
    bool quantTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Model_H_
