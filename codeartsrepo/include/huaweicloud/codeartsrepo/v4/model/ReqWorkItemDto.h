
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReqWorkItemDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReqWorkItemDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ReqWorkItemBasicDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 工作项数据。
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ReqWorkItemDto
    : public ModelBase
{
public:
    ReqWorkItemDto();
    virtual ~ReqWorkItemDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqWorkItemDto members

    /// <summary>
    /// **参数解释：** 工作项ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项标题。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项编号， scrum类型项目该值为空。
    /// </summary>

    std::string getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReqWorkItemBasicDto getTracker() const;
    bool trackerIsSet() const;
    void unsettracker();
    void setTracker(const ReqWorkItemBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    ReqWorkItemBasicDto getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const ReqWorkItemBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    ReqWorkItemBasicDto getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const ReqWorkItemBasicDto& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;
    ReqWorkItemBasicDto tracker_;
    bool trackerIsSet_;
    ReqWorkItemBasicDto status_;
    bool statusIsSet_;
    ReqWorkItemBasicDto priority_;
    bool priorityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ReqWorkItemDto_H_
