
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateVersionAliasRequestBody_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateVersionAliasRequestBody_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/functiongraph/v2/model/VersionStrategy.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateVersionAliasRequestBody
    : public ModelBase
{
public:
    UpdateVersionAliasRequestBody();
    virtual ~UpdateVersionAliasRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVersionAliasRequestBody members

    /// <summary>
    /// 别名对应的版本名称。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 别名描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 灰度版本信息
    /// </summary>

    std::map<std::string, int32_t>& getAdditionalVersionWeights();
    bool additionalVersionWeightsIsSet() const;
    void unsetadditionalVersionWeights();
    void setAdditionalVersionWeights(std::map<std::string, int32_t> value);

    /// <summary>
    /// 指定规则灰度策略信息
    /// </summary>

    std::map<std::string, VersionStrategy>& getAdditionalVersionStrategy();
    bool additionalVersionStrategyIsSet() const;
    void unsetadditionalVersionStrategy();
    void setAdditionalVersionStrategy(const std::map<std::string, VersionStrategy>& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::map<std::string, int32_t> additionalVersionWeights_;
    bool additionalVersionWeightsIsSet_;
    std::map<std::string, VersionStrategy> additionalVersionStrategy_;
    bool additionalVersionStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateVersionAliasRequestBody_H_
