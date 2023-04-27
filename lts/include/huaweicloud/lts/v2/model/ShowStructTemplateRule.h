
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowStructTemplateRule_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowStructTemplateRule_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结构化类型。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowStructTemplateRule
    : public ModelBase
{
public:
    ShowStructTemplateRule();
    virtual ~ShowStructTemplateRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowStructTemplateRule members

    /// <summary>
    /// 测试
    /// </summary>

    std::string getParam() const;
    bool paramIsSet() const;
    void unsetparam();
    void setParam(const std::string& value);

    /// <summary>
    /// 结构化类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string param_;
    bool paramIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowStructTemplateRule_H_
