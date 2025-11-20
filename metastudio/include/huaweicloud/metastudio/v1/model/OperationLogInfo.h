
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OperationLogInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OperationLogInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 操作日志。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  OperationLogInfo
    : public ModelBase
{
public:
    OperationLogInfo();
    virtual ~OperationLogInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperationLogInfo members

    /// <summary>
    /// 操作时间,格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”
    /// </summary>

    std::string getOperateTime() const;
    bool operateTimeIsSet() const;
    void unsetoperateTime();
    void setOperateTime(const std::string& value);

    /// <summary>
    /// 命令执行结果。 * USER_CREATE_JOD：用户开始分身数字人定制 * USER_VERIFYING_SUBMITTED：用户提交审核 * SYSTEM_VERIFY_FAILED：自动审核失败 * ADMIN_UPDATE_BEAUTY_LEVEL：管理员更新美白等级 * ADMIN_UPDATE_JOB_PRIORITY：管理员更新任务等级 * SYSTEM_VERIFY_SUCCESS：自动审核成功 * ADMIN_VERIFY_SUCCESS：人工审核通过 * ADMIN_VERIFY_FAILED：人工审核不通过 * SYSTEM_TRAIN_DATA_PREPROCESSING：训练数据预处理中 * SYSTEM_TRAIN_DATA_PREPROCESS_FAILED：训练数据预处理失败 * SYSTEM_TRAIN_DATA_PREPROCESS_SUCCESS：训练数据预处理成功 * SYSTEM_ACTION_GENERATE_DATA_PREPROCESSING：动作编排原子动作生成中 * SYSTEM_ACTION_GENERATE_DATA_SUCCESS：动作编排原子动作生成成功 * SYSTEM_ACTION_GENERATE_ORI_SUCCESS：动作编排资产数据生成成功 * SYSTEM_ACTION_GENERATE_DATA_FAILED：动作编排原子动作生成失败 * SYSTEM_ACTION_GENERATE_ORI_FAILED：动作编排资产数据生成失败 * SYSTEM_ACTION_GENERATE_ORI_PREPROCESSING：动作编排资产数据生成中 * SYSTEM_TRAINING：开始训练 * ADMIN_STOP_TRAINING_DATA_PREPROCESS：人工中止训练 * ADMIN_STOP_BEAUTY_PREPROCESS：人工中止美白 * ADMIN_STOP_INFERENCE_DATA_PREPROCESS：人工中止推理预处理 * ADMIN_STOP_TRAIN：人工终止训练 * SYSTEM_TRAIN_FAILED：训练失败 * SYSTEM_TRAIN_SUCCESS：训练成功 * SYSTEM_INFERENCE_DATA_PREPROCESSING：推理数据预处理中 * SYSTEM_INFERENCE_DATA_PREPROCESS_FAILED：推理数据预处理失败 * SYSTEM_INFERENCE_DATA_PREPROCESS_SUCCESS：推理数据预处理成功 * SYSTEM_JOB_SUCCESS：任务处理完成 * ADMIN_MASK_UPLOADED：遮罩文件上传完成（已废弃） * ADMIN_UPDATE_VIDEO：管理员更换视频 * ADMIN_UPDATE_ACTION_VIDEO：管理员更换动作编排视频 * ADMIN_RESET：管理员一键重置 * ADMIN_ACCEPT：管理员通过 * USER_REPAIR：用户修复 * SYSTEM_UPDATE_COVER：更换封面 * SYSTEM_ANALYSE_FILE_INFO：系统解析文件信息 * ADMIN_SET_SILENCE_REPEAT_NUM：管理员设置静默轮数 * SYSTEM_MARKABLE_VIDEO：标记视频生成任务 * SYSTEM_MASK_VERIFY_VIDEO：校验视频生成任务 * SYSTEM_MASK_VERIFY_VIDEO_SUCCESS：校验视频生成成功 * SYSTEM_MASK_VERIFY_VIDEO_FAILED：校验视频生成失败 * SYSTEM_MARKABLE_VIDEO_SUCCESS：标记视频生成成功 * SYSTEM_BEAUTY_PREPROCESSING：美白处理中 * SYSTEM_BEAUTY_PREPROCESS_FAILED：美白处理失败 * ADMIN_CONFIRM_ACTION：管理员确认动作 * ADMIN_STOP_ACTION_GENERATE_DATA_PREPROCESS：人工中止原子动作生成 * ADMIN_STOP_ACTION_GENERATE_ORI_PREPROCESS：人工中止动作编排 * SYSTEM_BEAUTY_PREPROCESS_SUCCESS：美白视频训练预处理成功 * SYSTEM_COMPILE_FAILED：转编译失败 * SYSTEM_COMPILE_SUCCESS：转编译成功 * SYSTEM_MARKABLE_VIDEO_FAILED：标记视频生成失败 * ADMIN_UPDATE_COMPILE：管理员更新转编译配置 * ADMIN_UPDATE_INFERENCE_DATA_PROCESS_VIDEO：管理员更新推理预处理时间段信息 * SYSTEM_EXECUTE_COMPILE：执行转编译 * SYSTEM_EXECUTE_BEAUTY：执行美白处理 * SYSTEM_MASK_VIDEO_AND_ACTION_TIME_SUCCESS：自动标记成功 * SYSTEM_MASK_VIDEO_AND_ACTION_TIME_FAILED：自动标记失败 * USER_UPDATE_VIDEO：用户更换视频 * ADMIN_UPLOAD_JSON_DATA：管理员上传动作数据 * ADMIN_DELETE_JSON_DATA：管理员删除动作数据 * ADMIN_UPDATE_GENERAL_CONFIG：管理员更新通用配置 * ADMIN_MASK_ACTION_TIME：管理员标记 * STOP_COMPILE：人工中止转编译 * MAKE_TEST_VIDEO：测试视频 * ADMIN_SET_FLEXUS_RETRY_COUNT：管理员设置flexus任务重试次数 * USER_DELETE_JOB_VIDEO：用户删除任务相关视频 * ADMIN_SET_VIDEO_ROTATION_ANGLE：管理员设置视频旋转角度 * ADMIN_RE_SET_VIDEO_ROTATION_ANGLE：管理员恢复视频旋转角度 * SYSTEM_SET_VIDEO_ROTATION_ANGLE_SUCCESS：视频旋转成功 * SYSTEM_SET_VIDEO_ROTATION_ANGLE_FAILED：视频旋转失败 * COMPILE_JOB_IS_CONSUME：转编译任务被消费 * RESTART_TEST_VIDEO_CHECK: 重新执行测试视频检测 * SKIP_TEST_VIDEO_CHECK:跳过测试视频检测 * WAIT_TEST_VIDEO_CHECK:等待测试视频检测 * TEST_VIDEO_CHECK_PROCESSING:测试视频检测中 * TEST_VIDEO_CHECK_SUCCESS:测试视频检测成功 * TEST_VIDEO_CHECK_FAILED:测试视频检测失败 * REDO_INFERENCE_PREPROCESSING：重新预处理推理数据 * REDO_TRAINING_PREPROCESSING：重新预处理训练数据 * REDO_TRAINING：重新训练 * REDO_ACTION_DATA_GENERATE：重新生成原子动作 * REDO_ACTION_ORI_GENERATE：重新动作编排 * VIDEO_ANALYZE_PROCESSING：视频检测中 * VIDEO_ANALYZE_SUCCESS：视频检测通过 * VIDEO_ANALYZE_FAILED：视频检测未通过 * ADMIN_RESOLUTION_NORMALIZE：管理员分辨率归一化 * SYSTEM_SET_RESOLUTION_NORMALIZE_SUCCESS：管理员分辨率归一化成功 * SYSTEM_SET_RESOLUTION_NORMALIZE_FAILED：管理员分辨率归一化失败 * SYSTEM_ACTION_MARK_PREPROCESS_FAILED 动作标定任务失败 * SYSTEM_ACTION_MARK_PREPROCESSING：动作标定任务生成中 * SYSTEM_ACTION_MARK_PREPROCESS_SUCCESS：动作标定任务成功 * REDO_ACTION_MARK：重新生成原子动作标记 * CONFIRM_ACTION_MARK：确定预标记原子动作 * MANUL_STOP_ACTION_MARK：中止动作标定 * TIME_OUT_RETRY：超时重试
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

    /// <summary>
    /// 日志描述。用于记录人工或自动审核不通过时的审核意见。
    /// </summary>

    std::string getLogDescription() const;
    bool logDescriptionIsSet() const;
    void unsetlogDescription();
    void setLogDescription(const std::string& value);

    /// <summary>
    /// 操作人员。 * USER：用户 * ADMIN：管理员 * SYSTEM：系统
    /// </summary>

    std::string getOperateUser() const;
    bool operateUserIsSet() const;
    void unsetoperateUser();
    void setOperateUser(const std::string& value);

    /// <summary>
    /// 系统自动驳回时的错误码： * 44005901：视频分辨率不符合要求，目前只接受 1080p(1920x1080, 1080x1920) 或 4K(3840x2160, 2160x3840) 这四种分辨率
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 任务被管理员重新执行的问题原因列表。
    /// </summary>

    std::vector<std::string>& getRedoReasons();
    bool redoReasonsIsSet() const;
    void unsetredoReasons();
    void setRedoReasons(const std::vector<std::string>& value);


protected:
    std::string operateTime_;
    bool operateTimeIsSet_;
    std::string logType_;
    bool logTypeIsSet_;
    std::string logDescription_;
    bool logDescriptionIsSet_;
    std::string operateUser_;
    bool operateUserIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::vector<std::string> redoReasons_;
    bool redoReasonsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OperationLogInfo_H_
