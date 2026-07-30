
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AutoSearchAlgoConfigParameter_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AutoSearchAlgoConfigParameter_H_


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
/// 训练作业、算法依赖参数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AutoSearchAlgoConfigParameter
    : public ModelBase
{
public:
    AutoSearchAlgoConfigParameter();
    virtual ~AutoSearchAlgoConfigParameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoSearchAlgoConfigParameter members

    /// <summary>
    /// 参数键。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 参数值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 参数种类。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AutoSearchAlgoConfigParameter_H_
