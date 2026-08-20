
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateSnapshotRequest_issues_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateSnapshotRequest_issues_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchCreateSnapshotRequest_issues
    : public ModelBase
{
public:
    BatchCreateSnapshotRequest_issues();
    virtual ~BatchCreateSnapshotRequest_issues();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateSnapshotRequest_issues members

    /// <summary>
    /// 工作项ID。可以通过查询工作项列表或者查询树状工作项接口获取，响应消息体中的id字段的值就是工作项ID。 18~19个字符的数字字符串。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateSnapshotRequest_issues_H_
