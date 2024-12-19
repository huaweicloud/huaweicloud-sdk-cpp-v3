
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListUpdateBackupEnhancePolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListUpdateBackupEnhancePolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Policy.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListUpdateBackupEnhancePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUpdateBackupEnhancePolicyResponse();
    virtual ~ListUpdateBackupEnhancePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUpdateBackupEnhancePolicyResponse members

    /// <summary>
    /// 备份时间段开始时间
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 备份时间段结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 手动备份保留时长
    /// </summary>

    std::string getManualBackupRetentionDays() const;
    bool manualBackupRetentionDaysIsSet() const;
    void unsetmanualBackupRetentionDays();
    void setManualBackupRetentionDays(const std::string& value);

    /// <summary>
    /// 高频备份的频率
    /// </summary>

    std::string getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const std::string& value);

    /// <summary>
    /// 备份策略集
    /// </summary>

    std::vector<Policy>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<Policy>& value);


protected:
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string manualBackupRetentionDays_;
    bool manualBackupRetentionDaysIsSet_;
    std::string frequency_;
    bool frequencyIsSet_;
    std::vector<Policy> policies_;
    bool policiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListUpdateBackupEnhancePolicyResponse_H_
