
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ReservedInstanceConfigs_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ReservedInstanceConfigs_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/functiongraph/v2/model/TacticsConfig.h>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ReservedInstanceConfigs
    : public ModelBase
{
public:
    ReservedInstanceConfigs();
    virtual ~ReservedInstanceConfigs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReservedInstanceConfigs members

    /// <summary>
    /// 函数URN
    /// </summary>

    std::string getFunctionUrn() const;
    bool functionUrnIsSet() const;
    void unsetfunctionUrn();
    void setFunctionUrn(const std::string& value);

    /// <summary>
    /// 限定类型, 支持version和alias
    /// </summary>

    std::string getQualifierType() const;
    bool qualifierTypeIsSet() const;
    void unsetqualifierType();
    void setQualifierType(const std::string& value);

    /// <summary>
    /// 限定类型对应的取值
    /// </summary>

    std::string getQualifierName() const;
    bool qualifierNameIsSet() const;
    void unsetqualifierName();
    void setQualifierName(const std::string& value);

    /// <summary>
    /// 预留实例个数
    /// </summary>

    int32_t getMinCount() const;
    bool minCountIsSet() const;
    void unsetminCount();
    void setMinCount(int32_t value);

    /// <summary>
    /// 是否开启闲置模式配置
    /// </summary>

    bool isIdleMode() const;
    bool idleModeIsSet() const;
    void unsetidleMode();
    void setIdleMode(bool value);

    /// <summary>
    /// 
    /// </summary>

    TacticsConfig getTacticsConfig() const;
    bool tacticsConfigIsSet() const;
    void unsettacticsConfig();
    void setTacticsConfig(const TacticsConfig& value);


protected:
    std::string functionUrn_;
    bool functionUrnIsSet_;
    std::string qualifierType_;
    bool qualifierTypeIsSet_;
    std::string qualifierName_;
    bool qualifierNameIsSet_;
    int32_t minCount_;
    bool minCountIsSet_;
    bool idleMode_;
    bool idleModeIsSet_;
    TacticsConfig tacticsConfig_;
    bool tacticsConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ReservedInstanceConfigs_H_
