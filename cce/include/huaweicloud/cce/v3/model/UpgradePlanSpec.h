
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradePlanSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradePlanSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradePlanSpec
    : public ModelBase
{
public:
    UpgradePlanSpec();
    virtual ~UpgradePlanSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradePlanSpec members

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterID() const;
    bool clusterIDIsSet() const;
    void unsetclusterID();
    void setClusterID(const std::string& value);

    /// <summary>
    /// 当前集群版本
    /// </summary>

    std::string getClusterVersion() const;
    bool clusterVersionIsSet() const;
    void unsetclusterVersion();
    void setClusterVersion(const std::string& value);

    /// <summary>
    /// 本次集群升级的目标版本
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 自动升级计划的最早时间（UTC时间），需要早于notBeforeDeadline
    /// </summary>

    std::string getNotBefore() const;
    bool notBeforeIsSet() const;
    void unsetnotBefore();
    void setNotBefore(const std::string& value);

    /// <summary>
    /// 自动升级计划的最晚时间（UTC时间）
    /// </summary>

    std::string getNotAfter() const;
    bool notAfterIsSet() const;
    void unsetnotAfter();
    void setNotAfter(const std::string& value);

    /// <summary>
    /// 自动升级计划开始的截止时间（UTC时间）
    /// </summary>

    std::string getNotBeforeDeadline() const;
    bool notBeforeDeadlineIsSet() const;
    void unsetnotBeforeDeadline();
    void setNotBeforeDeadline(const std::string& value);


protected:
    std::string clusterID_;
    bool clusterIDIsSet_;
    std::string clusterVersion_;
    bool clusterVersionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    std::string notBefore_;
    bool notBeforeIsSet_;
    std::string notAfter_;
    bool notAfterIsSet_;
    std::string notBeforeDeadline_;
    bool notBeforeDeadlineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradePlanSpec_H_
