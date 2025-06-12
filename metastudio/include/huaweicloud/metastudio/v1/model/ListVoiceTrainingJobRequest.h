
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVoiceTrainingJobRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVoiceTrainingJobRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListVoiceTrainingJobRequest
    : public ModelBase
{
public:
    ListVoiceTrainingJobRequest();
    virtual ~ListVoiceTrainingJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVoiceTrainingJobRequest members

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 过滤创建时间&lt;&#x3D;输入时间的记录。
    /// </summary>

    std::string getCreateUntil() const;
    bool createUntilIsSet() const;
    void unsetcreateUntil();
    void setCreateUntil(const std::string& value);

    /// <summary>
    /// 过滤创建时间&gt;&#x3D;输入时间的记录。
    /// </summary>

    std::string getCreateSince() const;
    bool createSinceIsSet() const;
    void unsetcreateSince();
    void setCreateSince(const std::string& value);

    /// <summary>
    /// 过滤更新时间&lt;&#x3D;输入时间的记录。
    /// </summary>

    std::string getUpdateUntil() const;
    bool updateUntilIsSet() const;
    void unsetupdateUntil();
    void setUpdateUntil(const std::string& value);

    /// <summary>
    /// 过滤更新时间&gt;&#x3D;输入时间的记录。
    /// </summary>

    std::string getUpdateSince() const;
    bool updateSinceIsSet() const;
    void unsetupdateSince();
    void setUpdateSince(const std::string& value);

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

    /// <summary>
    /// 任务状态，默认所有状态。 可多个状态查询，使用英文逗号分隔。 如state&#x3D;FAILED,WAITING
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 声音名称。
    /// </summary>

    std::string getVoiceName() const;
    bool voiceNameIsSet() const;
    void unsetvoiceName();
    void setVoiceName(const std::string& value);

    /// <summary>
    /// 任务标签。
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 训练类型。 * BASIC: 基础版(20句话) * MIDDLE: 进阶版(100句话) * ADVANCE: 高级版 * THIRD_PARTY: 第三方出门问问训练版 * THIRD_PARTY_LJZN: 第三方逻辑智能训练版 * FLEXUS: Flexus版---用的是大模型特征提取
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 批次名称。
    /// </summary>

    std::string getBatchName() const;
    bool batchNameIsSet() const;
    void unsetbatchName();
    void setBatchName(const std::string& value);

    /// <summary>
    /// 排序字段，当前支持：ceate_time/update_time
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 排序规则：desc(降序)/asc(升序)
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string createUntil_;
    bool createUntilIsSet_;
    std::string createSince_;
    bool createSinceIsSet_;
    std::string updateUntil_;
    bool updateUntilIsSet_;
    std::string updateSince_;
    bool updateSinceIsSet_;
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string voiceName_;
    bool voiceNameIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string batchName_;
    bool batchNameIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVoiceTrainingJobRequest& dereference_from_shared_ptr(std::shared_ptr<ListVoiceTrainingJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVoiceTrainingJobRequest_H_
