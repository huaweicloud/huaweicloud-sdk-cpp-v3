
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowOverviewResponse_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowOverviewResponse_H_


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
class HUAWEICLOUD_TICS_V1_EXPORT  ShowOverviewResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOverviewResponse();
    virtual ~ShowOverviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOverviewResponse members

    /// <summary>
    /// 可信节点数
    /// </summary>

    int64_t getAgentCnt() const;
    bool agentCntIsSet() const;
    void unsetagentCnt();
    void setAgentCnt(int64_t value);

    /// <summary>
    /// 作业执行历史数
    /// </summary>

    int64_t getInstanceCnt() const;
    bool instanceCntIsSet() const;
    void unsetinstanceCnt();
    void setInstanceCnt(int64_t value);

    /// <summary>
    /// 有效联盟数
    /// </summary>

    int64_t getLeagueCnt() const;
    bool leagueCntIsSet() const;
    void unsetleagueCnt();
    void setLeagueCnt(int64_t value);

    /// <summary>
    /// 待处理消息通知数
    /// </summary>

    int64_t getNoticeToHandleCnt() const;
    bool noticeToHandleCntIsSet() const;
    void unsetnoticeToHandleCnt();
    void setNoticeToHandleCnt(int64_t value);


protected:
    int64_t agentCnt_;
    bool agentCntIsSet_;
    int64_t instanceCnt_;
    bool instanceCntIsSet_;
    int64_t leagueCnt_;
    bool leagueCntIsSet_;
    int64_t noticeToHandleCnt_;
    bool noticeToHandleCntIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowOverviewResponse_H_
