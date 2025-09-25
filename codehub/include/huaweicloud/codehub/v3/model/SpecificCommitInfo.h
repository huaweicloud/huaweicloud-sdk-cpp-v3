
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_SpecificCommitInfo_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_SpecificCommitInfo_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/codehub/v3/model/SpecificCommitInfo_last_pipeline.h>
#include <huaweicloud/codehub/v3/model/SpecificCommitInfo_stats.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  SpecificCommitInfo
    : public ModelBase
{
public:
    SpecificCommitInfo();
    virtual ~SpecificCommitInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SpecificCommitInfo members

    /// <summary>
    /// 提交对应的SHA id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 提交对应的短SHA id
    /// </summary>

    std::string getShortId() const;
    bool shortIdIsSet() const;
    void unsetshortId();
    void setShortId(const std::string& value);

    /// <summary>
    /// 提交标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 作者
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 作者邮箱
    /// </summary>

    std::string getAuthorEmail() const;
    bool authorEmailIsSet() const;
    void unsetauthorEmail();
    void setAuthorEmail(const std::string& value);

    /// <summary>
    /// 提交作者
    /// </summary>

    std::string getCommitterName() const;
    bool committerNameIsSet() const;
    void unsetcommitterName();
    void setCommitterName(const std::string& value);

    /// <summary>
    /// 提交作者邮箱
    /// </summary>

    std::string getCommitterEmail() const;
    bool committerEmailIsSet() const;
    void unsetcommitterEmail();
    void setCommitterEmail(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 提交信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 父提交id
    /// </summary>

    std::vector<std::string>& getParentIds();
    bool parentIdsIsSet() const;
    void unsetparentIds();
    void setParentIds(const std::vector<std::string>& value);

    /// <summary>
    /// 提交时间
    /// </summary>

    utility::datetime getCommittedDate() const;
    bool committedDateIsSet() const;
    void unsetcommittedDate();
    void setCommittedDate(const utility::datetime& value);

    /// <summary>
    /// 作者提交时间
    /// </summary>

    utility::datetime getAuthoredDate() const;
    bool authoredDateIsSet() const;
    void unsetauthoredDate();
    void setAuthoredDate(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>

    SpecificCommitInfo_stats getStats() const;
    bool statsIsSet() const;
    void unsetstats();
    void setStats(const SpecificCommitInfo_stats& value);

    /// <summary>
    /// 
    /// </summary>

    SpecificCommitInfo_last_pipeline getLastPipeline() const;
    bool lastPipelineIsSet() const;
    void unsetlastPipeline();
    void setLastPipeline(const SpecificCommitInfo_last_pipeline& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string shortId_;
    bool shortIdIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string authorEmail_;
    bool authorEmailIsSet_;
    std::string committerName_;
    bool committerNameIsSet_;
    std::string committerEmail_;
    bool committerEmailIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<std::string> parentIds_;
    bool parentIdsIsSet_;
    utility::datetime committedDate_;
    bool committedDateIsSet_;
    utility::datetime authoredDate_;
    bool authoredDateIsSet_;
    SpecificCommitInfo_stats stats_;
    bool statsIsSet_;
    SpecificCommitInfo_last_pipeline lastPipeline_;
    bool lastPipelineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_SpecificCommitInfo_H_
