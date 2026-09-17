
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateIssuesParam_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateIssuesParam_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/projectman/v4/model/IssueUpdateAttribute.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量更新工作项参数，支持更新不同工作项的相同字段
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchUpdateIssuesParam
    : public ModelBase
{
public:
    BatchUpdateIssuesParam();
    virtual ~BatchUpdateIssuesParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateIssuesParam members

    /// <summary>
    /// **参数解释**： 需要更新的工作项ID数组，可通过[高级查询工作项](ListIssuesV4.xml)接口获取，响应消息体中的**id**字段的值就是工作项ID。 **约束限制**： 18~19位的数字字符串(工作项的**id**字段对应的字符串)。
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    IssueUpdateAttribute getAttribute() const;
    bool attributeIsSet() const;
    void unsetattribute();
    void setAttribute(const IssueUpdateAttribute& value);


protected:
    std::vector<std::string> id_;
    bool idIsSet_;
    IssueUpdateAttribute attribute_;
    bool attributeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchUpdateIssuesParam_H_
