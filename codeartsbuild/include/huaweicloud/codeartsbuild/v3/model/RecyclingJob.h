
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RecyclingJob_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RecyclingJob_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  RecyclingJob
    : public ModelBase
{
public:
    RecyclingJob();
    virtual ~RecyclingJob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecyclingJob members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// CodeArts项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 删除时间
    /// </summary>

    std::string getDeleteTime() const;
    bool deleteTimeIsSet() const;
    void unsetdeleteTime();
    void setDeleteTime(const std::string& value);

    /// <summary>
    /// 创建时间戳
    /// </summary>

    std::string getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(const std::string& value);

    /// <summary>
    /// 删除时间戳
    /// </summary>

    std::string getDeleteTimeStamp() const;
    bool deleteTimeStampIsSet() const;
    void unsetdeleteTimeStamp();
    void setDeleteTimeStamp(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string deleteTime_;
    bool deleteTimeIsSet_;
    std::string createTimeStamp_;
    bool createTimeStampIsSet_;
    std::string deleteTimeStamp_;
    bool deleteTimeStampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RecyclingJob_H_
