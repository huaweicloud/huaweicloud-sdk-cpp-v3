
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitSimpleResultDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitSimpleResultDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/CommitDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CommitSimpleResultDto
    : public ModelBase
{
public:
    CommitSimpleResultDto();
    virtual ~CommitSimpleResultDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitSimpleResultDto members

    /// <summary>
    /// 提交列表
    /// </summary>

    std::vector<CommitDto>& getCommits();
    bool commitsIsSet() const;
    void unsetcommits();
    void setCommits(const std::vector<CommitDto>& value);


protected:
    std::vector<CommitDto> commits_;
    bool commitsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitSimpleResultDto_H_
