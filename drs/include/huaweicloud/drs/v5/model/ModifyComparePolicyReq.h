
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyComparePolicyReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyComparePolicyReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改对比策略请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ModifyComparePolicyReq
    : public ModelBase
{
public:
    ModifyComparePolicyReq();
    virtual ~ModifyComparePolicyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyComparePolicyReq members

    /// <summary>
    /// 对比策略开关-open|close。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 对比策略周期。 - 每周对比：格式示例：“* * 1,3,5” ，其中“1,3,5”对应星期一、星期三、星期五，根据实际填写。 - 每天对比：固定填写“* * 1,2,3,4,5,6,7”。 - 按小时对比：固定填写“* * 1,2,3,4,5,6,7”。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 对比策略生效开始时间，UTC时间，24小时制，时间格式HH:mm:ss，例如：00:00:00，表示UTC时间的00:00:00，北京时间（UTC+08:00）的08:00:00。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 对比策略生效结束时间，UTC时间，24小时制，时间格式HH:mm:ss，例如：04:00:00，表示UTC时间的04:00:00，北京时间（UTC+08:00）的12:00:00。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 对比类型列表： - object_comparison：对象对比。 - lines：行对比。 - account：用户对比。
    /// </summary>

    std::vector<std::string>& getCompareType();
    bool compareTypeIsSet() const;
    void unsetcompareType();
    void setCompareType(const std::vector<std::string>& value);

    /// <summary>
    /// 对比策略： - normal：普通对比。 - manyToOne：多对一对比。
    /// </summary>

    std::string getComparePolicy() const;
    bool comparePolicyIsSet() const;
    void unsetcomparePolicy();
    void setComparePolicy(const std::string& value);

    /// <summary>
    /// 间隔时间，按小时对比时填写，表示每隔多久执行一次对比，单位是小时。
    /// </summary>

    int32_t getIntervalHour() const;
    bool intervalHourIsSet() const;
    void unsetintervalHour();
    void setIntervalHour(int32_t value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string period_;
    bool periodIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::vector<std::string> compareType_;
    bool compareTypeIsSet_;
    std::string comparePolicy_;
    bool comparePolicyIsSet_;
    int32_t intervalHour_;
    bool intervalHourIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyComparePolicyReq_H_
