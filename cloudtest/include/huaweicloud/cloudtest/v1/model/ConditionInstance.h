
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ConditionInstance_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ConditionInstance_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/DepParamInstance.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ConditionInstance
    : public ModelBase
{
public:
    ConditionInstance();
    virtual ~ConditionInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConditionInstance members

    /// <summary>
    /// 条件索引，用于标识当前处理的是哪个条件
    /// </summary>

    int32_t getConditionIndex() const;
    bool conditionIndexIsSet() const;
    void unsetconditionIndex();
    void setConditionIndex(int32_t value);

    /// <summary>
    /// 条件映射，键为整数，值为字符串列表，用于存储各个条件的信息
    /// </summary>

    std::map<std::string, std::vector<std::string>>& getConditionMap();
    bool conditionMapIsSet() const;
    void unsetconditionMap();
    void setConditionMap(const std::map<std::string, std::vector<std::string>>& value);

    /// <summary>
    /// 依赖参数实例的映射
    /// </summary>

    std::map<std::string, DepParamInstance>& getDepParamMap();
    bool depParamMapIsSet() const;
    void unsetdepParamMap();
    void setDepParamMap(const std::map<std::string, DepParamInstance>& value);

    /// <summary>
    /// 声明索引，用于标识当前处理的是哪个声明
    /// </summary>

    int32_t getStatementIndex() const;
    bool statementIndexIsSet() const;
    void unsetstatementIndex();
    void setStatementIndex(int32_t value);


protected:
    int32_t conditionIndex_;
    bool conditionIndexIsSet_;
    std::map<std::string, std::vector<std::string>> conditionMap_;
    bool conditionMapIsSet_;
    std::map<std::string, DepParamInstance> depParamMap_;
    bool depParamMapIsSet_;
    int32_t statementIndex_;
    bool statementIndexIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ConditionInstance_H_
