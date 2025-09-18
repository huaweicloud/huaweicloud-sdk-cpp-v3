
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkTableIssueRequestV4RequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkTableIssueRequestV4RequestBody_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListWorkTableIssueRequestV4RequestBody
    : public ModelBase
{
public:
    ListWorkTableIssueRequestV4RequestBody();
    virtual ~ListWorkTableIssueRequestV4RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkTableIssueRequestV4RequestBody members

    /// <summary>
    /// 偏移量,offset是limit的整数倍，limit&#x3D;10,offset&#x3D;0,10,20...
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 搜索关键词
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 工作项创建时间区间
    /// </summary>

    std::string getCreatedOn() const;
    bool createdOnIsSet() const;
    void unsetcreatedOn();
    void setCreatedOn(const std::string& value);

    /// <summary>
    /// 工作项更新时间区间
    /// </summary>

    std::string getUpdatedOn() const;
    bool updatedOnIsSet() const;
    void unsetupdatedOn();
    void setUpdatedOn(const std::string& value);

    /// <summary>
    /// 工作项结束时间区间
    /// </summary>

    std::string getClosedOn() const;
    bool closedOnIsSet() const;
    void unsetclosedOn();
    void setClosedOn(const std::string& value);

    /// <summary>
    /// 工作项预计开始日期区间
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 工作项预计结束日期区间
    /// </summary>

    std::string getDueDate() const;
    bool dueDateIsSet() const;
    void unsetdueDate();
    void setDueDate(const std::string& value);

    /// <summary>
    /// 工作项类型
    /// </summary>

    std::string getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(const std::string& value);

    /// <summary>
    /// 工作项状态
    /// </summary>

    std::string getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(const std::string& value);

    /// <summary>
    /// 工作项创建人id
    /// </summary>

    std::string getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(const std::string& value);

    /// <summary>
    /// 工作项开发人员id
    /// </summary>

    std::string getDeveloperId() const;
    bool developerIdIsSet() const;
    void unsetdeveloperId();
    void setDeveloperId(const std::string& value);

    /// <summary>
    /// 工作项优先级id
    /// </summary>

    std::string getPriorityId() const;
    bool priorityIdIsSet() const;
    void unsetpriorityId();
    void setPriorityId(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string createdOn_;
    bool createdOnIsSet_;
    std::string updatedOn_;
    bool updatedOnIsSet_;
    std::string closedOn_;
    bool closedOnIsSet_;
    std::string startDate_;
    bool startDateIsSet_;
    std::string dueDate_;
    bool dueDateIsSet_;
    std::string trackerId_;
    bool trackerIdIsSet_;
    std::string statusId_;
    bool statusIdIsSet_;
    std::string authorId_;
    bool authorIdIsSet_;
    std::string developerId_;
    bool developerIdIsSet_;
    std::string priorityId_;
    bool priorityIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkTableIssueRequestV4RequestBody_H_
