
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_parent_issue_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_parent_issue_H_


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
/// 父工作项信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkTableIssuseListResponseBody_parent_issue
    : public ModelBase
{
public:
    WorkTableIssuseListResponseBody_parent_issue();
    virtual ~WorkTableIssuseListResponseBody_parent_issue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkTableIssuseListResponseBody_parent_issue members

    /// <summary>
    /// 父工作项id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 父工作项标题
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string subject_;
    bool subjectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_parent_issue_H_
