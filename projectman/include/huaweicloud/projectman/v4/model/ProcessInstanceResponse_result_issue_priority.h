
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_issue_priority_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_issue_priority_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项优先级
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProcessInstanceResponse_result_issue_priority
    : public ModelBase
{
public:
    ProcessInstanceResponse_result_issue_priority();
    virtual ~ProcessInstanceResponse_result_issue_priority();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProcessInstanceResponse_result_issue_priority members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 显示名称
    /// </summary>

    std::string getDisplayValue() const;
    bool displayValueIsSet() const;
    void unsetdisplayValue();
    void setDisplayValue(const std::string& value);

    /// <summary>
    /// 值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 编码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 值(拼音首字母)
    /// </summary>

    std::string getValuePy() const;
    bool valuePyIsSet() const;
    void unsetvaluePy();
    void setValuePy(const std::string& value);

    /// <summary>
    /// 序列
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// 层级
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 所属定义级别
    /// </summary>

    std::string getBelongDefinitionType() const;
    bool belongDefinitionTypeIsSet() const;
    void unsetbelongDefinitionType();
    void setBelongDefinitionType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string displayValue_;
    bool displayValueIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string valuePy_;
    bool valuePyIsSet_;
    int32_t sequence_;
    bool sequenceIsSet_;
    int32_t level_;
    bool levelIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string belongDefinitionType_;
    bool belongDefinitionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_issue_priority_H_
