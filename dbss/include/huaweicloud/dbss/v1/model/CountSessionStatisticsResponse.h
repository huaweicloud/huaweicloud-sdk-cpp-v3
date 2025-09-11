
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountSessionStatisticsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountSessionStatisticsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/SessionStatisticsBean.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CountSessionStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    CountSessionStatisticsResponse();
    virtual ~CountSessionStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountSessionStatisticsResponse members

    /// <summary>
    /// 生成时间
    /// </summary>

    std::string getGenerateTime() const;
    bool generateTimeIsSet() const;
    void unsetgenerateTime();
    void setGenerateTime(const std::string& value);

    /// <summary>
    /// 统计数据列表
    /// </summary>

    std::vector<SessionStatisticsBean>& getSessionStatistics();
    bool sessionStatisticsIsSet() const;
    void unsetsessionStatistics();
    void setSessionStatistics(const std::vector<SessionStatisticsBean>& value);

    /// <summary>
    /// 状态  - FINISHED：已完成  - RUNNING：运行中
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string generateTime_;
    bool generateTimeIsSet_;
    std::vector<SessionStatisticsBean> sessionStatistics_;
    bool sessionStatisticsIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountSessionStatisticsResponse_H_
