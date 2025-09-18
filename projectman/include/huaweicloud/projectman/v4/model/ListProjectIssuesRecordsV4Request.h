
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIssuesRecordsV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIssuesRecordsV4Request_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectIssuesRecordsV4Request
    : public ModelBase
{
public:
    ListProjectIssuesRecordsV4Request();
    virtual ~ListProjectIssuesRecordsV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectIssuesRecordsV4Request members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 偏移量 从0开始,offset是limit的整数倍，limit&#x3D;10,offset&#x3D;0,10,20...
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页数量 最小1,最大100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 变更工作项的时间(查询的起始时间,查询的结束时间)
    /// </summary>

    std::string getOperatedTimeInterval() const;
    bool operatedTimeIntervalIsSet() const;
    void unsetoperatedTimeInterval();
    void setOperatedTimeInterval(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string operatedTimeInterval_;
    bool operatedTimeIntervalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectIssuesRecordsV4Request& dereference_from_shared_ptr(std::shared_ptr<ListProjectIssuesRecordsV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIssuesRecordsV4Request_H_
