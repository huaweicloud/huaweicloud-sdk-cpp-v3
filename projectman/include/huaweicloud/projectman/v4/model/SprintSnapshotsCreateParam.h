
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SprintSnapshotsCreateParam_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SprintSnapshotsCreateParam_H_


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
/// 创建迭代快照请求对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  SprintSnapshotsCreateParam
    : public ModelBase
{
public:
    SprintSnapshotsCreateParam();
    virtual ~SprintSnapshotsCreateParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SprintSnapshotsCreateParam members

    /// <summary>
    /// 快照标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 计划唯一ID。可以通过IPD项目计划管理章节中发布/迭代计划列表查询接口获取，响应消息体中的id字段的值就是计划ID。
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 计划类别。可以通过IPD项目计划管理章节中发布/迭代计划列表查询接口获取，响应消息体中的category字段的值就是计划类别。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string category_;
    bool categoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SprintSnapshotsCreateParam_H_
