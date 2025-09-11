
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowVersionAliasResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowVersionAliasResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/functiongraph/v2/model/VersionStrategy.h>
#include <cpprest/details/basic_types.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowVersionAliasResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVersionAliasResponse();
    virtual ~ShowVersionAliasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVersionAliasResponse members

    /// <summary>
    /// 要获取的别名名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

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
    /// 别名最后修改时间。
    /// </summary>

    utility::datetime getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const utility::datetime& value);

    /// <summary>
    /// 版本别名唯一标识。
    /// </summary>

    std::string getAliasUrn() const;
    bool aliasUrnIsSet() const;
    void unsetaliasUrn();
    void setAliasUrn(const std::string& value);

    /// <summary>
    /// 百分比灰度配置信息
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
    std::string name_;
    bool nameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    utility::datetime lastModified_;
    bool lastModifiedIsSet_;
    std::string aliasUrn_;
    bool aliasUrnIsSet_;
    std::map<std::string, int32_t> additionalVersionWeights_;
    bool additionalVersionWeightsIsSet_;
    std::map<std::string, VersionStrategy> additionalVersionStrategy_;
    bool additionalVersionStrategyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowVersionAliasResponse_H_
