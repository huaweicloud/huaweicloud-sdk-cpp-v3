
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CheckPoint_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CheckPoint_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CheckPoint
    : public ModelBase
{
public:
    CheckPoint();
    virtual ~CheckPoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckPoint members

    /// <summary>
    /// 运算符
    /// </summary>

    std::string getComparison() const;
    bool comparisonIsSet() const;
    void unsetcomparison();
    void setComparison(const std::string& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 响应提取时要使用什么方法处理参数
    /// </summary>

    std::string getFunctionArg() const;
    bool functionArgIsSet() const;
    void unsetfunctionArg();
    void setFunctionArg(const std::string& value);

    /// <summary>
    /// 响应提取时要使用什么方法处理参数
    /// </summary>

    std::string getFunctionType() const;
    bool functionTypeIsSet() const;
    void unsetfunctionType();
    void setFunctionType(const std::string& value);

    /// <summary>
    /// 属性名称
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);

    /// <summary>
    /// 值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string comparison_;
    bool comparisonIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string functionArg_;
    bool functionArgIsSet_;
    std::string functionType_;
    bool functionTypeIsSet_;
    std::string property_;
    bool propertyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CheckPoint_H_
