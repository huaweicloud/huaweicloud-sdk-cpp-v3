
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DepParamInstance_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DepParamInstance_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DepParamInstance
    : public ModelBase
{
public:
    DepParamInstance();
    virtual ~DepParamInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DepParamInstance members

    /// <summary>
    /// 比较值
    /// </summary>

    std::string getCompareValue() const;
    bool compareValueIsSet() const;
    void unsetcompareValue();
    void setCompareValue(const std::string& value);

    /// <summary>
    /// 比较
    /// </summary>

    std::string getComparison() const;
    bool comparisonIsSet() const;
    void unsetcomparison();
    void setComparison(const std::string& value);

    /// <summary>
    /// 条件
    /// </summary>

    bool isCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(bool value);

    /// <summary>
    /// 无效值列表
    /// </summary>

    std::vector<std::string>& getInValidValues();
    bool inValidValuesIsSet() const;
    void unsetinValidValues();
    void setInValidValues(const std::vector<std::string>& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 空值信息
    /// </summary>

    std::string getNullInfo() const;
    bool nullInfoIsSet() const;
    void unsetnullInfo();
    void setNullInfo(const std::string& value);

    /// <summary>
    /// 关系映射，key为整数，value为字符串
    /// </summary>

    std::map<std::string, std::string>& getRelationMap();
    bool relationMapIsSet() const;
    void unsetrelationMap();
    void setRelationMap(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 关系数量
    /// </summary>

    int32_t getRelationNum() const;
    bool relationNumIsSet() const;
    void unsetrelationNum();
    void setRelationNum(int32_t value);

    /// <summary>
    /// 值列表
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);


protected:
    std::string compareValue_;
    bool compareValueIsSet_;
    std::string comparison_;
    bool comparisonIsSet_;
    bool condition_;
    bool conditionIsSet_;
    std::vector<std::string> inValidValues_;
    bool inValidValuesIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nullInfo_;
    bool nullInfoIsSet_;
    std::map<std::string, std::string> relationMap_;
    bool relationMapIsSet_;
    int32_t relationNum_;
    bool relationNumIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DepParamInstance_H_
