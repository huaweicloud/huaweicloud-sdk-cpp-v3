
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitStatisticsResultCommitDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitStatisticsResultCommitDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CommitStatisticsResultCommitDto
    : public ModelBase
{
public:
    CommitStatisticsResultCommitDto();
    virtual ~CommitStatisticsResultCommitDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitStatisticsResultCommitDto members

    /// <summary>
    /// **参数解释：** 作者名称。
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交日期。
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);

    /// <summary>
    /// **参数解释：** 昵称。
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户名。
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否通过merge合入。 **取值范围：** - true，通过merge合入。 - false，非通过merge合入。
    /// </summary>

    bool isIsMerge() const;
    bool isMergeIsSet() const;
    void unsetisMerge();
    void setIsMerge(bool value);


protected:
    std::string authorName_;
    bool authorNameIsSet_;
    std::string date_;
    bool dateIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    bool isMerge_;
    bool isMergeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitStatisticsResultCommitDto_H_
