
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SnapshotIssueRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SnapshotIssueRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 根据快照查询工作项信息的请求对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  SnapshotIssueRequest
    : public ModelBase
{
public:
    SnapshotIssueRequest();
    virtual ~SnapshotIssueRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotIssueRequest members

    /// <summary>
    /// 快照的ID数组。可以通过查询工作项快照列表接口获取，响应消息体中的id字段的值就是工作项快照ID。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);

    /// <summary>
    /// 是否返回工作项简要信息。 当值为false时ids中仅支持5个快照ID；值为true时，ids最多支持50个快照ID。
    /// </summary>

    bool isSimpleResult() const;
    bool simpleResultIsSet() const;
    void unsetsimpleResult();
    void setSimpleResult(bool value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;
    bool simpleResult_;
    bool simpleResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SnapshotIssueRequest_H_
