
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_advanced_config_auto_search_search_params_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_advanced_config_auto_search_search_params_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmResponse_advanced_config_auto_search_search_params
    : public ModelBase
{
public:
    AlgorithmResponse_advanced_config_auto_search_search_params();
    virtual ~AlgorithmResponse_advanced_config_auto_search_search_params();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmResponse_advanced_config_auto_search_search_params members

    /// <summary>
    /// 超参名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数类型。 - continuous：指定时表示这个超参是连续类型的。连续类型的超参在算法使用于训练作业时，控制台显示为输入框。 - discrete：指定时表示这个超参是离散类型的。离散类型的超参在算法使用于训练作业时，控制台显示为下拉选择框架。
    /// </summary>

    std::string getParamType() const;
    bool paramTypeIsSet() const;
    void unsetparamType();
    void setParamType(const std::string& value);

    /// <summary>
    /// 超参下界。
    /// </summary>

    std::string getLowerBound() const;
    bool lowerBoundIsSet() const;
    void unsetlowerBound();
    void setLowerBound(const std::string& value);

    /// <summary>
    /// 超参上界。
    /// </summary>

    std::string getUpperBound() const;
    bool upperBoundIsSet() const;
    void unsetupperBound();
    void setUpperBound(const std::string& value);

    /// <summary>
    /// 连续型超参离散化取值个数。
    /// </summary>

    std::string getDiscretePointsNum() const;
    bool discretePointsNumIsSet() const;
    void unsetdiscretePointsNum();
    void setDiscretePointsNum(const std::string& value);

    /// <summary>
    /// 离散型超参的取值列表。
    /// </summary>

    std::string getDiscreteValues() const;
    bool discreteValuesIsSet() const;
    void unsetdiscreteValues();
    void setDiscreteValues(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string paramType_;
    bool paramTypeIsSet_;
    std::string lowerBound_;
    bool lowerBoundIsSet_;
    std::string upperBound_;
    bool upperBoundIsSet_;
    std::string discretePointsNum_;
    bool discretePointsNumIsSet_;
    std::string discreteValues_;
    bool discreteValuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_advanced_config_auto_search_search_params_H_
