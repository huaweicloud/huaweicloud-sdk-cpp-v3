
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwVariable_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwVariable_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AwVariable
    : public ModelBase
{
public:
    AwVariable();
    virtual ~AwVariable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AwVariable members

    /// <summary>
    /// 节点顺序
    /// </summary>

    int32_t getByOrder() const;
    bool byOrderIsSet() const;
    void unsetbyOrder();
    void setByOrder(int32_t value);

    /// <summary>
    /// 当前人员权限
    /// </summary>

    std::string getCurrentPermission() const;
    bool currentPermissionIsSet() const;
    void unsetcurrentPermission();
    void setCurrentPermission(const std::string& value);

    /// <summary>
    /// 参数描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 动态参数名称
    /// </summary>

    std::string getDynamicParam() const;
    bool dynamicParamIsSet() const;
    void unsetdynamicParam();
    void setDynamicParam(const std::string& value);

    /// <summary>
    /// 动态参数标志,默认为false:true代表动态参数；false代表非动态参数
    /// </summary>

    bool isDynamicParamFlag() const;
    bool dynamicParamFlagIsSet() const;
    void unsetdynamicParamFlag();
    void setDynamicParamFlag(bool value);

    /// <summary>
    /// 变量参数（[]:空参、[a]:一参，[a,b]:两参）
    /// </summary>

    std::string getFunctionParams() const;
    bool functionParamsIsSet() const;
    void unsetfunctionParams();
    void setFunctionParams(const std::string& value);

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
    /// 是否是敏感字段
    /// </summary>

    bool isIsSensitiveInfo() const;
    bool isSensitiveInfoIsSet() const;
    void unsetisSensitiveInfo();
    void setIsSensitiveInfo(bool value);

    /// <summary>
    /// 敏感字段是否被修改，不敏感字段不关注此值
    /// </summary>

    bool isIsSensitiveModified() const;
    bool isSensitiveModifiedIsSet() const;
    void unsetisSensitiveModified();
    void setIsSensitiveModified(bool value);

    /// <summary>
    /// 是否是组合aw的输出参数，只有组合aw下awInstance的aw变量有该字段
    /// </summary>

    bool isIsOutPut() const;
    bool isOutPutIsSet() const;
    void unsetisOutPut();
    void setIsOutPut(bool value);

    /// <summary>
    /// 参数名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 节点id
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 0/null-变量节点;1-目录节点
    /// </summary>

    int32_t getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(int32_t value);

    /// <summary>
    /// 旧名称
    /// </summary>

    std::string getOldName() const;
    bool oldNameIsSet() const;
    void unsetoldName();
    void setOldName(const std::string& value);

    /// <summary>
    /// 父节点id
    /// </summary>

    std::string getParentNodeId() const;
    bool parentNodeIdIsSet() const;
    void unsetparentNodeId();
    void setParentNodeId(const std::string& value);

    /// <summary>
    /// 属性
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);

    /// <summary>
    /// 内置函数枚举
    /// </summary>

    std::string getRegex() const;
    bool regexIsSet() const;
    void unsetregex();
    void setRegex(const std::string& value);

    /// <summary>
    /// 敏感参数设置时间
    /// </summary>

    std::string getSensitiveInfoSetterTime() const;
    bool sensitiveInfoSetterTimeIsSet() const;
    void unsetsensitiveInfoSetterTime();
    void setSensitiveInfoSetterTime(const std::string& value);

    /// <summary>
    /// 敏感参数设置者名称
    /// </summary>

    std::string getSensitiveInfoSetterUser() const;
    bool sensitiveInfoSetterUserIsSet() const;
    void unsetsensitiveInfoSetterUser();
    void setSensitiveInfoSetterUser(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 变量类型（0：text，10-16：7个内置函数）
    /// </summary>

    int32_t getVariableType() const;
    bool variableTypeIsSet() const;
    void unsetvariableType();
    void setVariableType(int32_t value);


protected:
    int32_t byOrder_;
    bool byOrderIsSet_;
    std::string currentPermission_;
    bool currentPermissionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string dynamicParam_;
    bool dynamicParamIsSet_;
    bool dynamicParamFlag_;
    bool dynamicParamFlagIsSet_;
    std::string functionParams_;
    bool functionParamsIsSet_;
    std::string functionArg_;
    bool functionArgIsSet_;
    std::string functionType_;
    bool functionTypeIsSet_;
    bool isSensitiveInfo_;
    bool isSensitiveInfoIsSet_;
    bool isSensitiveModified_;
    bool isSensitiveModifiedIsSet_;
    bool isOutPut_;
    bool isOutPutIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    int32_t nodeType_;
    bool nodeTypeIsSet_;
    std::string oldName_;
    bool oldNameIsSet_;
    std::string parentNodeId_;
    bool parentNodeIdIsSet_;
    std::string property_;
    bool propertyIsSet_;
    std::string regex_;
    bool regexIsSet_;
    std::string sensitiveInfoSetterTime_;
    bool sensitiveInfoSetterTimeIsSet_;
    std::string sensitiveInfoSetterUser_;
    bool sensitiveInfoSetterUserIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t variableType_;
    bool variableTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwVariable_H_
