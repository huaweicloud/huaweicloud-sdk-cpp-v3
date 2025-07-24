
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAlertGroupsByConditionRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAlertGroupsByConditionRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListAlertGroupsByConditionRequestBody
    : public ModelBase
{
public:
    ListAlertGroupsByConditionRequestBody();
    virtual ~ListAlertGroupsByConditionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAlertGroupsByConditionRequestBody members

    /// <summary>
    /// 告警组ID
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 告警组ID列表
    /// </summary>

    std::vector<std::string>& getGroupIds();
    bool groupIdsIsSet() const;
    void unsetgroupIds();
    void setGroupIds(const std::vector<std::string>& value);

    /// <summary>
    /// 当前页数
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 每页大小
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 服务ID
    /// </summary>

    std::string getTestServiceId() const;
    bool testServiceIdIsSet() const;
    void unsettestServiceId();
    void setTestServiceId(const std::string& value);

    /// <summary>
    /// 用户ID列表
    /// </summary>

    std::vector<std::string>& getUserIds();
    bool userIdsIsSet() const;
    void unsetuserIds();
    void setUserIds(const std::vector<std::string>& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::vector<std::string> groupIds_;
    bool groupIdsIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string testServiceId_;
    bool testServiceIdIsSet_;
    std::vector<std::string> userIds_;
    bool userIdsIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAlertGroupsByConditionRequestBody_H_
