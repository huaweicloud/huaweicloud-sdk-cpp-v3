
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueRecordV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueRecordV4_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueRecordV4_user.h>
#include <huaweicloud/projectman/v4/model/IssueRecordV4_details.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 历史记录
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueRecordV4
    : public ModelBase
{
public:
    IssueRecordV4();
    virtual ~IssueRecordV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueRecordV4 members

    /// <summary>
    /// 操作记录id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 操作记录创建时间
    /// </summary>

    int64_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    IssueRecordV4_user getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const IssueRecordV4_user& value);

    /// <summary>
    /// 操作的记录
    /// </summary>

    std::vector<IssueRecordV4_details>& getDetails();
    bool detailsIsSet() const;
    void unsetdetails();
    void setDetails(const std::vector<IssueRecordV4_details>& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int64_t createdTime_;
    bool createdTimeIsSet_;
    IssueRecordV4_user user_;
    bool userIsSet_;
    std::vector<IssueRecordV4_details> details_;
    bool detailsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueRecordV4_H_
