
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowComparePolicyResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowComparePolicyResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowComparePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowComparePolicyResponse();
    virtual ~ShowComparePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowComparePolicyResponse members

    /// <summary>
    /// 对比时间。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 对比策略状态。 - OPEN：开启 - CLOSED：关闭 - NO_SUPPORT：不支持
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 对比开始时间。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 对比结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 对比类型。 - object：对象对比 - lines：行对比 - contents：内容对比 - account：用户对比
    /// </summary>

    std::vector<std::string>& getCompareType();
    bool compareTypeIsSet() const;
    void unsetcompareType();
    void setCompareType(const std::vector<std::string>& value);

    /// <summary>
    /// 下次对比时间，UTC时间，例如：2023-06-12T08:00:00Z
    /// </summary>

    std::string getNextCompareTime() const;
    bool nextCompareTimeIsSet() const;
    void unsetnextCompareTime();
    void setNextCompareTime(const std::string& value);

    /// <summary>
    /// 对比策略。 - normal：普通对比 - manyToOne：多对一对比
    /// </summary>

    std::string getComparePolicy() const;
    bool comparePolicyIsSet() const;
    void unsetcomparePolicy();
    void setComparePolicy(const std::string& value);

    /// <summary>
    /// 间隔时间。
    /// </summary>

    int32_t getIntervalHour() const;
    bool intervalHourIsSet() const;
    void unsetintervalHour();
    void setIntervalHour(int32_t value);


protected:
    std::string period_;
    bool periodIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::vector<std::string> compareType_;
    bool compareTypeIsSet_;
    std::string nextCompareTime_;
    bool nextCompareTimeIsSet_;
    std::string comparePolicy_;
    bool comparePolicyIsSet_;
    int32_t intervalHour_;
    bool intervalHourIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowComparePolicyResponse_H_
