
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CustomAttributes_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CustomAttributes_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/CustomAttributesRule.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CustomAttributes
    : public ModelBase
{
public:
    CustomAttributes();
    virtual ~CustomAttributes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomAttributes members

    /// <summary>
    /// 配置项属性，severity：为问题级别
    /// </summary>

    std::string getAttribute() const;
    bool attributeIsSet() const;
    void unsetattribute();
    void setAttribute(const std::string& value);

    /// <summary>
    /// 规则详细
    /// </summary>

    std::vector<CustomAttributesRule>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<CustomAttributesRule>& value);


protected:
    std::string attribute_;
    bool attributeIsSet_;
    std::vector<CustomAttributesRule> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CustomAttributes_H_
