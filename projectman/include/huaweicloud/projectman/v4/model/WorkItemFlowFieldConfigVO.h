
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowFieldConfigVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowFieldConfigVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/WorkItemFlowFieldValueVO.h>
#include <string>
#include <huaweicloud/projectman/v4/model/WorkItemFlowFieldRangeVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项字段配置
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemFlowFieldConfigVO
    : public ModelBase
{
public:
    WorkItemFlowFieldConfigVO();
    virtual ~WorkItemFlowFieldConfigVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemFlowFieldConfigVO members

    /// <summary>
    /// 字段编码
    /// </summary>

    std::string getFieldCode() const;
    bool fieldCodeIsSet() const;
    void unsetfieldCode();
    void setFieldCode(const std::string& value);

    /// <summary>
    /// 字段值类型
    /// </summary>

    std::string getValueType() const;
    bool valueTypeIsSet() const;
    void unsetvalueType();
    void setValueType(const std::string& value);

    /// <summary>
    /// 字段操作类型
    /// </summary>

    std::string getFieldOperation() const;
    bool fieldOperationIsSet() const;
    void unsetfieldOperation();
    void setFieldOperation(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkItemFlowFieldValueVO getFieldValue() const;
    bool fieldValueIsSet() const;
    void unsetfieldValue();
    void setFieldValue(const WorkItemFlowFieldValueVO& value);

    /// <summary>
    /// 是否必填
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

    /// <summary>
    /// 
    /// </summary>

    WorkItemFlowFieldRangeVO getFieldRange() const;
    bool fieldRangeIsSet() const;
    void unsetfieldRange();
    void setFieldRange(const WorkItemFlowFieldRangeVO& value);


protected:
    std::string fieldCode_;
    bool fieldCodeIsSet_;
    std::string valueType_;
    bool valueTypeIsSet_;
    std::string fieldOperation_;
    bool fieldOperationIsSet_;
    WorkItemFlowFieldValueVO fieldValue_;
    bool fieldValueIsSet_;
    bool required_;
    bool requiredIsSet_;
    WorkItemFlowFieldRangeVO fieldRange_;
    bool fieldRangeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemFlowFieldConfigVO_H_
