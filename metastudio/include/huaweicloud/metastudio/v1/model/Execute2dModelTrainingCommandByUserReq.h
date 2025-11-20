
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Execute2dModelTrainingCommandByUserReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Execute2dModelTrainingCommandByUserReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/CommentData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 租户执行分身数字人模型训练任务命令请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  Execute2dModelTrainingCommandByUserReq
    : public ModelBase
{
public:
    Execute2dModelTrainingCommandByUserReq();
    virtual ~Execute2dModelTrainingCommandByUserReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Execute2dModelTrainingCommandByUserReq members

    /// <summary>
    /// 命令类型。 * SUBMITVERIFYING: 提交审核 * CONFIRM_ACCEPT：用户确认训练效果 * CONFIRM_REJECT：用户驳回训练效果 * CONFIRM_ANSWER：用户答复 * CONFIRM_PENDING：用户挂起任务 * CONFIRM_ACTIVE：用户激活任务 * GET_MULTIPART_UPLOADED：获取训练视频已上传分片信息 * CONFIRM_REPAIR:用户发起优化模型请求 * CONFIRM_MULTIPART_UPLOADED：确认训练视频所有分片文件已上传 * GET_ACTION_VIDEO_MULTIPART_UPLOADED：获取动作编排视频分片上传地址 * CONFIRM_ACTION_VIDEO_MULTIPART_UPLOADED：确认动作编排视频所有分片文件已上传 * CONFIRM_AUTHORIZATION_LETTER：确认授权书已上传 &gt; * CONFIRM_ACCEPT、CONFIRM_REJECT、CONFIRM_ANSWER、CONFIRM_PENDING、CONFIRM_ACTIVE命令仅NA白名单用户可用。 * DELETE_JOB_VIDEO：删除任务相关视频
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// 命令类型： * UPDATE_VIDEO: 更新视频 * UPLOAD_VIDEO: 上传视频 * CONFIRM_ACTION_VIDEO: 确认动作编排视频 * GET_ACTION_VIDEO_MULTIPART: 获取动作编排视频分片
    /// </summary>

    std::string getCommandMessage() const;
    bool commandMessageIsSet() const;
    void unsetcommandMessage();
    void setCommandMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommentData getCommentData() const;
    bool commentDataIsSet() const;
    void unsetcommentData();
    void setCommentData(const CommentData& value);

    /// <summary>
    /// 操作原因
    /// </summary>

    std::string getOperationReason() const;
    bool operationReasonIsSet() const;
    void unsetoperationReason();
    void setOperationReason(const std::string& value);


protected:
    std::string command_;
    bool commandIsSet_;
    std::string commandMessage_;
    bool commandMessageIsSet_;
    CommentData commentData_;
    bool commentDataIsSet_;
    std::string operationReason_;
    bool operationReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Execute2dModelTrainingCommandByUserReq_H_
