
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertLevel_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertLevel_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AlertGroup.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AlertLevel
    : public ModelBase
{
public:
    AlertLevel();
    virtual ~AlertLevel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlertLevel members

    /// <summary>
    /// 告警渠道列表
    /// </summary>

    std::vector<std::string>& getAlertChannel();
    bool alertChannelIsSet() const;
    void unsetalertChannel();
    void setAlertChannel(const std::vector<std::string>& value);

    /// <summary>
    /// 告警组列表
    /// </summary>

    std::vector<AlertGroup>& getAlertGroups();
    bool alertGroupsIsSet() const;
    void unsetalertGroups();
    void setAlertGroups(const std::vector<AlertGroup>& value);

    /// <summary>
    /// 告警模板ID
    /// </summary>

    std::string getAlertTemplateId() const;
    bool alertTemplateIdIsSet() const;
    void unsetalertTemplateId();
    void setAlertTemplateId(const std::string& value);

    /// <summary>
    /// 告警次数
    /// </summary>

    int32_t getAlertTimes() const;
    bool alertTimesIsSet() const;
    void unsetalertTimes();
    void setAlertTimes(int32_t value);


protected:
    std::vector<std::string> alertChannel_;
    bool alertChannelIsSet_;
    std::vector<AlertGroup> alertGroups_;
    bool alertGroupsIsSet_;
    std::string alertTemplateId_;
    bool alertTemplateIdIsSet_;
    int32_t alertTimes_;
    bool alertTimesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AlertLevel_H_
