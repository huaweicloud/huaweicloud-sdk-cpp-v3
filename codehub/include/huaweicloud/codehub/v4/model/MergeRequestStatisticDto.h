
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestStatisticDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestStatisticDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/codehub/v4/model/MergeRequestLineChange.h>
#include <huaweicloud/codehub/v4/model/NotesCountDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 合并请求统计数据
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  MergeRequestStatisticDto
    : public ModelBase
{
public:
    MergeRequestStatisticDto();
    virtual ~MergeRequestStatisticDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestStatisticDto members

    /// <summary>
    /// 合并请求ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 合并请求序号
    /// </summary>

    int32_t getIid() const;
    bool iidIsSet() const;
    void unsetiid();
    void setIid(int32_t value);

    /// <summary>
    /// 合并请求标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 合并请求状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 合并请求提交数
    /// </summary>

    int32_t getCommitsCount() const;
    bool commitsCountIsSet() const;
    void unsetcommitsCount();
    void setCommitsCount(int32_t value);

    /// <summary>
    /// 合并请求文件变数
    /// </summary>

    std::string getChangedFilesCount() const;
    bool changedFilesCountIsSet() const;
    void unsetchangedFilesCount();
    void setChangedFilesCount(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NotesCountDto getNotesCount() const;
    bool notesCountIsSet() const;
    void unsetnotesCount();
    void setNotesCount(const NotesCountDto& value);

    /// <summary>
    /// 
    /// </summary>

    MergeRequestLineChange getChangedLinesCount() const;
    bool changedLinesCountIsSet() const;
    void unsetchangedLinesCount();
    void setChangedLinesCount(const MergeRequestLineChange& value);

    /// <summary>
    /// 合并请求合入异常信息
    /// </summary>

    std::string getMergeError() const;
    bool mergeErrorIsSet() const;
    void unsetmergeError();
    void setMergeError(const std::string& value);

    /// <summary>
    /// 合并请求合入异常信息
    /// </summary>

    Object getJsonMergeError() const;
    bool jsonMergeErrorIsSet() const;
    void unsetjsonMergeError();
    void setJsonMergeError(const Object& value);

    /// <summary>
    /// 合并请求评分数
    /// </summary>

    int32_t getVotes() const;
    bool votesIsSet() const;
    void unsetvotes();
    void setVotes(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t iid_;
    bool iidIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string state_;
    bool stateIsSet_;
    int32_t commitsCount_;
    bool commitsCountIsSet_;
    std::string changedFilesCount_;
    bool changedFilesCountIsSet_;
    NotesCountDto notesCount_;
    bool notesCountIsSet_;
    MergeRequestLineChange changedLinesCount_;
    bool changedLinesCountIsSet_;
    std::string mergeError_;
    bool mergeErrorIsSet_;
    Object jsonMergeError_;
    bool jsonMergeErrorIsSet_;
    int32_t votes_;
    bool votesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestStatisticDto_H_
