
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestCommitsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestCommitsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/MergeRequestCommitDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListMergeRequestCommitsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMergeRequestCommitsResponse();
    virtual ~ListMergeRequestCommitsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestCommitsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<MergeRequestCommitDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<MergeRequestCommitDto>& value);


protected:
    std::vector<MergeRequestCommitDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestCommitsResponse_H_
