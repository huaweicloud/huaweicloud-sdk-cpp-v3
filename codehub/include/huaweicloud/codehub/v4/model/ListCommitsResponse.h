
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListCommitsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListCommitsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/CommitDto.h>
#include <huaweicloud/codehub/v4/model/DateTitleDto.h>
#include <huaweicloud/codehub/v4/model/CommitSimpleResultDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListCommitsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCommitsResponse();
    virtual ~ListCommitsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCommitsResponse members

    /// <summary>
    /// 提交列表
    /// </summary>

    std::vector<CommitDto>& getCommits();
    bool commitsIsSet() const;
    void unsetcommits();
    void setCommits(const std::vector<CommitDto>& value);

    /// <summary>
    /// 按天统计信息
    /// </summary>

    std::vector<DateTitleDto>& getDateTitle();
    bool dateTitleIsSet() const;
    void unsetdateTitle();
    void setDateTitle(const std::vector<DateTitleDto>& value);


protected:
    std::vector<CommitDto> commits_;
    bool commitsIsSet_;
    std::vector<DateTitleDto> dateTitle_;
    bool dateTitleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListCommitsResponse_H_
