
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobStatisticsResponse_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobStatisticsResponse_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ShowJobStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowJobStatisticsResponse();
    virtual ~ShowJobStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobStatisticsResponse members

    /// <summary>
    /// 作业数量统计
    /// </summary>

    int64_t getJobCnt() const;
    bool jobCntIsSet() const;
    void unsetjobCnt();
    void setJobCnt(int64_t value);

    /// <summary>
    /// 作业实例次数
    /// </summary>

    int64_t getJobInsCnt() const;
    bool jobInsCntIsSet() const;
    void unsetjobInsCnt();
    void setJobInsCnt(int64_t value);

    /// <summary>
    /// 作业实例失败次数
    /// </summary>

    int64_t getJobInsFailCnt() const;
    bool jobInsFailCntIsSet() const;
    void unsetjobInsFailCnt();
    void setJobInsFailCnt(int64_t value);

    /// <summary>
    /// 作业实例拦截次数
    /// </summary>

    int64_t getJobInsInterceptCnt() const;
    bool jobInsInterceptCntIsSet() const;
    void unsetjobInsInterceptCnt();
    void setJobInsInterceptCnt(int64_t value);

    /// <summary>
    /// 作业实例成功次数
    /// </summary>

    int64_t getJobInsSuccessCnt() const;
    bool jobInsSuccessCntIsSet() const;
    void unsetjobInsSuccessCnt();
    void setJobInsSuccessCnt(int64_t value);


protected:
    int64_t jobCnt_;
    bool jobCntIsSet_;
    int64_t jobInsCnt_;
    bool jobInsCntIsSet_;
    int64_t jobInsFailCnt_;
    bool jobInsFailCntIsSet_;
    int64_t jobInsInterceptCnt_;
    bool jobInsInterceptCntIsSet_;
    int64_t jobInsSuccessCnt_;
    bool jobInsSuccessCntIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowJobStatisticsResponse_H_
