
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_List2dModelTrainingJobRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_List2dModelTrainingJobRequest_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  List2dModelTrainingJobRequest
    : public ModelBase
{
public:
    List2dModelTrainingJobRequest();
    virtual ~List2dModelTrainingJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// List2dModelTrainingJobRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。  格式为(YYYYMMDD&#39;T&#39;HHMMSS&#39;Z&#39;)。
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带项目ID信息。
    /// </summary>

    std::string getXProjectId() const;
    bool xProjectIdIsSet() const;
    void unsetxProjectId();
    void setXProjectId(const std::string& value);

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

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
    /// 排序字段，支持的排序方式有： - 按创建时间排序：create_time - 按更新时间排序：update_time - 按资产排序：asset_order
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 排序方式。 * asc：升序 * desc：降序  默认asc升序。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

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
    /// 任务状态，默认所有状态。  可多个状态查询，使用英文逗号分隔。  如state&#x3D;CREATING,PUBLISHED
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 查询租户id。
    /// </summary>

    std::string getQueryProjectId() const;
    bool queryProjectIdIsSet() const;
    void unsetqueryProjectId();
    void setQueryProjectId(const std::string& value);

    /// <summary>
    /// 任务批次名称。
    /// </summary>

    std::string getBatchName() const;
    bool batchNameIsSet() const;
    void unsetbatchName();
    void setBatchName(const std::string& value);

    /// <summary>
    /// 任务标签。
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 分身数字人模型名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模型分辨率
    /// </summary>

    std::string getModelResolution() const;
    bool modelResolutionIsSet() const;
    void unsetmodelResolution();
    void setModelResolution(const std::string& value);

    /// <summary>
    /// 是否是flexus任务
    /// </summary>

    bool isIsFlexus() const;
    bool isFlexusIsSet() const;
    void unsetisFlexus();
    void setIsFlexus(bool value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string createUntil_;
    bool createUntilIsSet_;
    std::string createSince_;
    bool createSinceIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string queryProjectId_;
    bool queryProjectIdIsSet_;
    std::string batchName_;
    bool batchNameIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string modelResolution_;
    bool modelResolutionIsSet_;
    bool isFlexus_;
    bool isFlexusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    List2dModelTrainingJobRequest& dereference_from_shared_ptr(std::shared_ptr<List2dModelTrainingJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_List2dModelTrainingJobRequest_H_
