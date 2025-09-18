
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAttrHistoryRecord_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAttrHistoryRecord_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/IssueUser.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueAttrHistoryRecord
    : public ModelBase
{
public:
    IssueAttrHistoryRecord();
    virtual ~IssueAttrHistoryRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueAttrHistoryRecord members

    /// <summary>
    /// 操作的字段
    /// </summary>

    std::string getFieldKey() const;
    bool fieldKeyIsSet() const;
    void unsetfieldKey();
    void setFieldKey(const std::string& value);

    /// <summary>
    /// 操作字段的含义
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 历史记录id
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// 工作项id
    /// </summary>

    int64_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int64_t value);

    /// <summary>
    /// 变更后的值,json字符串
    /// </summary>

    std::string getNewValue() const;
    bool newValueIsSet() const;
    void unsetnewValue();
    void setNewValue(const std::string& value);

    /// <summary>
    /// 变更前的值,json字符串
    /// </summary>

    std::string getOldValue() const;
    bool oldValueIsSet() const;
    void unsetoldValue();
    void setOldValue(const std::string& value);

    /// <summary>
    /// 变更的时间
    /// </summary>

    int64_t getOperatedTime() const;
    bool operatedTimeIsSet() const;
    void unsetoperatedTime();
    void setOperatedTime(int64_t value);

    /// <summary>
    /// 操作类型,新建，修改，删除
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueUser getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const IssueUser& value);

    /// <summary>
    /// 变更的属性
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);


protected:
    std::string fieldKey_;
    bool fieldKeyIsSet_;
    std::string fieldName_;
    bool fieldNameIsSet_;
    int64_t id_;
    bool idIsSet_;
    int64_t issueId_;
    bool issueIdIsSet_;
    std::string newValue_;
    bool newValueIsSet_;
    std::string oldValue_;
    bool oldValueIsSet_;
    int64_t operatedTime_;
    bool operatedTimeIsSet_;
    std::string operation_;
    bool operationIsSet_;
    IssueUser operator_;
    bool operatorIsSet_;
    std::string property_;
    bool propertyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAttrHistoryRecord_H_
