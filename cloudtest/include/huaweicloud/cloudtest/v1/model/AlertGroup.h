
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertGroup_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertGroup_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AlertGroup
    : public ModelBase
{
public:
    AlertGroup();
    virtual ~AlertGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlertGroup members

    /// <summary>
    /// 
    /// </summary>

    std::string getDingTalkHookUrl() const;
    bool dingTalkHookUrlIsSet() const;
    void unsetdingTalkHookUrl();
    void setDingTalkHookUrl(const std::string& value);

    /// <summary>
    /// 告警组名称
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 告警组ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getWeChatWorkHookUrl() const;
    bool weChatWorkHookUrlIsSet() const;
    void unsetweChatWorkHookUrl();
    void setWeChatWorkHookUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getWeLinkGroupNo() const;
    bool weLinkGroupNoIsSet() const;
    void unsetweLinkGroupNo();
    void setWeLinkGroupNo(const std::string& value);


protected:
    std::string dingTalkHookUrl_;
    bool dingTalkHookUrlIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string weChatWorkHookUrl_;
    bool weChatWorkHookUrlIsSet_;
    std::string weLinkGroupNo_;
    bool weLinkGroupNoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertGroup_H_
