
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListStatSummaryResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListStatSummaryResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/StatSummary.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListStatSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStatSummaryResponse();
    virtual ~ListStatSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStatSummaryResponse members

    /// <summary>
    /// 统计概览信息
    /// </summary>

    std::vector<StatSummary>& getSummary();
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const std::vector<StatSummary>& value);

    /// <summary>
    /// 该指标的总值，精确到小数点后两位。 
    /// </summary>

    float getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(float value);

    /// <summary>
    /// 统计类型。取值如下： - video_duration, 转码片源时长统计，单位：分钟。 - remux_file_duration，转封装片源时长统计，单位：分钟。 - transcode_task_number，转码次数统计，单位：次。 - transcode_duration，转码耗时时长统计，单位：分钟。 
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);


protected:
    std::vector<StatSummary> summary_;
    bool summaryIsSet_;
    float total_;
    bool totalIsSet_;
    std::string statType_;
    bool statTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListStatSummaryResponse_H_
