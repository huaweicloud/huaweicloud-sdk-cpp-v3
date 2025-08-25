
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSelector_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSelector_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点标签选择器，匹配Kubernetes中nodeSelector相关约束
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeSelector
    : public ModelBase
{
public:
    NodeSelector();
    virtual ~NodeSelector();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSelector members

    /// <summary>
    /// 标签键
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值列表
    /// </summary>

    std::vector<std::string>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::vector<std::string>& value);

    /// <summary>
    /// 标签逻辑运算符
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> value_;
    bool valueIsSet_;
    std::string operator_;
    bool operatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSelector_H_
