
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueOperateResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueOperateResult_H_


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
/// 工作项操作返回值
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueOperateResult
    : public ModelBase
{
public:
    IssueOperateResult();
    virtual ~IssueOperateResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueOperateResult members

    /// <summary>
    /// **参数解释**： 变更的工作项ID。 **取值范围**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项变更人ID。 **取值范围**： 不涉及
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项的作废标识，枚举类型。 **取值范围**： - 正在工作：可正常操作的工作项 - 作废：软删除后的工作项，可在回收站恢复 - 删除：彻底删除后的工作项，无法恢复
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项变更时间。 **取值范围**： 不涉及
    /// </summary>

    std::string getOperateTime() const;
    bool operateTimeIsSet() const;
    void unsetoperateTime();
    void setOperateTime(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string operateTime_;
    bool operateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueOperateResult_H_
